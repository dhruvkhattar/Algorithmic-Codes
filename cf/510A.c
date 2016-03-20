#include<stdio.h>

int main()
{
		int m,n;
		scanf("%d%d",&n,&m);

		int i,j;

		for( i=0 ; i<n ; i++ )
		{
				for( j=0 ; j<m && i%2==0 ; j++ )
						printf("#");
				if( i%4==3 )
						printf("#");
				for( j=0 ; j<m-1 && i%2==1 ; j++ )
						printf(".");
				if( i%4==1 )
						printf("#");
				printf("\n");
		}

		return 0;
}
