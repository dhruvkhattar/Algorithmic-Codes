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
    int t,n;
    ll yo;
    ll a[102];
    ll g[70];
    ll no[70];
    g[0] = 1;
    g[1] = 1;
    g[2] = 2;
    g[3] = 2;
    no[0] = 1;
    no[1] = 2;
    no[2] = 4;
    no[3] = 6;
    rep(i,4,70)
    {
        if(i%4 == 0)
            g[i] = 3*g[i-1];
        else if(i%4 == 3)
            g[i] = g[i-1];
        else
            g[i] = 2*g[i-1];
        no[i] = no[i-1] + g[i];
    }
    si(t);
    while(t--)
    {
        si(n);
        ll x = 0;
        rep(j,0,n)
        {
            sl(a[j]);
            rep(i,0,70)
            {
                if(no[i] >= a[j]+1)
                {
                    yo = i%4;
                    break;
                }
            }
            x ^= yo;
        }
        if(x == 0)
            printf("Derek\n");
        else
            printf("Henry\n");
    }
    return 0;
}
