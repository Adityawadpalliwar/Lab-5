#include<stdio.h>
int main(){
	int n,t,i,j,k;
	int sum=0;
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	int a[n];
    int x;
    printf("enter the value of x: ");
    scanf("%d",&x);
	
	for(k=0; k<n; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	  }
	
	for(i=0;i<n-1;i++)
	 {
	 for ( j=0;j<n-i-1;j++)
	  {
	  if (a[j]>a[j+1])
	  {
	    t=a[j+1];
	    a[j+1]=a[j];
	    a[j]=t;
      }
       }
     }

     for(i=0;i<n;i++)
     {
        if(a[i]>=x)
         {
            printf(" The ceiling of %d is: %d",x,a[i]);
            break;
         }
     }
     return 0;
}