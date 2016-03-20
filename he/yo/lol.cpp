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

    
int a[2003][2003];
int c[2003][2003];

int main()
{
    int n;
    si(n);
    int x;
    ll ans = 0;

    rep(i,1,1+n)
        rep(j,1,1+n)
            si(a[i][j]);

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
                c[i][j]=c[i][j]+(a[i][k]*a[k][j]);
        }
    }
    
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            a[i][j]=0;
            for(int k=0;k<n;k++)
                a[i][j]=c[i][j]+(a[i][k]*a[k][j]);
        }
    }

    rep(i,0,n-1)
            ans += a[i][i];

    pln(ans/3);

    return 0;
}
