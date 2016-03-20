///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( int i=j ; i<N ; i++ )
#define rrep(i,N,j) for( int i=N-1 ; i>=j ; i-- )
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define pi(i) printf("%d",i)
#define pl(i) printf("%lld",i)
#define pin(i) printf("%d\n",i)
#define pln(i) printf("%lld\n",i)
#define ps printf(" ")
#define pn printf("\n")
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz(a) int((a).size())
#define tr(c,i) for(typeof((c).begin())i = (c).begin(); i != (c).end(); i++) 
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define present(a,x) (find(all(a),x) != (a).end())
#define cpresent(c,x) ((c).find(x) != (c).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vl;
typedef pair<int,int> ii;
typedef vector<ii> vii;

char a[1003][1003];
char b[1003][1003];
int dp[1003][1003];
int n,m,yo;

int solve(int i,int j)
{
    if( i >= n || j >= m || i < 0 || j < 0)
        return 0;
    if( a[i][j] == '*' )
        return 0;

    return dp[i][j] = solve(i,j+1) + solve()
}

int main()
{
    si(n);si(m);

    rep(i,0,n)
            scanf("%s",a[i]);

    rep(i,0,n)
        rep(j,0,m)
            if( a[i][j] == '.')
                b[i][j] = '.';
            else
            {
                yo = solve(i,j);
                b[i][j] = '0' + yo%10;
            }


    rep(i,0,n)
    {
        rep(j,0,m)
            printf("%c",a[i][j]);
        pn;
    }

    return 0;
}
