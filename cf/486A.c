#include<stdio.h>

int main()
{
		long long n;

		scanf("%lld",&n);
		
		long long i;
		long long ans=0;

		ans+=n/2;
		if(n%2==1)
				ans+=-n;

		printf("%lld\n",ans);


		return 0;
}
