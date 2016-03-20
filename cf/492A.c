#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);
		
		int i=1;
		int sum=0;

		while( 1 )
		{
				sum+=(i*(i+1))/2;
				if( sum > n )
						break;
				i++;
		}

		printf("%d\n",i-1);

		return 0;
}
