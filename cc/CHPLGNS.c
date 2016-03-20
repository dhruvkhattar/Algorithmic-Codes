#include<stdio.h>

typedef struct yo
{
		int val;
		int pos;
		int ans;
}yo;

int cmp1( const void *a , const void *b )
{
		int l = ((yo*)a)->val;
		int r = ((yo*)b)->val;
		return l-r;
}

int cmp2( const void *a , const void *b )
{
		int l = ((yo*)a)->pos;
		int r = ((yo*)b)->pos;
		return l-r;
}

int main()
{
		int t;
		scanf("%d",&t);

		while( t-- )
		{
				yo max[100005];
				int n;
				scanf("%d",&n);
			
				int i;
				for( i=0 ; i<n ; i++ )
				{
						max[i].val=max[i].ans=0;
						max[i].pos=i;
				}

				for( i=0 ; i<n ; i++ )
				{
						int x,y;
						int m;
						scanf("%d",&m);
						scanf("%d%d",&x,&y);
						max[i].val=x;

						m--;
						while(m--)
						{
								scanf("%d%d",&x,&y);
								if( max[i].val<x )
										max[i].val=x;
						}
				}

				qsort(max,n,sizeof(yo),cmp1);

				for( i=0 ; i<n ; i++ )
						max[i].ans=i;

				qsort(max,n,sizeof(yo),cmp2);

				for( i=0 ; i<n ; i++ )
						printf("%d ",max[i].ans);
				printf("\n");

		}

		return 0;
}
