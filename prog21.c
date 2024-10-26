#include<stdio.h>

int main(){
    int i, j,k;
    int a[3][3];
    printf("enter the elements in row-wise fasion: \n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter the a[%d][%d] element : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        
        }
    }
   printf("the input matrix is :\n");
   for(i=0;i<3;i++)
   { printf("|");
    for(j=0;j<3;j++)
    { 
       printf("%2d ",a[i][j]);

    }
    printf("|\n");
   }

   return 0;
}