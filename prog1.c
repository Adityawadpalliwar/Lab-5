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
    for(j=0;j<n;j++)
	{ 
	  sum=sum + a[j];
	}
	printf("the average of integers in array is %f\n",(float)(sum/n));
	printf("the maximum of integers in array is %d\n",a[n-1]);
	printf("the minimum of integers in array is %d\n",a[0]);
}
