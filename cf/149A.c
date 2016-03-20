#include<stdio.h>

int cmp( const void *a , const void *b)
{
		return *(int*)a - *(int*)b;
}

int main()
{
		int k;
		scanf("%d",&k);

		int i;
		int a[13];
		for( i=0 ; i<12 ; i++ )
				scanf("%d",&a[i]);

		qsort(a,12,sizeof(int),cmp);
		
		int count=0;
		int sum=0;
		if(k==0)
				printf("0\n");
		else
		{
				for( i=11 ; i>=0 ; i-- )
						{
								sum+=a[i];
								count++;
								if(sum>=k)
								{
										printf("%d\n",count);
										return 0;
								}
						}
				printf("-1");

		}
		return 0;
}
