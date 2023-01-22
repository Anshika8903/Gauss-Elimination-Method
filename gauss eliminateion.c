#include<stdio.h>
void main()

{
    int i,j,k,n;
    float A[20][20],c,x[20],s=0;
    printf("enter the order of matrix: ");
    scanf("%d",&n);
    printf("\nenter the elements of augumented matrix: ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1);j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
        }
    }
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {

           if(i>j)
           {
              c=A[i][j]/A[j][j];
              for(k=1;k<=(n+1);k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
           }
        }
    }
    x[n]=A[n+1][n]/A[n][n];
    for(i=n-1;i>=1;i--)
    {
        s=0;
        for(j=j+1;j<=n;j++)
        {
            s=s+A[i][j]*x[j];
        }
        x[i]=(A[i][n]-s)/A[i][i];
    }
    printf("\nThe solution is: ");
    for(i=1;i<=n;i++)
    {
        printf("\nx%d=%f",i,x[i]);
    }
}
