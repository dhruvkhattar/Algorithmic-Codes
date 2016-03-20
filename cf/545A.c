#include<stdio.h>

int a[102];
int m[102][102];
int q[102];

int main()
{
		int t;
		scanf("%d",&t);

		int i,j;

		for( i=0 ; i<t ; i++ )
				for( j=0 ; j<t ; j++ )
						scanf("%d",&m[i][j]);

		for( i=0 ; i<t ; i++ )
				for( j=0 ; j<i ; j++ )
						if ( m[i][j]==3 )
						{
								a[i+1]=1;
								a[j+1]=1;
						}
						else if( m[i][j]==1 && a[i+1]==0 )
								a[i+1]=1;
						else if( m[i][j]==2 && a[j+1]==0 )
								a[j+1]=1;

		int count=0;
		for( i=1 ; i<t+1 ; i++ )
				if(a[i]==0)
				{
						q[count]=i;
						count++;
				}

		printf("%d\n",count);

		for( i=0 ; i<count ; i++ )
				printf("%d ",q[i]);
		return 0;
}
