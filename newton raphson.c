#include <stdio.h>
double function(double x)
{
 return x * x-2*x;
}
double diff(double x)
{
    return 2 * x-2;
}
int main()
{printf(“Name: CHINMAY RAJ SHAH\n Section: H\n Class roll number: 50\n University roll  number: 2016711\n ”);
 double a, c, fc;
printf("Enter Initial Guess : ");
scanf("%lf", &a);
    c = a;
    fc = function(c);
while(fc < -0.001 || fc > 0.001)
    {
printf("x = %lf, function(x) = %lf\n", c, fc);
        c = c - (fc / diff(c));
        fc = function(c);
        }
printf("Final value of x = %lf, function(x) = %lf\n", c, fc);
    return 0;
    }
