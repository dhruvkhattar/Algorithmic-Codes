#include<stdio.h>
#define M 1000000007

long long n;

long long bc( long long i,long long x)
{
		if( i==0 )
				return ((x*x)%3);
		long long j;
		long long lol=x;
		
		for( j=i ; j>0 ; j-- )
				lol = (lol%3 * j%3 )%3;
		
		for( j=n-i ; j>0 ; j-- )
				lol = (lol%3 * j%3 )%3;
		
		return lol;
}

int main()
{
		long long t;
		
		scanf("%lld",&t);

		while( t-- )
		{
				scanf("%lld",&n);

				long long sum = 0;
				long long i=0;
				long long x;

				for( i=1 ; i<=n ; i++ )
				{
						x = ( x%3 * i%3 )%3;
				}

				for( i=0 ; i<n ; i++ )
				{
						sum = (sum%M + bc(i,x)%3)%M;
				}

				long long ans = (sum%M + x%3)%M;

				printf("%lld\n",ans);

		}

		return 0;
}
