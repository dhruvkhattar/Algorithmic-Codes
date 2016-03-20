#include<stdio.h>


typedef struct yo 
{
		int val;
		int pos;
}yo;

int cmp( const void *a , const void *b )
{
		int l = ((yo*)a)->val;
		int r = ((yo*)b)->val;
		return l-r;
}

int main()
{
		int n,k;
		scanf("%d%d",&n,&k);

		int i;
		yo a[102];

		for( i=0 ; i<n ; i++ )
		{
				scanf("%d",&a[i].val);
				a[i].pos=i+1;
		}

		qsort(a,n,sizeof(yo),cmp);

		int sum=0;
		int flag=0;
		for( i=0 ; i<n ; i++ )
		{
				sum+=a[i].val;
				if( sum>k )
						break;
		}
		
		if( i==0 )
				printf("0\n");
		else
		{
				printf("%d\n",i);
				while( i--)
						printf("%d ",a[i].pos);
				printf("\n");
		}
		return 0;
}
