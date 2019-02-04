// TODO (user#1#01/28/19):1. Control Single step movements of snake.
              //Prob1.     //New Line Problem occurring due to scanf(confirmed). (solved)
                                // system("cls") may be the solution.
                                      // Ad -1. New Line Solved
                                      // DisAd - Need to store every step in memory.
                          // _getch() is can be used to not display the movement key on terminal.
// TODO (user#1#01/28/19):2. Continuous Snake
              //Prob2.    //Delay Loop time Problem (solved)
                                       // Sleep() is the solution.
             //Prob3.     //Take input for further movement at the same time the loop is being executed.(unsolved)

// Investigate:1. scanf("%c",&a); and give multiple characters.
#include<stdio.h>
#include<conio.h> //used for calling getch() and _kbhit function (explained later).
#include<windows.h> //used for calling the function 'sleep()' which slows down the execution rate of a loop. 
void right(int r, int d)
{
    int k=0,i=0;
    while(d--)
    printf("\n");
    while (1)
    {
        k++;
        for (i=0;i<=k;i++)
        {
         printf(" ");
        }
        printf("*");
        if(_kbhit()!=0) //_kbhit is a function that returns 1 if a key is pressed on the keyboard, otherwise returns 0.
            break;
        Sleep(190);
        system("cls");
    }
}
void down(int d, int r)
{
   int k=0,i=0,l=0;
    while (1)
    {
        l++;
        for (i=0;i<=l;i++)
        {
         printf("\n");
        }
        for(k=0;k<=r;k++)
        printf(" ");
        printf("*");
        if(_kbhit()!=0)
            break;
        Sleep(190);
        system("cls");
    }
}

void left(int r, int d)
{
    while(d--)
    printf("\n");
    while (r--)
    printf(" ");
    printf("*");
}
void up(int d, int r)
{
    while(d--)
    printf("\n");
    while (r--)
    printf(" ");
    printf("*");
}

void main()
{
    int u=0,d=0,l=0,r=0, hit=0;
    while (1)
    {
        char a,j;
        a=_getch();
        switch(a)
        {
            case 'w':
                system("cls");
                d--;
                up(d,r);
                break;
            case 'a':
                system("cls");
                r--;
                left(r,d);
                break;
            case 's':
                d++;
                system("cls");
                down(d,r);
                break;
            case 'd':
                system("cls");
                r++;
                right(r,d);
                break;
        }
    }
}

