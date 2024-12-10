#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i = 0; i<=n; i++)
    {
        for(int j = n; j>=i; j--)
        {
            printf(" ");
        }
        for(int k= 1; k<=(2*i+1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=0; i<=(2*n+2); i++)
    {
        printf("*");
    }
    printf("\n");

    for(int i=0; i<=n/2; i++)
    {
        printf(" ");
        for(int j=1; j<=(2*n+1); j++)
        {
            if(j==1||j==(2*n-1))
            {
                printf("**");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf(" ");
    for(int i=1; i<=(2*n+1); i++)
    {
        if(i>=(n/2+2) && i<=(n+4) )
        {
            printf("*");
        }
        else if(i==1 || i==(2*n-1))
        {
            printf("**");
        }
        else {
            printf(" ");
        }
    }
    printf("\n");
    for(int i=0; i<=n/2; i++)
    {
        printf(" ");
        for(int j=1; j<=(2*n+1); j++)
        {
            if(j==1||j==(2*n-3) || j==(n/2+2) || j==(n+2))
            {
                printf("**");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf(" ");
for(int i=1;i<=(2*n+1);i++)
{
printf("*");
}

    getch();
}
    