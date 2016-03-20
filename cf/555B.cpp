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
    ll n,m;
    sl(n);sl(m);

    vector<pair<ll,ll> > v;

    ll x,y;

    rep(i,0,n)
    {
        sl(x);sl(y);
        v.pb(mp(x,y));
    }
    
    vector<pair<pair<ll,ll>,int> > segment;
    rep(i,1,n)
        segment.pb(mp(mp(v[i].ss-v[i-1].ff , v[i].ff-v[i-1].ss),i));
    
    sort(all(segment));

    set<pair<ll,int> > s;
    rep(i,1,m+1)
    {
        sl(x);
        s.insert(mp(x,i));
    }

    ll ans[200005];
    rep(i,1,n)
    {
        set<pair<ll,int> >::iterator it = s.lower_bound(mp(segment[i-1].ff.ss,-1));
        if(it!=s.end() && segment[i-1].ff.ff >= it->ff)
        {
            ans[segment[i-1].ss] = it->ss;
            s.erase(it);
        }
        else
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    rep(i,1,n)
    {
        pl(ans[i]);ps;
    }
    pn;
    return 0;
}
