#include<stdio.h>

int cmp(const void *a,const void *b)
{
		return *(char*)b-*(char*)a;
}

int main()
{
		int n;
		scanf("%d",&n);

		char b[20];

		scanf("%s",b);

		char* a[10];
		a[0]="0";
		a[1]="1";
		a[2]="2";
		a[3]="3";
		a[4]="322";
		a[5]="5";
		a[6]="53";
		a[7]="7";
		a[8]="7222";
		a[9]="7332";

		char x[100];

		int i;
		int len=0;
		for(i=0 ; i<n ; i++ )
		{
				if(b[i]-'0'>1)
				{
						int j;
						for( j=0 ; a[b[i]-'0'][j]!='\0';j++)
						{
								x[len++]=a[b[i]-'0'][j];
						}
				}
		}
		x[len]='\0';

		qsort(x,len,sizeof(char),cmp);

		printf("%s\n",x);

		return 0;
}
