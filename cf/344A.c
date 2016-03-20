#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int x=0;
		int ans=0;
		for( i=0 ; i<n ; i++ )
		{
				int y;

				scanf("%d",&y);
				if( y!=x )
						ans++;
				x=y;
		}

		printf("%d\n",ans);

		return 0;
}
