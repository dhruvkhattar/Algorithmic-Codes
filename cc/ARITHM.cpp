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

ll gcde(ll a, ll b, ll *x, ll *y)
{
    if(a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }
    ll x1, y1;
    ll g = gcde(b%a, a, &x1, &y1);
    *x = y1 - (b/a)*x1;
    *y = x1;
    return g;
}

int main()
{
    int t;
    long double n, c;
    ll a1, b1, g;
    long double a, b, k1, k2, yo1, yo2;
    si(t);
    while(t--)
    {
        scanf("%Lf%Lf",&n,&c);
        if(n==1)
        {
            printf("Yes\n");
            continue;
        }
        k1 = n;
        k2 = (n*(n-1))/2;
        g = gcde((ll)k1, (ll)k2, &a1, &b1);
        if(((ll)c)%g != 0)
        {
            printf("No\n");
            continue;
        }
        a = (long double)a1;
        b = (long double)b1;
        yo1 = ceil(-a*(c/k2));
        yo2 = floor(b*(c/k1));
        if(yo1 != (-a*(c/k2)) && yo2 != (b*(c/k1)))
        {
            if(yo1 <= yo2)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else if(yo1 == (-a*(c/k2)) && yo2 == (b*(c/k1)))
        {
            if(yo1 < yo2-1)
                printf("Yes\n");
            else
                printf("No\n");
        }
        else
        {
            if(yo1 < yo2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}

