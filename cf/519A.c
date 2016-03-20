#include<stdio.h>

int main()
{
		char a[9][9];

		int i,j;
		int w,b;
		w=b=0;
		for( i=0 ; i<8 ; i++ )
		{
				for( j=0 ; j<8 ; j++ )
						{
								scanf("%c",&a[i][j]);
								if(a[i][j]=='Q')
										w+=9;
								else if(a[i][j]=='R')
										w+=5;
								else if(a[i][j]=='B')
										w+=3;
								else if(a[i][j]=='N')
										w+=3;
								else if(a[i][j]=='P')
										w+=1;
								else if(a[i][j]=='q')
										b+=9;
								else if(a[i][j]=='r')
										b+=5;
								else if(a[i][j]=='b')
										b+=3;
								else if(a[i][j]=='n')
										b+=3;
								else if(a[i][j]=='p')
										b+=1;
						}
				getchar();
		}
		if( w>b )
				printf("White\n");
		else if( b>w )
				printf("Black\n");
		else
				printf("Draw\n");

		return 0;
}
