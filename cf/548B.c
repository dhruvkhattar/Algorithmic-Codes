#include<stdio.h>

int a[505][505];
int h[502];

int main()
{
		int n,m,q;

		scanf("%d%d%d",&n,&m,&q);

		int i,j;

		for( i=1 ; i<=n ; i++ )
				for( j=1 ; j<=m ; j++ )
						scanf("%d",&a[i][j]);

		int count=0;
		int max=0;
		int line=1;

		for( i=1 ; i<=n ; i++ )
		{
				count=0;	
				for( j=1 ; j<=m ; j++ )
				{
						if( a[i][j]==1 )
								count++;
						else
								count=0;
						if(h[i]<count)
								h[i]=count;
				}
		}

		while(q--)
		{
				int x,y;
				scanf("%d%d",&x,&y);
				a[x][y]=1-a[x][y];
				h[x]=0;
				count=0;	
				for( j=1 ; j<=m ; j++ )
				{
						if( a[x][j]==1 )
								count++;
						else
								count=0;
						if(h[x]<count)
								h[x]=count;
				}

				int i;
				max=h[1];
				for( i=2 ; i<=n ; i++ )
						if( h[i]>max )
						{
								max=h[i];
						}
				printf("%d\n",max);
		}
		return 0;
}

