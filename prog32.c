#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int k, i, j,m,avg;
    int t=0;

    printf("Enter the number of elements in array:\n>>> ");
    scanf("%d", &m);

    int a[m];
    int l[m];
   

    for (i = 0; i < m; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
     
     printf("enter the value of k : ");
     scanf("%d",&k);


     for (i=0;i<m;i++)
     {  l[i]=0;
        avg = (a[i]+k)/2.0;
        for (j=0;j<m;j++)
        {
            if (avg==a[j])
             l[i]++;
           
        }

     }
    printf("\n");
    for(i=0;i<m;i++)
    printf("%d  ", l[i]);
}
