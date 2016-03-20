#include<stdio.h>
#include<string.h>

int main()
{
		char a[105];
		char b[105];

		scanf("%s",a);

		int	len=strlen(a);

		int i;
		for( i=1 ; i<len ; i++ )
				if( a[i]<='z' && a[i]>='a')
				{
						printf("%s\n",a);
						return 0;
				}
				else
						b[i]=a[i]-'A'+'a';

		b[i]='\0';

		if( a[0]<='z' && a[0]>='a')
				b[0]=a[0]+'A'-'a';
		else
				b[0]=a[0]-'A'+'a';

		printf("%s\n",b);
		return 0;
}
