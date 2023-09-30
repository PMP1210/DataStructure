#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *a;
	int n,i,sum=0;
	
	printf("\nEnter numbers of element you want to enter : ");
	scanf("%d",&n);
	
	a=(int*)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter [%d] element : ",i+1);
		scanf("%d",a+i);
		sum+=*(a+i);
	}
	
	printf("\nSum is : %d",sum);
	free(a);
}
