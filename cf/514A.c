#include<stdio.h>

int main()
{
		char a[20];

		scanf("%s",a);

		int i;

		if( a[0]!='9' && a[0]>='5' )
				a[0]='9'-a[0]+'0';
		for( i=1 ; a[i]!='\0' ; i++ )
				if( a[i]>='5' )
						a[i]='9'-a[i]+'0';

		printf("%s\n",a);

		return 0;
}
