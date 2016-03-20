#include<stdio.h>

int a[102];

int cmp( const void *x , const void *y )
{
		return *(int *)x - *(int *)y;
}

int main()
{
		int n;
		scanf("%d",&n);

		int i=0;
		int sum=0;

		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i]);
				sum+=a[i];
		}
		
		qsort(a,n,sizeof(int),cmp);
		
		int temp=0;
		int j=n-1;
		int count=0;
		while(j>=0)
		{
				count++;
				temp+=a[j];
				if( temp > sum -temp)
						break;
				j--;
		}

		printf("%d\n",count);

		return 0;
}
