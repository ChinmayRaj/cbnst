#include <stdio.h>
#include <stdlib.h>
void mul(double **mat, int from, int to, int w, double fact)
{
for(int i = 0; i< w; i++)
        mat[to][i] += fact * mat[from][i];
}
int main()
{
printf(“Name: CHINMAY RAJ SHAH\n Section: H\n Class roll number: 50\n University roll  number: 2016711\n ”);
    int n;
printf("Enter Number of variables : ");
scanf("%d", &n);
    double **mat = (double**) calloc(n, sizeof(double*));
for(int i = 0; i< n; i++)
        mat[i] = (double*) calloc(n + 1, sizeof(double));
printf("Enter augmented matrix :- \n");
for(int i = 0; i< n; i++)
for(int j = 0; j < n + 1; j++)
scanf("%lf", &mat[i][j]);
for(int i = 0; i< n; i++)
for(int j = 0; j < n; j++)
if(i != j && mat[i][i] && mat[j][i])
mul(mat, i, j, n + 1, -(mat[j][i] / mat[i][i]));
printf("Diagonal matrix :-\n");
for(int i = 0; i< n; i++)
    {
for(int j = 0; j < n + 1; j++)
printf("%lf ", mat[i][j]);
printf("\n");
    }
printf("Roots are : ");
for(int i = 0; i< n; i++)
    {
        if(mat[i][i])
            mat[i][n] /= mat[i][i];
printf("%lf ", mat[i][n]);
    }
    return 0;
}

