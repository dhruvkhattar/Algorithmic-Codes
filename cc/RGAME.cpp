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

int main()
{
    int t;
    int n;
    si(t);

    while( t-- )
    {
        ll a[100005]={0};
        ll b[100005]={0};
        si(n);
        n++;
        rep(i,0,n)
            sl(a[i]);

        ll yo=2;

        b[0]=0;
        rep(i,1,n)
        {
            b[i] = (b[i-1] + (yo*a[i-1])%mod)%mod;
            if( i != 1)
                yo = (yo*2)%mod;
        }
        
        ll ans = 0;
        rep(i,1,n)
            ans = ((2*ans)%mod + (b[i]*a[i])%mod)%mod;
        pln(ans);
    }
    return 0;
}
