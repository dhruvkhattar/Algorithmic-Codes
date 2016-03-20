#include<stdio.h>

long long gcd(long long a,long long b)
{
		if(a==0||b==0)
				return a+b;
		return gcd(b,a%b);
}

int main()
{
		int n;
		scanf("%d",&n);

		int i;

		long long g=0;
		int a[102];
		for( i=0 ; i<n ; i++ )
		{
				long long int x;
				scanf("%lld",&x);
				g=gcd(g,x);

		}

		printf("%lld\n",g*n);
		return 0;
}
