#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i,j;

		for( i=n/2 ; i>=0 ; i-- )
		{
				for( j=i ; j>0 ; j-- )
						printf("*");
				
				for( j=2*i ; j<n ; j++ )
						printf("D");

				for( j=i ; j>0 ; j-- )
						printf("*");
				printf("\n");
		}

		for( i=1 ; i<=n/2 ; i++ )
		{
				for( j=i ; j>0 ; j-- )
						printf("*");
				
				for( j=2*i ; j<n ; j++ )
						printf("D");

				for( j=i ; j>0 ; j-- )
						printf("*");
				printf("\n");
		}
		
		return 0;
}
