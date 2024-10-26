#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int k, i, j,m;
    float num1=0,num2=0;
    printf("Enter the number of elements in array:\n>>> ");
    scanf("%d", &m);

    int a[m];
   

    for (i = 0; i < m; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
     
     printf("enter the value of k : ");
     scanf("%d",&k);

    for(i=0;i<m;i++)
    {
        for(j=1+i;j<m;j++)
        {
            
        }
    }
}