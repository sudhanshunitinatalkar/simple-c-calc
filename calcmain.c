#include<stdio.h>
int main()
{
    int num1,num2,op;
    printf("this is a simple c integer calculator\ninput a number:");
    scanf("%d",&num1);
    printf("\ninput another number:");
    scanf("%d",&num2);
    printf("\nenter 1 for add\nenter 2 for minus\nenter 3 for mult\nenter 4 for div\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:printf("%d",num1+num2);
        break;
        case 2:printf("%d",num1-num2);
        break;
        case 3:printf("%d",num1*num2);
        break;
        case 4:printf("%d",num1/num2);
        break;
        default:printf("invalid option");
    }
    
    getint();
    return 0;
}