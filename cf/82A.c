#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		long long sum=0;
		for( i=1 ; i<1000000000 ; i=i*2 )
		{
				sum+=5*i;
				if( sum >= n )
						break;
		}
		if( sum -i < n )
				printf("Howard\n");
		else if( sum-2*i < n )
				printf("Rajesh\n");
		else if( sum-3*i < n )
				printf("Penny\n");
		else if( sum-4*i < n )
				printf("Leonard\n");
		else 
				printf("Sheldon\n");

		return 0;
}
