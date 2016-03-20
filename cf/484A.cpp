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
    ll n,l,r;
    ll x,y;
    sl(n);

    while( n-- )
    {
        int a[100]={0};
        int b[100]={0};

        sl(l);sl(r);
       
        x=l;
        y=r;

        ll i=0;

        while(x)
        {
            a[i]=x%2;
            x=x/2;
            i++;
        }

        i=0;

        int cnt = 0;
        int cnt2 = 0;

        while(y)
        {
            b[i]=y%2;
            cnt+=b[i];
            y=y/2;
            i++;
        }
        
        rrep(j,i,0)
        {
            if( b[j]==1 && a[j]==0 )
            {
                b[j]=0;
                rrep(k,j,0)
                    b[k]=1;
                break;
            }

        }
        
        ll ans = 0;

        ll x=1;

        rep(j,0,i)
        {
                ans += (ll)b[j]*x;
                x*=2;
                cnt2+=b[j];
        }

        if(cnt2>=cnt)
            pln(ans);
        else
            pln(r);

    }
    return 0;
}
