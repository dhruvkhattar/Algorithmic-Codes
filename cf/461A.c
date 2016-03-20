#include<stdio.h>

int cmp( const void *a , const void *b )
{
		return *(int*)a - *(int*)b;
}

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		int a[300005];

		for( i=0 ; i<n ; i++ )
				scanf("%d",&a[i]);

		qsort(a,n,sizeof(int),cmp);

		long long sum=0;

		for( i=0 ; i<n-1 ; i++ )
				sum+=(long long)(i+2)*a[i];

		sum+=(long long)(i+1)*a[i];

		printf("%lld\n",sum);

		return 0;
}
