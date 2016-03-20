#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int ans=0;

		for( i=0 ; i < n ; i++ )
		{
				int x,y;
				scanf("%d%d",&x,&y);

				if( y-x >= 2 )
						ans++;
		}

		printf("%d\n",ans);

		return 0;
}
