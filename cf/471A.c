#include<stdio.h>

int count[11];

int main()
{
		int a,b,c,d,e,f;

		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);

		count[a]++;
		count[b]++;
		count[c]++;
		count[d]++;
		count[e]++;
		count[f]++;


		int i;

		int x=0,y=0;
		for( i=0 ; i<10 ; i++ )
				if( count[i] >= 4 )
						x=count[i];
				else if( count[i] == 2 )
						y=2;
		if( x==4 && y==2 )
				printf("Elephant\n");
		else if(x==6)				
				printf("Elephant\n");
		else if(x==5)
				printf("Bear\n");
		else if( x==4 )
				printf("Bear\n");
		else
				printf("Alien\n");

		return 0;
}
