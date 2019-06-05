#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
int n=30,gameover,flag;
int x,y,fx,fy,score=0;
int tailx[100],taily[100];
int tail=0;
void setup()
{
    gameover=0;
    x=n/2;
    y=n/2;
    label1:
    fx=rand()%30;
    if(fx==0)
        goto label1;
    label2:
    fy=rand()%30;
    if(fy==0)
        goto label2;
}

void box()
{
    int i,j,k;
    system("cls");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || i==n || j==n)
            {
                printf("#");
            }
            else
                {
                    if(i==x && j==y)
                        printf("O");
                    else if(i==fx && j==fy)
                        printf("*");
                    else
                        {
                            int f=0;
                            for(k=0;k<tail;k++)
                            {
                                if(i==tailx[k] && j==taily[k])
                                {
                                    printf("o");
                                    f=1;
                                }
                            }
                            if(f==0)
                            {
                                printf(" ");
                            }

                        }
                }
        }
        printf("\n");
    }

}

void input()
{
    if(kbhit())
    {
        switch(getch())
        {
            case 'a':
                flag=1;
                break;
            case 's':
                flag=2;
                break;
            case 'w':
                flag=3;
                break;
            case 'd':
                flag=4;
                break;
            case 'x':
                gameover=1;
                break;

        }
    }
}

void logic()
{
    int prevx=tailx[0];
    int prevy=taily[0];
    int prev2x,prev2y,i;
    tailx[0]=x;
    taily[0]=y;

    for(i=1;i<tail;i++)
    {
        prev2x=tailx[i];
        prev2y=taily[i];
        tailx[i]=prevx;
        taily[i]=prevy;
        prevx=prev2x;
        prevy=prev2x;
    }


    switch(flag)
    {
        case 1:
            y--;
            break;
        case 2:
            x++;
            break;
        case 3:
            x--;
            break;
        case 4:
            y++;
            break;
        default:
            break;
    }
    if(x<=1 || x>=n || y<=1 || y>=n)
        gameover=1;
    for(i=0;i<tail;i++)
    {
        if(x==tailx[i] && y==taily[i])
            gameover=1;
    }

        if(x==fx && y==fy)
        {
            label3:
            fx=rand()%30;
            if(fx==0)
            goto label3;
            label4:
            fy=rand()%30;
            if(fy==0)
            goto label4;
            score++;
            tail++;
        }
}

int main()
{
    int i,j;
    setup();
    while(!gameover)
    {
        box();
        input();
        logic();
        Sleep(500);
    }
    if(gameover==1)
        printf("your score is \n%d\nBETTER LUCK NEXT TIME",score);
    return 0;
}
