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
    int no1[55]={0};
    int no2[55]={0};

    vi ans;

    int n,x;
    si(n);

    vi a1,a2;

    rep(i,1,n)
    {
        si(x);
        a1.pb(x);
        no1[i+1]=no1[i]+x;
    }
    rep(i,1,n)
    {
        si(x);
        a2.pb(x);
    }
    rrep(i,n,1)
        no2[i]=no2[i+1]+a2[i-1];

    rep(i,1,1+n)
    {
        si(x);
        ans.pb(no1[i]+x+no2[i]);
    }

    sort(all(ans));


    pin(ans[0]+ans[1]);

    return 0;
}
