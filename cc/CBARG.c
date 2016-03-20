#include<stdio.h>

int a[100005];

int main()
{
		int t;
		scanf("%d",&t);

		while( t-- )
		{
				int n;
				scanf("%d",&n);
				
				int i;
				scanf("%d",&a[0]);
				long long ans=a[0];
				for( i=1 ; i<n ; i++ )
				{
						scanf("%d",&a[i]);
						if( a[i-1] < a[i] )
								ans+=a[i]-a[i-1];
				}
				printf("%lld\n",ans);
		}

		return 0;
}
