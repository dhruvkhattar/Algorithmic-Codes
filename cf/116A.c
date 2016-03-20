#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int ans=0;
		int temp=0;

		while( n-- )
		{
				int x,y;
				scanf("%d%d",&x,&y);
				temp = temp - x + y ;
				if( temp > ans )
						ans = temp;
		}

		printf("%d\n",ans);

		return 0;
}
