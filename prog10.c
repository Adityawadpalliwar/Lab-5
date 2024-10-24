#include<stdio.h>
int main(){
	int n,t,i,j=0,k;
	int sum=0;
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	int a[n];
	int l[n];
	
	for(k=0; k<n; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	  }
	
	for(i=0;i<n-1;i++)
	 { int m=0;
	    
	    for(j=1;j<n-1;j++)
	      if (a[i]=a[j])
	      {
		    m++;
	      
		   }
		   if(m>1)
	       { printf("%d ",a[i]);
		   }
	      
	 	
	 	...
      }
      return 0;
 }
