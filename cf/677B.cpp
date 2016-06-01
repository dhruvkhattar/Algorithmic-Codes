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
    ll n,k,h;
    ll ans = 0;
    sl(n);sl(h);sl(k);

    ll a[100005];
    rep(i,0,n)
        sl(a[i]);
    
    ll p = a[0];
    ll cnt = 0;

    rep(i,1,n)
    {
        if(p+a[i] <= h)
        {
            p += a[i];
            cnt += 1;
        }
        else
            break;
    }

    ll i = cnt;
    ll yo;

    while(i<n)
    {
        //pl(i);ps;pln(ans);
        if(i == n-1)
        {
            ans += p/k;
            if(p%k)
                ans += 1;
            i++;
        }
        else
        {
            yo = (p+a[i+1]-h)/k;
            if( (p+a[i+1]-h)%k )
                yo += 1;
            p -= min(p,yo*k);
            ans += yo;
            i++;
            while(i<n)
            {
                if( p+a[i] <= h)
                    p += a[i];
                else
                {
                    break;
                }
                i++;
            }
            i--;
        }
    }

    pln(ans);
    return 0;
}
