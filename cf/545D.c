#include<stdio.h>

int t[100005];

int cmp(const void *a, const void *b)
{
		return (*(int *)a - *(int *)b);
}

int main()
{

		int n;

		scanf("%d",&n);

		int i;

		for( i=0 ; i<n ; i++ )
				scanf("%d",&t[i]);

		qsort(t,n,sizeof(int),cmp);
		
		int ans=0;
		int sum=0;
		
		for( i=0 ; i<n ; i++ )
		{
				if( t[i] >= sum )
				{
						ans++;
						sum+=t[i];
				}
		}
		printf("%d\n",ans);

		return 0;
}
