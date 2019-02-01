// TODO (user#1#01/28/19): New Line Problem occurring due to scanf(confirmed). (solved in 1.0.1.0)
//For Moving the '*', press d+enter to go right  
//For Moving the '*', press s+enter to go down,  

#include<stdio.h>
void right(int r)
{
    while (r--)
    printf(" ");
    printf("*");
}
void down(int d, int r)
{
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
            case 'W':
                u++;
                break;
            case 'A':
                l++;
                break;
            case 'S':
                d++;
                down(d,r);
                break;
            case 'D':
                r++;
                right(r);
                break;
        }
    }
}

