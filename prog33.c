#include<stdio.h>
int main(){
	int n,t,i,j,k,avg;
	
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	int a[n];
	
	for(k=0; k<n; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	  }
	
    for(i=0;i<n;i++)
     {
      int sum=0;
	 for(j=0;j<n+1;j++)
	   {
	   
      sum=sum+a[j];
	  }
      
     avg=sum/(n+1);
	 printf("%d ",avg);
	}
	return 0;
  }
  
