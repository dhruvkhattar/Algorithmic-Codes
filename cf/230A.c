#include<stdio.h>

typedef struct yo
{
		int x;
		int y;
}yo;

int cmp( const void *a , const void *b )
{
		int l = ((yo*)a)->x;
		int r = ((yo*)b)->x;
		return l-r;
}

int main()
{
		int s,n;
		yo a[1003];

		scanf("%d%d",&s,&n);

		int i;

		for( i=0 ; i<n ; i++ )
				scanf("%d%d",&a[i].x,&a[i].y);
		
		qsort(a,n,sizeof(yo),cmp);
		
		for( i=0 ; i<n ; i++ )
				{
						if( s <= a[i].x )
						{
								printf("NO\n");
								return 0;
						}
						s+=a[i].y;
				}

		printf("YES\n");

		return 0;
}
