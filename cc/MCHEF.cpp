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
    int t;
    si(t);
    while(t--)
    {
        int n,k,m;
        si(n);si(k);si(m);

        vll a;
        ll tot=0;
        int mc[100055];
        rep(i,0,n+1)
            mc[i]=600;
        rep(i,0,n)
        {
            long long x;
            sl(x);
            a.pb(x);
            tot=tot+x;
        }

        vi cost;
        vi L[100055],R[100055];
        rep(i,0,m)
        {
            int l,r,c;
            si(l);si(r);si(c);
            L[l].pb(i);
            R[r].pb(i);
            cost.pb(c);  
        }
        set<ii> s;

        rep(i,1,n+1)
        {
            rep(j,0,sz(L[i]))
                s.insert(mp(cost[L[i][j]],L[i][j]));
           
            mc[i]=s.begin()->ff;

            rep(j,0,sz(R[i]))
                s.erase(mp(cost[R[i][j]],R[i][j]));
            
        }

        vector<pair<ll,int> > v;

        rep(i,0,n)
        {
            if( a[i]<0 && mc[i+1]<=k && mc[i+1]>0 )
                v.pb(mp(a[i],mc[i+1]));
        }

        ll ans[505]={0};
        int size=sz(v);

        rep(i,0,size)
        {
            rrep(j,k+1,1)
            {
                if(v[i].ss <= j )
                    ans[j]=max(ans[j],ans[j-v[i].ss]+abs(v[i].ff));
                else
                    break;
            }
        }
        pln(tot+ans[k]);
    }
    return 0;
}
