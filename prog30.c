#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int n, i, j,m;
    float num1=0,num2=0;
    printf("Enter the number of elements in first array:\n>>> ");
    scanf("%d", &m);

    int a[m];
   

    for (i = 0; i < m; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<m;i++)
    {
        num1=num1+a[i]*pow(10,m-i-1);
    }


    printf("Enter the number of elements in second array:\n>>> ");
    scanf("%d", &n);
	int l[n];

    for (i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &l[i]);
    }
    for(i=0;i<n;i++)
    {
        num2=num2+l[i]*pow(10,n-i-1);
    }
    
    printf("the sum of two numbers is %f",num1+num2);

  return 0;
}
