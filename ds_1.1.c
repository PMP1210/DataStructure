#include<stdio.h>
void swap(int,int);
void main()
{
	int a,b;
	
	printf("Enter the A & B :-");
	scanf("%d %d",&a,&b);
	
	printf("\nOriginal values A=%d B=%d",a,b);
	swap(a,b);
	
	
}

void swap(int x,int y)
{
	int c;
	c=x;
	x=y;
	y=c;
	
	printf("\nSwaped vlues A=%d B=%d",x,y);
}
