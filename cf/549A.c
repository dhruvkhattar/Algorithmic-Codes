#include<stdio.h>

char a[100][100];

int main()
{
		int m,n;
		scanf("%d%d",&n,&m);
		getchar();
		int i,j;
		for( i=0 ; i<n ; i++ )
		{
				for( j=0 ; j<m ; j++ )
						scanf("%c",&a[i][j]);					
				getchar();
		}

		int ans=0;
		for( i=0 ; i<n ; i++ )
				for( j=0 ; j<m ; j++ )
						if( a[i][j]=='f' )
						{
								if( a[i][j+1] == 'a' && a[i+1][j+1]=='c' && a[i+1][j]=='e' )
										ans++;
								else if( a[i][j+1] == 'c' && a[i+1][j+1]=='e' && a[i+1][j]=='a' )
										ans++;
								else if( a[i][j+1] == 'a' && a[i+1][j+1]=='e' && a[i+1][j]=='c' )
										ans++;
								else if( a[i][j+1] == 'c' && a[i+1][j+1]=='a' && a[i+1][j]=='e' )
										ans++;
								else if( a[i][j+1] == 'e' && a[i+1][j+1]=='a' && a[i+1][j]=='c' )
										ans++;
								else if( a[i][j+1] == 'e' && a[i+1][j+1]=='c' && a[i+1][j]=='a' )
										ans++;
								if( a[i][j+1] == 'a' && a[i-1][j+1]=='c' && a[i-1][j]=='e' )
										ans++;
								else if( a[i][j+1] == 'c' && a[i-1][j+1]=='e' && a[i-1][j]=='a' )
										ans++;
								else if( a[i][j+1] == 'a' && a[i-1][j+1]=='e' && a[i-1][j]=='c' )
										ans++;
								else if( a[i][j+1] == 'c' && a[i-1][j+1]=='a' && a[i-1][j]=='e' )
										ans++;
								else if( a[i][j+1] == 'e' && a[i-1][j+1]=='a' && a[i-1][j]=='c' )
										ans++;
								else if( a[i][j+1] == 'e' && a[i-1][j+1]=='c' && a[i-1][j]=='a' )
										ans++;
								if( a[i][j-1] == 'a' && a[i+1][j-1]=='c' && a[i+1][j]=='e' )
										ans++;
								else if( a[i][j-1] == 'c' && a[i+1][j-1]=='e' && a[i+1][j]=='a' )
										ans++;
								else if( a[i][j-1] == 'a' && a[i+1][j-1]=='e' && a[i+1][j]=='c' )
										ans++;
								else if( a[i][j-1] == 'c' && a[i+1][j-1]=='a' && a[i+1][j]=='e' )
										ans++;
								else if( a[i][j-1] == 'e' && a[i+1][j-1]=='a' && a[i+1][j]=='c' )
										ans++;
								else if( a[i][j-1] == 'e' && a[i+1][j-1]=='c' && a[i+1][j]=='a' )
										ans++;
								if( a[i][j-1] == 'a' && a[i-1][j-1]=='c' && a[i-1][j]=='e' )
										ans++;
								else if( a[i][j-1] == 'c' && a[i-1][j-1]=='e' && a[i-1][j]=='a' )
										ans++;
								else if( a[i][j-1] == 'a' && a[i-1][j-1]=='e' && a[i-1][j]=='c' )
										ans++;
								else if( a[i][j-1] == 'c' && a[i-1][j-1]=='a' && a[i-1][j]=='e' )
										ans++;
								else if( a[i][j-1] == 'e' && a[i-1][j-1]=='a' && a[i-1][j]=='c' )
										ans++;
								else if( a[i][j-1] == 'e' && a[i-1][j-1]=='c' && a[i-1][j]=='a' )
										ans++;		
						}
		printf("%d\n",ans);

		return 0;
}
