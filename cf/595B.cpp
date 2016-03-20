///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( ll i=j ; i<N ; i++ )
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
    ll n,k;

    sl(n);sl(k);

    vl a;
    vl b;
    ll x;
    ll blocks=n/k;
    rep(i,0,blocks)
    {
        sl(x);
        a.pb(x);
    }
    
    rep(i,0,blocks)
    {
        sl(x);
        b.pb(x);
    }

    ll ans=1;

    ll cnt=0;
    ll yo=1;
        
    rep(j,0,k)
        yo*=10;

    ll t=0;
    ll lol=yo/10;
    ll tmp1,tmp2;

    ll start;

    ll st;

    ll no;
    rep(i,0,blocks)
    {
        t = (yo-1)/a[i] + 1;

        tmp1=lol*b[i];
        tmp2=tmp1+lol;
        
        start=tmp1/a[i];

        if(tmp1%a[i]!=0)
            start++;

        st=start*a[i];

        if(st>=tmp2)
            cnt=0;
        else
        {
            tmp2 = tmp2 - st-1;
            cnt=tmp2/a[i] +1;
            
        }
    
        /*rep(j,tmp1,tmp2)
        {
            if(j%a[i]==0)
                cnt++;
        }*/

        t-=cnt;        
/*        pn;
        pln(t);
        pln(cnt);
        pn;
*/
        ans = (ans*t)%mod;
        cnt=0;
    }

    pln(ans);
    return 0;
}
