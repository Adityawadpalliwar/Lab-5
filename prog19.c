#include<stdio.h>
int main(){
	int n,t,i,j,k;
	
	printf("enter the given size of array \n>>>");
	scanf("%d",&n);
	int a[n+1];
	
	for(k=0; k<n; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	  }
	
    printf("enter a new element : ");
    scanf("%d",&a[n]);

	for(i=0;i<n+1;i++)
	 {
	 for ( j=0;j<n-i;j++)
	  {
	  if (a[j]>a[j+1])
	  {
	    t=a[j+1];
	    a[j+1]=a[j];
	    a[j]=t;
      }
       }
     }


    printf("the sorted array is ");
    for(i=0;i<n+1;i++)
    {
        printf(" %2d",a[i]);
    }
}