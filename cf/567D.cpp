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
    int n,k,a;

    si(n);si(k);si(a);

    int ans=-1;
    set<int> s;

    s.insert(0);
    s.insert(n+1);
    int ship=(n+1)/(a+1);
    int m;
    si(m);

    int x;
   
    vi v;
    rep(i,1,m+1)
    {
        si(x);
        v.pb(x);
    }
    
    rep(i,1,m+1)
    {
        set<int>::iterator it = s.upper_bound(v[i-1]);

        int r = *it;
        it--;
        int l = *it;

//        pi(i);ps;pin(ship);
        ship-=(r-l)/(a+1);
        ship+=(v[i-1]-l)/(a+1) + (r-v[i-1])/(a+1);

        if(ship<k)
        {
            ans=i;
            break;
        }
        s.insert(v[i-1]);
    }

    pin(ans);
    return 0;
}
