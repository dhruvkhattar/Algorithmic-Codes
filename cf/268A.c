#include<stdio.h>

int h[102];
int a[102];

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		for( i=0 ; i<n ; i++)
		{
				scanf("%d%d",&h[i],&a[i]);
		}

		int j;
		int ans=0;

		for( i=0 ; i<n ; i++ )
				for( j=0 ; j<n ; j++ )
						if( h[i]==a[j] )
								ans++;
		
		printf("%d\n",ans);
		return 0;
}
