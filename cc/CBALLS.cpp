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
    int x,t,cnt,n,ans,pre;
    si(t);

    int seive[100005]={0};

    seive[1] = 1;

    rep(i,2,1000)
        if( !seive[i] )
            for( int j= i*i ; j < 100005 ; j += i )
                seive[j] = 1;

    vi v;

    rep(i,2,10010)
        if( !seive[i] )
            v.pb(i);
    int size = sz(v);

    while( t-- )
    {
        pre=0;
        ans = 1000000009;
        int a[10004];
        si(n);
        si(a[0]);
        rep(i,1,n)
        {
            si(a[i]);
            if( a[i] < a[i-1] )
            {
                pre += a[i-1] - a[i];
                a[i] = a[i-1];
            }
        }
        
        rep(i,0,size)
        {
            cnt = 0;
            rep(j,0,n)
            {
                x = a[j]%v[i];
                if( x )
                    cnt += v[i]-x;
            }
            ans = min(ans,cnt);
        }
        pin(ans+pre);
    }
    return 0;
}
