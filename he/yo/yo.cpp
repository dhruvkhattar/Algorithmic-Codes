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

    
ll a[2003][2003];
ll c[2003][2003];

int main()
{
    int n;
    si(n);
    ll ans = 0;

    rep(i,0,n)
        rep(j,0,n)
            sl(a[i][j]);

    for(int i=0;i<n-1;++i)
    {
        for(int j=i;j<n;++j)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
                c[i][j] += a[i][k]&a[k][j];
        }
    }

    rep(i,0,n-1)
        rep(j,i+1,n)
            ans += (c[i][j]*(c[i][j]-1))/2;

    pln(ans/2);

    return 0;
}
