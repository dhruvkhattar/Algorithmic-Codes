#include<stdio.h>

int cmp( const void *a , const void *b )
{
		return *(int*)a - *(int*)b;
}

int main()
{
		int n,k;

		scanf("%d%d",&n,&k);
		char a[100005];
		int b[26];

		scanf("%s",a);

		int i;

		for( i=0 ; i<n ; i++ )
				b[a[i]-'A']++;

		qsort(b,26,sizeof(int),cmp);

		long long sum=0;
		for( i=25 ; i>=0 ; i-- )
		{
				if( k - b[i] > 0 )
				{
						k-=b[i];
						sum+=(long long)b[i]*b[i];
				}
				else if( k - b[i] == 0)
				{
						k-=b[i];
						sum+=(long long)b[i]*b[i];
						printf("%lld\n",sum);
						return 0;
				}
				else
				{
						sum+=(long long)k*k;
						printf("%lld\n",sum);
						return 0;
				}
		}
		return 0;
}
