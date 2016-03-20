#include<stdio.h>

int main()
{
		long long a,b;
		
		scanf("%lld%lld",&a,&b);

		long long ans=0;

		while( a!=0 && b!=0 )
		{
				if(a>b)
				{
						ans+=a/b;
						a=a%b;
				}
				else
				{
						ans+=b/a;
						b=b%a;
				}
		}

		printf("%lld\n",ans);

		return 0;
}
