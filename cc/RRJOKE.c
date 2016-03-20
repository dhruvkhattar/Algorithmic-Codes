#include<stdio.h>

int main()
{

		int t;

		scanf("%d",&t);

		while( t-- )
		{
				int n;

				scanf("%d",&n);
				
				int ans = 0;
				int i;
				for( i=1 ; i<=n ; i++ )
				{
						int a,b;

						scanf("%d%d",&a,&b);

						ans = ans^i;

				}

				printf("%d\n",ans);

		}

		return 0;

}
