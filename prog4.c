#include<stdio.h>
int main(){
	int n,t,i,j,k;
	int sum=0;
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	int a[n];
	
	for(k=0; k<n; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	  }
	
	for(i=0;i<n-1;i=i+2)
	{ 
	    t=a[i+1];
	    a[i+1]=a[i];
	    a[i]=t;
	}
	
	for(j=0;j<n;j++)
   { printf("%d ",a[j]);
   }
	
	
	return 0;
}
