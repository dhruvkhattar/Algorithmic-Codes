#include<stdio.h>

int cmp( const void *a , const void *b )
{
		return *(int*)a - *(int*)b ;
}

int main()
{
		int n,k;

		scanf("%d%d",&n,&k);

		int i;
		int a[2003];

		for( i=0 ; i<n ; i++ )
				scanf("%d",&a[i]);

		qsort(a,n,sizeof(int),cmp);

		int sum=0;
		for( i=n-1 ; i>=0 ; i-=k )
		{
				sum+=a[i]-1;
		}

		printf("%d\n",2*sum);

		return 0;
}
