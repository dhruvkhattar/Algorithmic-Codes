///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define rep(i,j,N) for( int i=j ; i<N ; i++ )
#define si(i) scanf("%d",&i)
#define pi(i) printf("%d",i)
#define pin(i) printf("%d\n",i)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vl;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int ans=0;
int counti=0;
int n,m;
int a[10][10];


inline bool isSafe(int row,int col)
{
    //checking upper left diagnol
    int i,j;
    for( i=row,j=col ; i>=0 && j>=0 ; i-- , j--)
    {
        if(a[i][j] == 2)
            break;
        else if(a[i][j] == 1)
        {
            return false;
        }
    }

    //checking upper right diagnol
    for( i=row,j=col ; i>=0 && j<m ; i-- , j++)
    {
        if(a[i][j] == 2)
            break;
        else if(a[i][j] == 1)
        {
            return false;
        }
    }

    return true;

}


inline void solve(int row)
{
    if( row >= n )
    {
        ans++;
        return;
    }

    rep(j,0,m)
    {
        if(a[row][j]==0)
        {
            counti++;
            //if( isSafe(row,j) )
            //{
                a[row][j]=1;

                int l,r;
                for( l=row+1,r=j-1 ; l<n && r>=0 ; l++ , r-- )
                {
                    if(a[l][r] == 2)
                        break;
                    else 
                        a[l][r] = 1;
                }
                
                for( l=row+1,r=j+1; l<n && r<m ; l++ , r++ )
                {
                    if(a[l][r] == 2)
                        break;
                    else 
                        a[l][r] = 1;
                }

                solve(row+1);
                
                //backtrack
                for( l=row+1,r=j-1 ; l<n && r>=0 ; l++ , r-- )
                {
                    if(a[l][r] == 2)
                        break;
                    else if(a[l][r] == 1)
                        a[l][r] = 0;
                }
                
                for( l=row+1,r=j+1 ; l<n && r<m ; l++ , r++ )
                {
                    if(a[l][r] == 2)
                        break;
                    else if(a[l][r] == 1)
                        a[l][r] = 0;
                }

                a[row][j]=0;
            //}
        }
    }


}

int main()
{
    si(n);
    si(m);

    char x;
    rep(i,0,n)
    {
        getchar();
        rep(j,0,m)
        {
            //obstacle assigned 2
            //bishop 1
            //free space 0
            scanf("%c",&x);
            if( x == '.')
                a[i][j]=0;
            else
                a[i][j]=2;
        }
    }

    solve(0);

    pin(counti);
    pin(ans);
    return 0;
}
