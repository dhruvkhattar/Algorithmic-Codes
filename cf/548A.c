#include<stdio.h>
#include<string.h>

char s[1003];

int checkpal(int start,int end)
{
		while( start<end )
		{
				if( s[start]!=s[end])
						return 0;		
				start++;
				end--;
		}
		return 1;
}

int main()
{
		scanf("%s",s);

		int k;
		scanf("%d",&k);

		int len = strlen(s);

		if( len%k!=0 )
				printf("NO\n");
		else
		{
				int n = len/k;
				int i;
				int j=0;
				int flag=0;

				for( i=0 ; i<k ; i++ )
				{
						if( checkpal(j,j+n-1)==0 )
						{
								flag=1;
								break;
						}
						j=j+n;		
				}

				if( flag==1 )
						printf("NO\n");
				else
						printf("YES\n");
		}
		return 0;
}
