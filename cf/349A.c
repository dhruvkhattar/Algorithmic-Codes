#include<stdio.h>

int main()
{
		int n;

		scanf("%d",&n);

		int i,c25,c50;
		c25=c50=0;

		for( i=0 ; i<n ; i++ )
		{
				int x;
				scanf("%d",&x);
				if( x==25 )
						c25++;
				else if( x==50 && c25>0 )
				{
						c25--;
						c50++;
				}
				else if( x==100 )
				{
						if( c50>0 && c25>0 )
						{
								c50--;
								c25--;
						}
						else if( c25>2)
								c25=c25-3;
						else
						{
								printf("NO\n");
								return 0;
						}
				}
				else
				{
						printf("NO\n");
								return 0;
				}				
		}
		
		printf("YES\n");
		return 0;
}
