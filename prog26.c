
#include<stdio.h>

int main(){
    int i, j,k;
    int n;
    printf("enter the order of matrix : ");
    scanf("%d",&n);
    int x[n][n];
    int sum=0;

    printf("enter the elements for matrix in row-wise fasion: \n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("enter the a[%d][%d] element : ",i+1,j+1);
            scanf("%d",&x[i][j]);
        
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum+=x[j][i];
        }
    }
    printf("the sum of right diagonals of a matrix is : %d",sum);
    return 0;
}
