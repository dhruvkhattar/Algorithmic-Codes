#include<stdio.h>

int a[1003];

int cmp(const void *a , const void *b)
{
		return *(int*)a - *(int*)b;
}

int main()
{

		int t;
		scanf("%d",&t);

		while( t-- )
		{
				int n;
				scanf("%d",&n);

				int i;

				for( i=0 ; i<n ; i++)
						scanf("%d",&a[i]);

				qsort(a,n,sizeof(int),cmp);
				
				int bill=0;
				
				i=n-1;
				while( i>=0 )
				{
						bill=bill+a[i];

						if( i-1 >=0)
						{
								bill+=a[i-1];
								i=i-3;
						}
						i--;
				}

				printf("%d\n",bill);
		}

		return 0;
}
