#include<stdio.h>
#include<string.h>

int cmp( const void *x , const void *y )
{
		return *(char*)x - *(char*)y;
}

int main()
{
		char a[105];
		char b[105];

		scanf("%s",a);
		scanf("%s",b);

		int len = strlen(a);
		int i;
		int ans=0;

		for( i=0 ; i<len ; i++ )
		{
				if( b[i]>='A' && b[i]<='Z' )
				{
						b[i] = b[i]-'A'+'a';
				}

				if( a[i]>='A' && a[i]<='Z' )
				{
						a[i] = a[i]-'A'+'a' ;
				}
		}

		//printf("%s\n",a);
		//printf("%s\n",b);

		//qsort(a,len,sizeof(char),cmp);
		//qsort(b,len,sizeof(char),cmp);

		//printf("%s\n",a);
		//printf("%s\n",b);

		for( i=0 ; i<len ; i++ )
		{
				if( a[i] < b[i] )
				{
						printf("-1\n");
						return 0;
				}
				else if( a[i] > b[i] )
				{
						printf("1\n");
						return 0;
				}
		//		printf("%d %d\n",i,ans);
		}

		//if( ans > 0)
		//		printf("1\n");
		//else if( ans < 0)
	//	printf("-1\n");
		//else
		printf("0\n");

		return 0;
}
