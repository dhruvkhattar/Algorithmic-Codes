#include<stdio.h>

int a[100005];

int main()
{
		int n,t;
		scanf("%d%d",&n,&t);

		int i;
		for( i=1 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
		}

		int ans=1;
		while( ans<=t )
		{
				ans+=a[ans];
				if( ans == t )
				{
						printf("YES\n");
						return 0;
				}
		}
		
		printf("NO\n");
		return 0;
}
