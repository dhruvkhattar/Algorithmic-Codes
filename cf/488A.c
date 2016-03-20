#include<stdio.h>

int main()
{
		long long n;
		scanf("%lld",&n);

		int i;
		long long yo=n;
		for( i=0 ; i<30 ; i++ )
		{
				yo++;
				long long x=abs(yo);
				while(x)
				{
						if( x%10==8 )
						{
								printf("%lld\n",yo-n);
								return 0;
						}
						x=x/10;
				}
		}

		return 0;
}
