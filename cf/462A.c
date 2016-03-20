#include<stdio.h>


char a[102][102];

int check(int i,int j)
{
		if( i==0 )
		{
				if( j==0 )
				{
						if(a[i][j+1]!=a[i+1][j])
								return 1;
				}
				else
				{
						int count=0;
						if( a[i][j+1]=='o')
								count++;
						if( a[i][j-1]=='o')
								count++;
						if( a[i+1][j]=='o')
								count++;
						if(count%2==1)
								return 1;
				}
		}
		else if( j==0 )
		{
						int count=0;
						if( a[i][j+1]=='o')
								count++;
						if( a[i-1][j]=='o')
								count++;
						if( a[i+1][j]=='o')
								count++;
						if(count%2==1)
								return 1;
		}
		else
		{
						int count=0;
						if( a[i][j+1]=='o')
								count++;
						if( a[i-1][j]=='o')
								count++;
						if( a[i+1][j]=='o')
								count++;
						if( a[i][j-1]=='o')
								count++;
						if(count%2==1)
								return 1;
		
		}
		return 0;
}

int main()
{
		int n;
		scanf("%d",&n);

		int i;
		for( i=0 ; i<n ; i++ )
				scanf("%s",a[i]);

		int j;
		for( i=0 ; i<n ; i++ )
				for( j=0 ; j<n ; j++ )
						if(check(i,j))
						{
								printf("NO\n");
								return 0;
						}
		printf("YES\n");

		return 0;
}
