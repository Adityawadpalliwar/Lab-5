/* given  is the program to find transpose of a matrix*/
#include<stdio.h>

int main(){
    int i, j,k;
    int n;
    printf("enter the order of matrix : ");
    scanf("%d",&n);
    int x[n][n];
    int t[n][n];

    printf("enter the elements for matrix in row-wise fasion: \n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter the a[%d][%d] element : ",i+1,j+1);
            scanf("%d",&x[i][j]);
        
        }
    }

    for (i = 0; i < n; i++)
	{
		
        for (j = 0; j < n; j++)
        {  
           t[i][j]=x[j][i];
        }
    }

     printf("the input matrix is :\n");
    for(i=0;i<3;i++)
    { 
        printf("|");
       for(j=0;j<3;j++)
       { 
         printf("%2d ",x[i][j]);
       }
      printf("|\n");
    }
     printf("the transpose matrix is :\n");
    for(i=0;i<3;i++)
    { printf("|");
       for(j=0;j<3;j++)
      { 
        printf("%2d ",t[i][j]);
 
      }
     printf("|\n");
    }

}