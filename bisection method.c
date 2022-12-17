#include <stdio.h>
double function(double x)
{
    return x*x-2*x;
}
int main()
{
printf(“Name: CHINMAY RAJ SHAH\n Section: H\n Class roll number: 50\n University roll  number: 2016711\n ”);

    double a, b, c, fc;
printf("Enter Range : ");
scanf("%lf%lf", &a, &b);
    if(function(a) * function(b) < 0)
    {
        c = (a + b) / 2;
        fc = function(c);
while(fc < -0.001 || fc > 0.001)
        {
printf("a = %lf, b = %lf, c = %lf, function(c) = %lf\n", a, b, c, fc);
            if(function(a) * fc < 0)
                b = c;
            else
                a = c;
            c = (a + b) / 2;
            fc = function(c);
        }
printf("final value of x = %lf, function(x) = %lf", c, fc);
    }
    else
printf("Given Range is invalid.\n");
    return 0;
}
