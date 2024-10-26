#include<stdio.h>

int main(){
    int i, j,k;
    int n;
    printf("enter the order of matrix : ");
    scanf("%d",&n);
    int x[n][n];
    int y[n][n] ,m[n][n];

    printf("enter the elements for 1st matrix in row-wise fasion: \n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter the a[%d][%d] element : ",i+1,j+1);
            scanf("%d",&x[i][j]);
        
        }
    }
        printf("enter the elements for second matrix in row-wise fasion: \n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter the a[%d][%d] element : ",i+1,j+1);
            scanf("%d",&y[i][j]);
        
        }
    }
    printf("multiplication of given two matrix is : \n");
    for(i=0;i<n;i++)
    { 
        for(j=0;j<n;j++)
        {  m[i][j]=0;
           for(k=0;k<n;k++)
            m[i][j]=m[i][j] + x[i][k]*y[k][j];
        }
    }
    for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
    printf("%2d  ",m[i][j]);
    }
    printf("\n");
   }
 return 0;
}