#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		printf("%d\n",(n*n)/2+n%2);

		int i,j;

		for( i=0 ; i<n ; i++ )
		{
				if(i%2==0)
				{
						for( j=0 ; j<n/2 ; j++ )
								printf("C.");
						if( n%2==1 )
								printf("C");
				}
				else
				{
						for( j=0 ; j<n/2 ; j++ )
								printf(".C");
						if( n%2==1 )
								printf(".");
				}
				printf("\n");
		}

		return 0;
}
