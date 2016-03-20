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

    vector< pair< int , ii> > v;

    int x;

    int lol[810]={0};

    rep(i,2,2*n+1)
    {
        rep(k,1,i)
        {
            si(x);
            v.pb(mp(x,mp(i,k)));
        }
    }

    sort(rall(v));


    int j=0;
    int i=0;
    while(j<2*n)
    {
        if( lol[v[i].ss.ff]!=0 || lol[v[i].ss.ss]!=0 )
            ;
        else
        {
            lol[v[i].ss.ff]=v[i].ss.ss;
            lol[v[i].ss.ss]=v[i].ss.ff;
            j+=2;
        }
        i++;
    }

    rep(i,1,2*n+1)
    {
        pi(lol[i]);ps;
    }
    pn;

    return 0;
}
