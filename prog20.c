#include<stdio.h>
int main(){
	int n,t,i,j,k,z,y;
	
	printf("enter the given size of array \n>>>");
	scanf("%d",&n);
	int a[n+1];

    printf("enter a new element : ");
    scanf("%d",&z);

    printf("Input the Position, where the value to be inserted ");
    scanf("%d",&y);
     a[y-1]=z;
	
	for(k=0; k<n+1; k++)
	 {   if(k==y-1)
          continue;
        else
        {
    	printf("enter the value of element of array: ");
	    scanf("%d",&a[k]);
        }
	  }
	


    printf("the array is ");
    for(i=0;i<n+1;i++)
    {
        printf(" %2d",a[i]);
    }
}