#include<stdio.h>

int a[60];

int cmp( const void *x , const void *y )
{
		return *(int*)x - *(int*)y;
}

int main()
{
		int n,m;
		scanf("%d%d",&n,&m);

		int i;

		for( i=0 ; i<m ; i++ )
				scanf("%d",&a[i]);
		
		qsort(a,m,sizeof(int),cmp);

		int ans=1001;
		for( i=0 ; i<m-n+1 ; i++ )
				if( a[i+n-1]-a[i] < ans )
						ans = a[i+n-1] - a[i];

		printf("%d\n",ans);
		return 0;
}
