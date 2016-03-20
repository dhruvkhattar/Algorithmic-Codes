#include<stdio.h>

int min(int a,int b)
{
		if( a>b )
				return a;
		return b;
}

int cmp( const void *a,const void *b)
{
		return *(int*)a - *(int*)b;
}

int main()
{
		int n,k;

		scanf("%d%d",&n,&k);

		int i;
		int a[2003];

		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
		}

		qsort(a,n,sizeof(int),cmp);

		for( i=0 ; i<n ; i++ )
				if( a[i] > 5-k )
						break;
		
		printf("%d\n",i/3);
		return 0;
}
