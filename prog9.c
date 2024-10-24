#include<stdio.h>
int main(){
	int n,t,i,j,k,sum1=0,sum,sum2=0;

	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	int a[n-1];
	int l[n];
	
	for(k=0; k<n-1; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	    sum2=sum2 + a[k];
	  }
	
	sum=(n*(n+1))/2;
	 	 
	 printf("the missing number is %d",sum-sum2);
	 return 0;
     }
	
	
	
	
