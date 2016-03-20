#include<stdio.h>

int a[1003];
int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int ans=n;
		int max=1;
		for( i=0 ; i<n ; i++ )
		{
				int x;
				scanf("%d",&x);
				a[x]++;
				if( a[x]>1 )
				{
						ans--;
						if( a[x] > max )
								max=a[x];
				}
		}

		printf("%d %d\n",max,ans);

		return 0;
}
