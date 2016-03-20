///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( long long i=j ; i<N ; i++ )
#define rrep(i,N,j) for( long long i=N-1 ; i>=j ; i-- )
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
#define sz(a) long long((a).size())
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
    long long n;
    sl(n);

    long long a[1000006];

    rep(i,0,n)
        sl(a[i]);

    long long m;
    sl(m);

    long long w,h;
    long long ans=1;
    sl(w);sl(h);
    rep(i,0,w)
    {
        if(a[i]>ans)
            ans=a[i];
    }
    pln(ans);
    ans+=h;
    rep(i,1,m)
    {
        sl(w);sl(h);        
        ans = max(ans,a[w-1]);
        pln(ans);
        ans+=h;
    }
    
    return 0;
}
