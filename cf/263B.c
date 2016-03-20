#include<stdio.h>

int cmp(const void *a , const void *b)
{
		return *(int*)a - *(int*)b;
}

int main()
{
		int n,k;

		scanf("%d%d",&n,&k);

		int i;
		int a[60];
		for( i=0 ; i<n ; i++ )
				scanf("%d",&a[i]);

		qsort(a,n,sizeof(int),cmp);

		if( k>n )
				printf("-1\n");
		else
				printf("%d %d\n",0,a[n-k]);

		return 0;
}
