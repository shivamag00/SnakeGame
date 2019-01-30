// TODO (user#1#01/28/19):1. New Line Problem occurring due to scanf(confirmed). (solved perhaps)
                            // system("cls") may be the solution.
                                // Ad -1. New Line Solved
                                // DisAd - Need to store every step in memory.
                            // _getch() is another solution.
// TODO (user#1#01/28/19):2. Continuous Snake

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

