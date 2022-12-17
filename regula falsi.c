#include <stdio.h>
double function(double x)
{
    return x * x - 2 * x;
}
int main()
{
printf(“Name: CHINMAY RAJ SHAH\n Section: H\n Class roll number: 50\n University roll  number: 2016711\n ”);

    double a, b, c, fc, fa, fb;
printf("Enter Range : ");
scanf("%lf%lf", &a, &b);
    fa = function(a);
    fb = function(b);
    if(function(a) * function(b) < 0)
    {
        c = (a * fb - b * fa) / (fb - fa);
        fc = function(c);
while(fc < -0.001 || fc > 0.001)
        {
printf("a = %lf, b = %lf, c = %lf, function(c) = %lf\n", a, b, c, fc);
if(fa * fc < 0)
            {
                b = c;
                fb = fc;
            }
            else
            {
                a = c;
                fa = fc;
            }

            c = (a * fb - b * fa) / (fb - fa);
            fc = function(c);
        }
printf("Final value of x = %lf, function(x) = %lf", c, fc);
    }
    else
printf("Invalid Range.\n");
    return 0;
}
