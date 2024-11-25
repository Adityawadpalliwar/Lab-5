#include<stdio.h>
int main(){
	int n,t,i,j=0,k;
	int sum=0;
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	int a[n];
	
	for(k=0; k<n; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	  }
	printf("enter the number : ");
	scanf("%d",&t);
	
		for(i=0;i<n;i++)
	 {
	    if (a[i]==t)
	    { j++;
		}
     }
     
     printf("Number %d is present %d times",t,j);
     return 0;
 }
