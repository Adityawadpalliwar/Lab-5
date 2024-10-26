#include <stdio.h>

int main() {
    int n, i, j,t=0,k=0;
    printf("Enter the number of elements:\n>>> ");
    scanf("%d", &n);

    int a[n];
	int o[n];
    int e[n];
   

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < n; i++)
	 {
		if (a[i]%2==0)
        {
            e[t]=a[i];
            t++;
        }
        else
        {
            o[k]=a[i];
            k++;
        }
			
		
        
    }

 
printf("the array containing odd elemets is\n");
  for(i=0;i<k;i++)
  printf("%d  ",o[i]);

    
printf("\nthe array containing even elemets is\n");
for(i=0;i<t;i++)
printf("%d  ",e[i]);


    return 0;
}
