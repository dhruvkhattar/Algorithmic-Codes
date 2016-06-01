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
    int n,k;
    si(n);si(k);

    char s[100005];
    scanf("%s",s);

    vi a,b;
    rep(i,0,n)
    {
        if(s[i] == 'a')
            a.pb(i);
        else
            b.pb(i);
    }

    int sa = sz(a);
    int sb = sz(b);

    if(sa <= k || sb <= k)
    {
        pin(n);
        return 0;
    }

    int ans = 0;
    rep(i,0,sa-k)
    {
        if(i == 0)
            ans = max(ans,a[i+k]);
        else
            ans = max(ans,a[i+k]-a[i-1]-1);
    }
    ans = max(ans, n-a[sa-k-1]-1);
    
    rep(i,0,sb-k)
    {
        if(i == 0)
            ans = max(ans,b[i+k]);
        else
            ans = max(ans,b[i+k]-b[i-1]-1);
    }
    ans = max(ans, n-b[sb-k-1]-1);

    pin(ans);
    return 0;
}
