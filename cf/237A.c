#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int ans=1;

		int count=1;

		int x,y;
		int a,b;

		int i;
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d%d",&a,&b);

				if( a==x && y==b && i!=0 )
						count++;
				else
				{
						if( count>ans )
								ans=count;
						count=1;
				}
				x=a;
				y=b;
		}
		if( count>ans )
				ans=count;

		printf("%d\n",ans);

		return 0;
}
