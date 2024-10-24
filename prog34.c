#include<stdio.h>
int main(){
	int n,t,i,j,k,sum1=0,sum2=0;

	printf("enter the value of n \n>>>");
	scanf("%d",&n);
	int a[n];
	
	for(k=0; k<n; k++)
	 {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
	  }
	
  for(i=0;i<n/2;i++)
  { sum1=sum1+a[i];
  }
   for(j=n/2;j<n;j++)
  { sum2=sum2+a[j];
  }
  
  if(sum1>sum2)
  {printf("\n%d",sum1-sum2);
  }
  else
  printf("\n%d",sum2-sum1);
}
