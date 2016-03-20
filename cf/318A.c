#include<stdio.h>

int main()
{
		long long k,n;
		scanf("%lld%lld",&n,&k);
		
		if( n%2==0 )
		{
				if( k <= n/2 )
						printf("%lld\n",2*k-1);
				else
						printf("%lld\n",2*k-n);
		}
		else
		{
				if( k <= n/2+1 )
						printf("%lld\n",2*k-1);
				else
						printf("%lld\n",2*k-n-1);
		}

		return 0;
}
