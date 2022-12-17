#include<stdio.h>
float func(float x,float y)
{
return (y*y-x*x)/(y*y+x*x);
}
int main()
{
printf(“Name: CHINMAY RAJ SHAH\n Section: H\n Class roll number: 50\n University roll  number: 2016711\n ”);
 float x0, y0, xn, h, yn, k1, k2, k3, k4, k;
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
  k1 = h * (func(x0, y0));
  k2 = h * (func((x0+h/2), (y0+k1/2)));
  k3 = h * (func((x0+h/2), (y0+k2/2)));
  k4 = h * (func((x0+h), (y0+k3)));
  k = (k1+2*k2+2*k3+k4)/6;
yn = y0 + k;
  x0 = x0+h;
  y0 = yn;
 }

printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);
 return 0;
}
