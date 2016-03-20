#include<stdio.h>

int main()
{
		char a[102];

		scanf("%s",a);

		int i;
		int s,b;
		s=b=0;

		for( i=0 ; a[i]!='\0' ; i++ )
		{
				if( a[i]>='a' && a[i]<='z' )
						s++;
				else
						b++;
		}

		if( s>=b )
		{
				for( i=0 ; a[i]!='\0' ; i++ )
				{
						if( a[i]>='A' && a[i]<='Z' )
								printf("%c",a[i]-'A'+'a');
						else		
								printf("%c",a[i]);
				}
		}
		else
		{
				for( i=0 ; a[i]!='\0' ; i++ )
				{
						if( a[i]>='a' && a[i]<='z' )
								printf("%c",a[i]-'a'+'A');
						else		
								printf("%c",a[i]);

				}
		}
		printf("\n");

		return 0;
}
