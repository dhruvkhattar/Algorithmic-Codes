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

double a[100005][2];

int main()
{
    ll n,p;
    sl(n);sl(p);

    ll l,r;
    double yo1,yo3;
    ll yo2,yo4;

    rep(i,0,n)
    {
        sl(l);sl(r);
        a[i][0] = r-l+1;

        yo1 = (double)l/p;
        yo2 = l/p;

        yo3 = (double)r/p;
        yo4 = r/p;

        if( yo1 == yo2 )
            a[i][1] = yo4 - yo2 + 1;
        else
            a[i][1] = yo4 - yo2;
    }

    double ans = 0;
    rep(i,0,n)
    {
        ans += 2000*(a[i][1]/a[i][0])*(a[(i+1)%n][1]/a[(i+1)%n][0]);
        ans += 2000*((a[i][0]-a[i][1])/a[i][0])*(a[(i+1)%n][1]/a[(i+1)%n][0]);
        ans += 2000*(a[i][1]/a[i][0])*((a[(i+1)%n][0]-a[(i+1)%n][1])/a[(i+1)%n][0]);
    }

    printf("%lf\n",ans);
    return 0;
}
