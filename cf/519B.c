#include<stdio.h>
typedef long long ll;
int main()
{
		int n;
		scanf("%d",&n);
		int i;
		
		ll sum1,sum2,sum3;
		sum1=sum2=sum3=0;

		for( i=0 ; i<n ; i++ )
		{
				ll x;
				scanf("%lld",&x);
				sum1 +=x;
		}
		for( i=0 ; i<n-1 ; i++ )
		{
				ll x;
				scanf("%lld",&x);
				sum2 +=x;
		}

		printf("%lld\n",sum1-sum2);

		for( i=0 ; i<n-2 ; i++ )
		{
				ll x;
				scanf("%lld",&x);
				sum3 +=x;
		}

		printf("%lld\n",sum2-sum3);
		
		return 0;
}
