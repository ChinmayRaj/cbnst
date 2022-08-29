#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    float a,b;
    int t;
    scanf("%d",&t);
    while(t--)
    {
    printf("calculator");
    printf("+ ,- ,*, /");
    printf("enter the choice of operation");
    scanf("%c",&ch);
    printf("enter the the operands");
    scanf("%f %f",&a,&b);
    switch(ch)
    {
case '+':printf("\nthe result is:%f",(a+b));
break;
case '-':printf("\nthe result is:%f",(a-b));
break;
case '*':printf("\nthe result is:%f",(a*b));
break;
case '/':printf("\nthe result is:%f",(a/b));
break;
default:printf("\nthe chosen operation do not exist");
    }
    return 0;
    }
