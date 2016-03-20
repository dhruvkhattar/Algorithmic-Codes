///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( ll i=j ; i<N ; i++ )
#define rrep(i,N,j) for( ll i=N-1 ; i>=j ; i-- )
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
#define sz(a) ll((a).size())
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

ll a[1000006];
pair<ll,ll> L[1000006];
pair<ll,ll> R[1000006];
ll tree[4000006]={0};

void update_tree(ll node,ll l,ll r,ll pos)
{
    if( pos < l || pos > r || l>r)
        return;

    if( l==r && l==pos )
    {
        tree[node] +=1 ;
        return;
    }

    update_tree(2*node,l,(l+r)/2,pos);
    update_tree(2*node+1,1+(l+r)/2,r,pos);

    tree[node] = tree[2*node] + tree[2*node+1];

}

ll query_tree(ll node , ll l ,ll r,ll i,ll j)
{
    if( l>j || i>r || l>r)
        return 0;
    if( l>=i && r<=j )
        return tree[node];
    return query_tree(2*node,l,(l+r)/2,i,j) + query_tree(2*node+1,1+(l+r)/2,r,i,j);
}

int main()
{
    ll n;
    sl(n);

    rep(i,0,n)
        sl(a[i]);

    map <ll,ll> m;

    rep(i,0,n)
    {
        m[a[i]]++;
        L[i].ff=m[a[i]];
    }

    m.clear();
    
    rrep(i,n,0)
    {
        m[a[i]]++;
        R[i].ff=m[a[i]];
    }

    rep(i,0,n)
        R[i].ss=L[i].ss=i;

    sort(R,R+n);
    sort(L,L+n);
 
    ll ans=0;

    ll i=0,j=0;

    while( i<n )
    {
        while(j<n && L[i].ff > R[j].ff)
        {
            update_tree(1,0,n-1,R[j].ss);
            j++;
        }
        ans += query_tree(1,0,n-1,L[i].ss+1,n-1);
        i++;
    }

    pln(ans);

    return 0;
}
