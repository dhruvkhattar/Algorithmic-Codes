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

ll power( ll a , ll b )
{
    if(b==0)
        return 1;
    if(b%2==0)
        return power(a*a,b/2);
    else
        return power(a*a,b/2)*a;
}

int main()
{
    ll a,b,c;
    sl(a);sl(b);sl(c);

    ll x[1000006];
    int ans=0;
    rep(i,1,82)
    {
        ll yo = c + b*power(i,a);
        if(yo<1000000000 && yo>0)
        {
            int count=0;
            ll tmp=yo;
            while(tmp)
            {
                count+=tmp%10;
                tmp=tmp/10;
            }
            if(count==i)
                x[ans++]=yo;;
        }
    }
    pin(ans);
    if(ans!=0)
    {
        rep(i,0,ans)
        {
            pl(x[i]);ps;
        }
        pn;
    }
    return 0;
}
