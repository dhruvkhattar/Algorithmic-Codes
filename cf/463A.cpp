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
    int n,s;
    si(n);
    si(s);

    int i;
    int ans=-1;
    rep(i,0,n)
    {
        int d;
        int c;
        si(d);
        si(c);
        if( d<s )
            if( c==0 )
                ans=max(0,ans);
            else
                ans=max(ans,100-c);
        else if(d==s && c==0)
            ans=max(0,ans);
    }

    pin(ans);

    return 0;
}
