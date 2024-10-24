#include<stdio.h>
int main(){
	int n,t,i,j,m,k;
	int sum=0;
	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	int a[n];
	
	
	for(k=0; k<n; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	  }
	  printf("enter the value of k : ");
	  scanf("%d",&m);
	
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
     
     printf("%dth smallest number is %d",m,a[m-1]);
     printf("\n%dth largest number is %d",m,a[n-m]);
     
     
     return 0;
 }
