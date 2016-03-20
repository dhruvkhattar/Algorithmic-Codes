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
typedef vector <ll> vll;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
    int n;
    si(n);

    int a[1000006]={0};
    vi v;
    int max=0;
    rep(i,0,n)
    {
        int x;
        si(x);
        a[x]++;
        v.pb(x);
        if(a[x]>max)
            max=a[x];
    }
    set<int> s;
    rep(i,1,1000001)
    {
        if(a[i]==max)
            s.insert(i);
    }

    int l,r;
    l=0;
    r=n-1;

    tr(s,it)
    {
        int tl,tr;
        tl=find(all(v),*it)-v.begin();               
        tr=v.rend()-find(rall(v),*it)-1;
        if(tr-tl < r-l)
        {
            r=tr;
            l=tl;
        }
        if(r-l==max-1)
            break;
    }
    pi(l+1);ps;pin(r+1);
    return 0;
}
