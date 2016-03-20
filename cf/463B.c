#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int a[100005];
		scanf("%d",&a[i]);
		int ans=a[0];
		int energy=0;
		for( i=1 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
				energy+=a[i-1]-a[i];
				if( energy < 0 )
				{
						ans+=-energy;
						energy=0;
				}

		}

		printf("%d\n",ans);
		return 0;
}
