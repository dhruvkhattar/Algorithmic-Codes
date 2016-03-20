#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i=3*n;

		int count=0;

		while( count<n )
		{
				printf("%d ",i);
				i++;
				count++;
		}
		printf("\n");
		return 0;
}
