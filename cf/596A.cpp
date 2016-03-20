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
    int n;
    si(n);

    vii v;

    int x,y;

    rep(i,0,n)
    {
        si(x);si(y);
        v.pb(mp(x,y));
    }

    int w,h;

    if(n==1)
        pin(-1);
    else if(n==2)
    {
        w = abs(v[0].ff - v[1].ff);
        h = abs(v[0].ss - v[1].ss);
        if( w == 0 || h== 0)
            pin(-1);
        else
            pin(w*h);
    }
    else if(n==3)
    {
        w = abs(v[0].ff - v[1].ff);
        w = max(w,abs(v[1].ff - v[2].ff));
        w = max(w,abs(v[2].ff - v[0].ff));
        h = abs(v[0].ss - v[1].ss);
        h = max(h,abs(v[1].ss - v[2].ss));
        h = max(h,abs(v[2].ss - v[0].ss));

        pin(w*h);
    }
    else
    {
        w = abs(v[0].ff - v[1].ff);
        w = max(w,abs(v[1].ff - v[2].ff));
        w = max(w,abs(v[2].ff - v[3].ff));
        w = max(w,abs(v[3].ff - v[0].ff));
        h = abs(v[0].ss - v[1].ss);
        h = max(h,abs(v[1].ss - v[2].ss));
        h = max(h,abs(v[2].ss - v[3].ss));
        h = max(h,abs(v[3].ss - v[0].ss));

        pin(w*h);
    }

    return 0;
}
