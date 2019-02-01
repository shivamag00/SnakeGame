//For Moving the '*', press d+enter to go right, press a+enter to go left  
//For Moving the '*', press s+enter to go down, press w+enter to go up 

// TODO (user#1#01/28/19):1. New Line Problem occurring due to scanf(confirmed). (solved)
                            // system("cls") used to clear the screen on terminal, may be the solution.
                                // Ad -1. New Line Solved
                                // DisAd - Need to store every step in memory.
// TODO (user#1#01/28/19):2. Snake moves continuously in the given direction.

// Investigate:1. scanf("%c",&a); and give multiple characters.
#include<stdio.h>
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
        scanf("%c",&a);
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

