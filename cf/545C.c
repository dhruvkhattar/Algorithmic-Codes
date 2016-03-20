#include<stdio.h>

int x[100005];
int h[100005];

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d%d",&x[i],&h[i]);
		}

		int ans=1;

		for( i=1 ; i<n ; i++ )
		{
				if( x[i]-h[i] > x[i-1] )
						ans++;
				else if( i>=n-1 || x[i+1] > x[i]+h[i] )
				{
						ans++;
						x[i]+=h[i];
				}
		}
		printf("%d\n",ans);
		return 0;
}
