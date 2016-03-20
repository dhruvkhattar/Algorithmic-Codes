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
    int n,m;
    si(n);si(m);
    int i,j;
    i=j=1;
    vii p;
    int count=0;
    while(i<=n&&j<=m)
    {
        if(i==n)
        {
            p.pb(mp(i,j++));
        }
        else if(j==m)
        {
            p.pb(mp(i++,j));
        }
        else
        {
            if(count%2==0)
            {
                p.pb(mp(i,j++));
            }
            else
            {
                p.pb(mp(i++,j));
            }
        }
        count++;
    }
    pin(count);
    tr(p,it)
    {
        pi((*it).ff);
        ps;
        pin((*it).ss);
    }
    return 0;
}
