#include<stdio.h>

int main()
{
		char a[102];
		char b[102];
		
		scanf("%s",a);
		scanf("%s",b);

		int i;

		char c[102];

		for( i=0 ; a[i]!='\0' ; i++ )
		{
				if( a[i] == b[i] )
						c[i]='0';
				else
						c[i]='1';
		}
		c[i]='\0';

		printf("%s\n",c);

		return 0;
}
