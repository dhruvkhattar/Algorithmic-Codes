#include<stdio.h>

int main()
{
		int a[6][6];

		int i,j,x,y;

		for( i=1 ; i<=5 ; i++ )
		{
				for( j=1 ; j<=5 ; j++ )
				{
						scanf("%d",&a[i][j]);
						if( a[i][j]==1 )
						{
								x=i;
								y=j;
						}
				}
		}

		int ans=0;

		if( x-3 > 0 )
				ans+=x-3;
		else
				ans+=3-x;

		if( y-3 > 0 )
				ans+=y-3;
		else
				ans+=3-y;

		printf("%d\n",ans);
		
		return 0;
}
