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
    ll a,b,c;
    sl(a);

    rep(i,1,sqrt(a)+1)
    {
        if( a - i*i > 0 && a - 2*i*i != 0)
            if((double)sqrt(a-(i*i)) == (ll)sqrt(a-(i*i)))
            {
                pl(2*i*(ll)sqrt(a-(i*i)));ps;pln(max(2*i*i - a, a - 2*i*i));
                return 0;
            }
    }

    if (a%2 == 0 && a > 2)
    {
        a /= 2;
        pl(a*a + 1);ps;pln(a*a - 1);
        return 0;
    }

    if(a%2 && a>2)
    {
        pl((a+1)*((a-1)/2));ps;pln( ( ((a-1)/2) * ((a-1)/2) ) + ((a+1)/2) * ((a+1)/2) );
        return 0;
    }
    pin(-1);
    return 0;
}
