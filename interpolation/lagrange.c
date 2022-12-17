#include<stdio.h>
int main()
{
printf(“Name: CHINMAY RAJ SHAH\n Section: H\n Class roll number: 50\n University roll  number: 2016711\n ”);
int n;
printf("Enter the number of terms: ");
scanf("%d",&n);
int x[100],y[100];
printf("Enter matrix x: ");
for(int i=0;i<n;i++)
scanf("%d",&x[i]);
printf("Enter matrix y: ");
for(int i=0;i<n;i++)
scanf("%d",&y[i]);
int a;
printf("Enter the value of x: ");
scanf("%d",&a);
float b=0,res,div;
for(int i=0;i<n;i++)
{
res=1.0;
div=1.0;
for(int j=0;j<n;j++)
{
if(i!=j)
{
res*=a-x[j];
div*=x[i]-x[j];

}
}
b+=((res/div)*y[i]);
}
printf("Result: 0.2f",b);
}
