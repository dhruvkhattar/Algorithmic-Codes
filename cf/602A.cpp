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
    ll n,a,m,b;
    ll arr1[15];
    ll arr2[15];

    ll fno,sno;

    sl(n);sl(a);

    fno = 0;
    ll mult = 1;
    rep(i,0,n)
    {
        sl(arr1[i]);
    }

    rrep(i,n,0)
    {
        fno = fno + arr1[i]*mult;
        mult = mult*a;
    }


    sl(m);sl(b);

    sno = 0;
    mult = 1;
    rep(i,0,m)
    {
        sl(arr2[i]);
    }
    
    rrep(i,m,0)
    {
        sno = sno + arr2[i]*mult;
        mult = mult*b;
    }

    if( fno == sno )
        printf("=\n");
    else if( fno < sno )
        printf("<\n");
    else
        printf(">\n");
    
    return 0;
}
