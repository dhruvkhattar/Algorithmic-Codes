#include<stdio.h>

int a[100005];

int cmp(void const *a , void const *b)
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
				
				int max=0;
				i=0;

				while( i<n )
				{
						if( a[i+1] == a[i]+1 )
								i++;
						i++;
						max++;
				}

				int min=0;
				i=0;

				while( i<n )
				{
						if( a[i+1] == a[i]+1 && a[i+2]==a[i+1]+1 && i<n-2)
								i=i+2;
						else if(a[i] == a[i+1]-1 && i<n-1)
								i++;
						i++;
						min++;
				}

				printf("%d %d\n",min,max);
		}

		return 0;

}
