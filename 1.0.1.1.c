//For Moving the '*', press d to go right, press a to go left  
//For Moving the '*', press s to go down, press w to go up 

// TODO (user#1#01/28/19):1. New Line Problem occurring due to scanf(confirmed). (solved)
                            // system("cls") may be the solution.
                                // Ad -1. New Line Solved
                                // DisAd - Need to store every step in memory.
  //(NEW)=>                  // _getch() is can be used to not display the movement key on command prompt.
// TODO (user#1#01/28/19):2. Continuous Snake

// Investigate:1. scanf("%c",&a); and give multiple characters.
#include<stdio.h>
#include<conio.h> // for using _getch() function
void right(int r, int d)
{
    while(d--)
    printf("\n");
    while (r--)
    printf(" ");
    printf("*");
}
void down(int d, int r)
{
    while(d--)
    printf("\n");
    while (r--)
    printf(" ");
    printf("*");
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
    int u=0,d=0,l=0,r=0;
    while (1)
    {
        char a,j;
        a=_getch(); //will take a single character as input without displaying it on the command prompt. There is also no need to press enter key after typing a character.
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

