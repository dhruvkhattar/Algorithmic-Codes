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

int n,a,b,c;
int dp[1000][1000]={0};

int solve(int l,int r)
{
    if( l>r || l==r )
        return 0;

    if(dp[l][r]!=0)
        return dp[l][r];
    
    int cur;
    int mina = 99999999;
    
    rep(i,l,r)
    {
        rep(j,i+1,r+1)
        {
            cur = max( max(solve(l,i)+a , solve(i+1,j)+b) , solve(j+1,r)+c );
                mina=min(mina,cur);
        }
    }

    return dp[l][r]=mina;
}
int main()
{
    int t;
    si(t);


    while(t--)
    {
        si(n);si(a);si(b);si(c);
        pin(solve(1,n));
        pin(dp[1][n]);
    }
    return 0;
}
