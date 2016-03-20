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
    ll n,d;

    sl(n);sl(d);

    vector<pair<ll,ll> > v;
    ll x,y;
    rep(i,0,n)
    {
        sl(x);sl(y);
        v.pb(mp(x,y));
    }

    sort(all(v));

    ll l[100005]={0};

    l[0]=v[0].ff;
    rep(i,1,n+1)
    {
        l[i] = l[i-1] + v[i-1].ss;
    }

    ll ans=0;
    int j=0;
    rep(i,0,n)
    {
        while( v[j].ff - v[i].ff < d )
        {
            j++;
            if(j>=n)
                break;
        }
     //   pi(i);ps;pin(j);
       // pln(l[j]-l[i]);
        ans=max(ans,l[j]-l[i]);
        if(j>=n)
            break;
        j--;
    }
    pln(ans);
    return 0;
}
