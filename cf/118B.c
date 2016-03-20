#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i,j,k;

		for( i=0 ; i<=n ; i++ )
		{
				for( j=n-i ; j>0 ; j-- )
						printf("  ");

				for( k=0 ; k<i ; k++ )
						printf("%d ",k);

				for( k=i ; k>0 ; k-- )
						printf("%d ",k);
				printf("0\n");
		}
		for( i=n-1 ; i>=0 ; i-- )
		{
				for( j=n-i ; j>0 ; j-- )
						printf("  ");

				for( k=0 ; k<i ; k++ )
						printf("%d ",k);

				for( k=i ; k>0 ; k-- )
						printf("%d ",k);
				printf("0\n");
		}
		return 0;
}
