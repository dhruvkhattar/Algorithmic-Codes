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
    ll n,w,l,h,r;
    vector<pair<ll,pair<ll,ll> > > v;

    sl(n);sl(w);sl(l);
    rep(i,0,n)
    {
        sl(h);sl(r);
        v.pb(mp(max(0LL,(ll)ceil((long double)(l-h)/r)),mp(r,h)));
    }

    sort(all(v));
    ll rtot = 0;
    ll sum = 0;
    ll ans = v[0].ff;
    rep(i,0,n)
    {
        if(rtot != 0)
            if((ll)ceil((long double)(w-sum)/rtot) < v[i].ff - ans)
            {
                pln(ans + (ll)ceil((long double)(w-sum)/rtot));
                return 0;
            }
        sum += v[i].ss.ss + v[i].ss.ff*v[i].ff;
        sum += rtot*(v[i].ff - ans);
        ans = v[i].ff;
        rtot += v[i].ss.ff;
        if(sum >= w)
        {
            pln(ans);
            return 0;
        }
    }

    pln(ans + (ll)ceil((long double)(w-sum)/rtot));
    return 0;
}
