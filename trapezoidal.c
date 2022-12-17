#include<stdio.h>
   #include<math.h>
   float func(float x)
   {
   return 1/(1+x*x);
   }
   void main()
   {
printf(“Name: CHINMAY RAJ SHAH\n Section: H\n Class roll number: 50\n University roll  number: 2016711\n ”);
    int n,i;
    float a,b,h,result,sum=0;
printf("Enter the lower limit: ");
scanf("%f",&a);
printf("Enter the upper limit: ");
scanf("%f",&b);
printf("Enter the interval: ");
scanf("%d",&n);
    float x[n],y[n];
    h=(b-a)/(float)n;
x[0]=a;
   y[0]=func(a);
   x[n]=b;
   y[n]=func(b);
for(int i=1;i<n;i++)
   {
       x[i]=x[0]+i*h;
       y[i]=func(x[i]);
   }
for(int i=1;i<n;i++)
   {
       sum+=y[i];
   }
    result=h/2*((y[0]+y[n])+2*sum);
printf("Result: %lf",result);
}
