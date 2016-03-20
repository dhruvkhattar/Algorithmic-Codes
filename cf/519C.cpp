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
#define sz(a) int((a).size())
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define all(a) (a).begin(),(a).end()
#define present(a,x) (find(all(a),x) != (a).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vll;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
    int n,m;
    si(n);
    si(m);

    int p=min(n,m);
    n=n-p;
    m=m-p;
    int ans=0;

    while( n!=0 && p>0)
    {
        ans++;
        n--;
        p--;
    }
    
    while( m!=0 && p>0 )
    {
        ans++;
        m--;
        p--;
    }
        ans+=(2*p)/3;

    pin(ans);
    return 0;
}
