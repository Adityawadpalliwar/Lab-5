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

    printf("Duplicate elements are: ");
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
		if (m==1)
		{
		l[t]=a[i];
		t++;
		}
			
		
        
    }

 
 for(k=0;k<t;k++)
 printf("%d ", l[k]);
    

    return 0;
}
