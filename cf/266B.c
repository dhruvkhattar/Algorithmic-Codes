#include<stdio.h>

int main()
{
		int n,t;
		scanf("%d%d",&n,&t);

		char a[52];

		scanf("%s",a);

		int i,j;
		for( i=0 ; i<t ; i++ )
		{
				for( j=0 ; j<n-1 ; j++ )
						if( a[j]=='B' && a[j+1]=='G' )
						{
								a[j]='G';
								a[j+1]='B';
								j++;
						}
		}

		printf("%s\n",a);

		return 0;
}
