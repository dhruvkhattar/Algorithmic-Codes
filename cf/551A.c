#include<stdio.h>

typedef struct yo
{
		int val;
		int pos;
		int ans;
}yo;

int cmp(const void *a, const void *b )
{
		int l= ((yo*)a)->val;
		int r= ((yo*)b)->val;
		return l-r;
}

int cmp2(const void *a, const void *b )
{
		int l= ((yo*)a)->pos;
		int r= ((yo*)b)->pos;
		return l-r;
}

int main()
{
		int n;

		scanf("%d",&n);

		yo a[2003];

		int i;
		for(i=0 ;i <n;i++)
		{
				scanf("%d",&a[i].val);
				a[i].pos=i;
		}

		qsort(a,n,sizeof(yo),cmp);

		int count=1;
		int c=0;
		for( i=n-1 ; i>=0 ; i-- )
		{
				if( a[i].val!=a[i+1].val )
				{
						count+=c;
						c=0;
				}
				a[i].ans=count;
				c++;
		}

		qsort(a,n,sizeof(yo),cmp2);
		
		for( i=0 ; i<n ; i++ )
		{
				printf("%d ",a[i].ans);
		}

		printf("\n");

		return 0;
}
