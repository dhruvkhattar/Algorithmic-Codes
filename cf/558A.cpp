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
#define present(a,x) (find(all(a),x) != (a).end())
#define cpresent(c,x) ((c).find(x) != (c).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vll;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
    int k;
    si(k);
    vii n,p;

    rep(i,0,k)
    {
        int x,a;
        si(x);si(a);
        if(x<0)
            n.pb(mp(x,a));
        else
            p.pb(mp(x,a));
    }
    sort(all(p));
    sort(n.rbegin(),n.rend());
    int diff=sz(p)-sz(n);
    ll ans=0;
    if(abs(diff)<=1)
    {
        rep(i,0,sz(p))
            ans+=(long long)p[i].ss;
        rep(i,0,sz(n))
            ans+=(long long)n[i].ss;
    }        
    else if(diff>1)
    {
        rep(i,0,sz(n))
            ans+=(long long)p[i].ss+(long long)n[i].ss;
        ans+=(long long)p[sz(n)].ss;
    }
    else 
    {
        rep(i,0,sz(p))
            ans+=(long long)p[i].ss+(long long)n[i].ss;
        ans+=(long long)n[sz(p)].ss;
    }

    pln(ans);
    return 0;
}
