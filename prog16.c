#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int n, i, j,t=0,k=0;
    printf("Enter the number of elements:\n>>> ");
    scanf("%d", &n);

    int a[n];
	int l[n];
   

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (i=0;i<n;i++)
    {
        l[i]=a[i];
    }

    printf("now the new array is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",l[i]);
    }

    return 0;
}
