#include<stdio.h>
#include<string.h>

int main()
{
		char a[102];
		char b[102];

		scanf("%s",a);
		scanf("%s",b);

		int len=strlen(a);
		int i;

		for( i=0 ; i<len ; i++ )
		{
				if( a[i]!=b[len-i-1] )
						break;
		}

		if( i == len )
				printf("YES\n");
		else
				printf("NO\n");

		return 0;
}
