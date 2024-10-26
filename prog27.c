/* check wheather the given matrix is a identity matrix*/
#include<stdio.h>

int main(){
    int i, j,k;
    int n,m=0;
    printf("enter the order of matrix : ");
    scanf("%d",&n);
    int x[n][n];
    

    printf("enter the elements for matrix in row-wise fasion: \n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter the a[%d][%d] element : ",i+1,j+1);
            scanf("%d",&x[i][j]);
        
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                if(x[i][i]==1)
                m++;
            }
          else
          {
            if (x[i][j]==0)
            m++;
          }

        } 
    }
    if (m==n*n)
    printf("the given matrix is an identity matrix");
    else
    printf("the given matrix is not an identity matrix");

    return 0;

}