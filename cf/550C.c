#include<stdio.h>
#include<string.h>

int main()
{
		char a[102];

		scanf("%s",a);

		int len=strlen(a);

		int i,j,k;

		for( i=0 ; i<len ; i++ )
		{
				if( a[i]=='0' || a[i]=='8' )
				{
						printf("YES\n");
						printf("%c",a[i]);
						return 0;
				}
		}


		for( i=0 ; i<len-1 ; i++ )
		{
				int x=10*(a[i]-'0');
				for( j=i+1 ; j<len ; j++ )
				{
						int y=x+a[j]-'0';
						if( y%8 == 0 )
						{
								printf("YES\n");
								printf("%d\n",y);
								return 0;
						}
				}
		}

		for( k=0 ; k<len-2 ; k++ )
		{
				int x=100*(a[k]-'0');
				for( i=k+1 ; i<len-1 ; i++ )
				{
						int y=x+10*(a[i]-'0');
						for( j=i+1 ; j<len ; j++ )
						{
								int z=y+a[j]-'0';
								if( z%8 == 0 )
								{
										printf("YES\n");
										printf("%d\n",z);
										return 0;
								}
						}
				}
		}

		printf("NO\n");
		return 0;
}
