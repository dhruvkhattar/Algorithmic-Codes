///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define rep(i,j,N) for( i=j ; i<N ; i++ )
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
#define all(a) a.begin(),a.end()
#define present(a,x) (find(all(a),x) != (a).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vll;
typedef pair<int,int> pii;

int main()
{
    int n,l;
    si(n);
    si(l);
    
    vi a;

    int i;
    rep(i,0,n)
    {
        int x;
        si(x);
        a.pb(x);
    }

    sort(all(a));

    int maxi=max(a[0],l-a[n-1]);
    maxi=2*maxi;
    rep(i,1,n)
        maxi=max(maxi,a[i]-a[i-1]);

    float yo= (float)maxi/2;

    printf("%.10f\n",yo);

    return 0;
}
