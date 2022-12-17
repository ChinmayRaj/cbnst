
#include<stdio.h>
float func(float x,float y)
{
    return x+y;
}
int main()
{
printf(“Name: CHINMAY RAJ SHAH\n Section: H\n Class roll number: 50\n University roll  number: 2016711\n ”);
 float x0, y0, xn, h, yn, val;
 int i, n;
printf("Enter Initial Condition\n");
printf("x0 = ");
scanf("%f", &x0);
printf("y0 = ");
scanf("%f", &y0);
printf("Enter calculation point xn = ");
scanf("%f", &xn);
printf("Enter number of steps: ");
scanf("%d", &n);
 h = (xn-x0)/n;
for(i=0; i< n; i++)
 {
val = func(x0, y0);
yn = y0 + h * val;
  y0 = yn;
  x0 = x0+h;
 }
printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);
 return 0;
}
 
