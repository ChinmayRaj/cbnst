#include<stdio.h>
#include<math.h>
int fact(int);
void main()
{
printf(“Name: CHINMAY RAJ SHAH\n Section: H\n Class roll number: 50\n University roll  number: 2016711\n ”);
float arr[10][11],x,h,p,y,px=1;
int i,j,n;
printf("\nEnter the number of data:");
scanf("%d",&n);
printf("\nEnter the data:\n");
for(i=0;i<n;i++)
{
printf("X%d=",i);
scanf("%f",&arr[i][0]);
printf("Y%d=",i);
scanf("%f",&arr[i][1]);
}
for(j=2;j<=n;j++)
for(i=0;i<n-1;i++)
arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
printf("\nDifference table is:-");
printf("\n\tX\tY");
for(i=0;i<=n-2;i++)
printf("\t^%dY\t",i+1);
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n+1-i;j++)
{
printf("\t%.2f",arr[i][j]);
}
}
printf("\nEnter the value x for function f(x):");
scanf("%f",&x);
h=arr[1][0]-arr[0][0];
p=(x-arr[0][0])/h;
y=arr[0][1];
for(i=1;i<n;i++)
{ 
px=px*(p-(i-1));
y=y+(arr[0][i+1]*px)/fact(i);
}
printf("\nThe value of function at x=%f is %f",x,y);
}
int fact(int n)
{ 
int i,f=1;
for(i=1;i<=n;i++)
f=f*i;
return f;
}
