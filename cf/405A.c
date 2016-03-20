#include<stdio.h>

int a[102];

int cmp( const void *x , const void *y )
{
		return *(int*)x - *(int*)y ;
}
int main()
{
		int n;
		scanf("%d",&n);

		int i;

		for( i=0 ; i<n ; i++ )
				scanf("%d",&a[i]);

		qsort(a,n,sizeof(int),cmp);

		for( i=0 ; i<n ; i++ )
				printf("%d ",a[i]);
		printf("\n");

		return 0;
}
