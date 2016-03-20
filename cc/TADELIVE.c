#include<stdio.h>

typedef struct tip
{
		int a;
		int b;
}tip;

tip z[100005];

int cmp ( const void *c , const void *d )
{
		int l = ((tip*)c)->a - ((tip*)c)->b;
		int r = ((tip*)d)->a - ((tip*)d)->b;

		return l-r ;
}


int main()
{

		int n,x,y;

		scanf("%d%d%d",&n,&x,&y);

		int i;

		for( i=0 ; i<n ; i++ )
				scanf("%d",&z[i].a);

		for( i=0 ; i<n ; i++ )
				scanf("%d",&z[i].b);

		//sorting according to differences
		qsort( z , n , sizeof(tip) , cmp);

		int cx,cy;
		int ans=0;
		cx=cy=0;

		for( i=0 ; i<n  && z[i].a<z[i].b ; i++ )
		{
				if( cy<y )
				{
						ans+=z[i].b;
						cy++;
				}
				else
				{
						ans+=z[i].a;
						cx++;
				}
		}

		int j=i;

		for( i=n-1 ; i>=j ; i-- )
		{
				if( z[i].a < z[i].b )
				{
						if( cy<y )
						{
								ans+=z[i].b;
								cy++;
						}
						else
						{
								ans+=z[i].a;
								cx++;
						}
				}
				else
				{
						if( cx < x )
						{
								ans+=z[i].a;
								cx++;
						}
						else
						{
								ans+=z[i].b;
								cy++;
						}
				}
		}

		printf("%d\n",ans);

		return 0;
}
