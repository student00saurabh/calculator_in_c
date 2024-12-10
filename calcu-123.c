#include<stdio.h>
#include<conio.h>

void calculator(int a, int b, char opp)
{
    int c;
    if(opp=='+')
    {
        c=a+b;
        printf("sum is =%d \n",c);
    }
    else if(opp=='-')
    {
        c=a-b;
        printf("subtraction is =%d \n",c);
    }
    else if(opp=='*')
    {
        c=a*b;
        printf("multiplication is =%d \n",c);
    }
    else if(opp=='/')
    {
        c=a/b;
        printf("division is =%d \n",c);
    }
    else if(opp=='%')
    {
        c=a%b;
        printf("modulus is =%d \n",c);
    }
    else if(opp=='^')
    {
        c = pow(a,b);
        printf("power is = %d \n",c);
    }
    else
    {
        printf(" enter a valid operator \n");
    }

}
void main()
{
    printf("This is a calculator\n");
    int a,b,k=1;
    char opp;
    while(1)
    {
        if(k==1)
        {
            printf(" enter frist number\n");
            scanf("%d",&a);
            printf("enter second number\n");
            scanf("%d",&b);
            printf("enter an operator (+ - * / % ^)\n");
            scanf("%s",&opp);
            calculator(a,b,opp);
            printf("you can again calculate \npress 1 for re operations : \nenter 0 for quit from calculator : \n");
            scanf("%d",&k);
        }
        else if(k==0)
        {
        printf("Thanks for using calculator\n");
        break;
        }
        else
        {
        printf("please select a correct number\n");
        scanf("%d",&k);
        }

    }
    getch();
}