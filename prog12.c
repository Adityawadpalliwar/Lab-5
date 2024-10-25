#include <stdio.h>

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

    printf("\n");
    for (i = 0; i < n; i++)
	 {
		int m=0;
        for (j = i + 1; j < n; j++)
		 {
            if (a[i] == a[j]) 
			{
               m++;
            }
		}
		if (m==0)
		{
		printf("%d ",a[i]);
        break;
		}	
        
    }
  return 0;
}