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
    int t,n,m,s,x;
    si(t);
    while(t--)
    {
        vi v;
        ll ans[1003][1003]={0};

        si(n);si(m);si(s);
        rep(i,0,m)
        {
            si(x);
            v.pb(x);
        }
        ans[0][s] = 1;
        rep(i,1,1+m)
        {
            rep(j,1,1+n)
            {
                if(ans[i-1][j])
                {
                    if(j+v[i-1] <= n)
                        ans[i][j+v[i-1]] = (ans[i][j+v[i-1]] + ans[i-1][j])%mod;
                    if(j-v[i-1] > 0)
                        ans[i][j-v[i-1]] = (ans[i][j-v[i-1]] + ans[i-1][j])%mod;
                    
                }
            }
        }

        rep(i,1,1+n)
        {
            pl(ans[m][i]);ps;
        }
        pn;
    }
    return 0;
}
