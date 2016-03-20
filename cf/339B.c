#include<stdio.h>

int main()
{
		int n,m;
		scanf("%d%d",&n,&m);

		int i;
		int a[100005];

		a[0]=1;

		long long ans=0;
		for( i=1 ; i<=m ; i++ )
		{
				scanf("%d",&a[i]);

				long long x=a[i]-a[i-1];
				if( x>=0 )
						ans+=x;
				else
						ans+=n+x;
		}

		printf("%lld\n",ans);

		return 0;
}
