#include<stdio.h>

int main()
{
	int i,n,a,b,c;

	printf("Enter a number\n");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d\t %d\t",a,b);

	for(i=0;i<=n;i++)
	{

		
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);


	}

}