#include<stdio.h>

int main()
{
		char a[1003];
		scanf("%s",a);
		
		if( a[0]<='z' && a[0]>='a' )
				a[0]=a[0]-'a'+'A';

		printf("%s\n",a);
		return 0;
}
