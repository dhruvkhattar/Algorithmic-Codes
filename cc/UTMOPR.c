#include<stdio.h>

int main()
{
		int n;
		int k;
		int t;
		scanf("%d",&t);

		while( t-- )
		{
				scanf("%d%d",&n,&k);
				long long sum=0;

				int i;
				long long x;
				for( i=0 ; i<n ; i++ )
				{
						scanf("%lld",&x);
						sum +=x;
				}
				if( sum%2==0 )
				{
						if( k==1 )
								printf("odd\n");
						else
								printf("even\n");
				}
				else
				{
						printf("even\n");
				}
		}

		return 0;
}
