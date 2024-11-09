#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int k, i, j,n;
    int ts=0;
    
    
    printf("Enter the number of elements in array:\n>>> ");
    scanf("%d", &n);

    int a[n];
   

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
     
     printf("enter the value of k : ");
     scanf("%d",&k);

    for (i=0;i<n;i++)
    {
        ts+=a[i];
    }


    for(i=0;i<n/2+1;i++)
    {   int sum=0;
        for(j=0;j<n/2;j++)
        {
            sum=sum+a[i+j];
        }
        
        if (sum%k==0 && (ts-sum)%k==0)
        {
            printf("true");
            break;
        }
    }

    return 0;
}