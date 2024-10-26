#include<stdio.h>

int main(){
    int i, j,k;
    int n;
    printf("enter the order of matrix : ");
    scanf("%d",&n);
    int x[n][n];
    int y[n][n] ,a[n][n],s[n][n];

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
   printf("the addition matrix is  matrix is :\n");
   for(i=0;i<3;i++)
   { 
    for(j=0;j<3;j++)
    { 
       a[i][j]=x[i][j]+y[i][j];

    }
    
   }
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
        printf("%d  ",a[i][j]);
    }
    printf("\n");
   }

   printf("the substraction matrix is  matrix is :\n");
   for(i=0;i<3;i++)
   { 
    for(j=0;j<3;j++)
    { 
       s[i][j]=x[i][j]-y[i][j];

    }
    
   }
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
    printf("%2d  ",s[i][j]);
    }
    printf("\n");
   }

   return 0;
}