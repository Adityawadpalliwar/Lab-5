// some error
#include <stdio.h>

int main() {
    int n, i, j,t=0,k=0,value;
    printf("Enter the number of elements:\n>>> ");
    scanf("%d", &n);

    printf("enter the value");
    scanf("%d",&value);

    int a[n];
	
   

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n");
    for (i = 0; i < n; i++)
	 {
		
        for (j = i + 1; j < n; j++)
        {  
            for (k=j+1;k<n;k++)
            {
            if (a[i]+a[j]+a[k]==value)
           
             printf("%d %d %d\n",a[i],a[j],a[k]);
             }
        }

         
        }
         
             
		 
         return 0;
		}
			
		
        
    
