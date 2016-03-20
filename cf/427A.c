#include<stdio.h>

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int count=0;
		int ans=0;
		int x;
		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&x);

				if( x > 0 )
						count+=x;
				else
				{
						if( count>0 )
								count--;
						else
								ans++;
				}
		}

		printf("%d\n",ans);

		return 0;
}
