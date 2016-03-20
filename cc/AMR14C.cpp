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

int a[1000006];
int tree[1000000];

void build_tree(int node,int l,int r)
{
    if(l>r)
        return;

    if(l==r)
    {
        tree[node]=a[l];
        return;
    }

    build_tree(2*node,l,(l+r)/2);
    build_tree(2*node+1,(l+r)/2+1,r);

    tree[node] = tree[2*node] + tree[2*node+1];
}

int query_tree(int node,int l,int r,int i,int j)
{
    if( l>r || l>j || r<i)
        return 0;

    if( l>=i && r<=j )
        return tree[node];

    int q1 = query_tree(node*2,l,(l+r)/2,i,j);
    int q2 = query_tree(node*2+1,1+(l+r)/2,r,i,j);

    int res = q1+q2;

    return res;
}

int main()
{
    int t;
    si(t);
    int n,m,x;
    int size;
    int y;

    while( t-- )
    {
        ll ans = 0;
        si(n);si(m);si(x);

        memset(a,0,sizeof(a));
        memset(tree,0,sizeof(tree));

        vi v;

        rep(i,0,n)
        {
            si(y);
            a[y%m]++;
            v.pb(y%m);
        }

        build_tree(1,0,m-1);

    //    rep(i,1,10)
      //  {
        //    pi(i);ps;pin(tree[i]);
       // }
        size = sz(v);

        rep(i,0,size)
        {
            if(x>=v[i])
                ans+=query_tree(1,0,m-1,0,x-v[i]);
            if(x+m-v[i]>=m)
                ans+=query_tree(1,0,m-1,m-v[i],m-1);
            else
                ans+=query_tree(1,0,m-1,m-v[i],x+m-v[i]);
           // pln(ans);
        }
        pln(ans);
        
    }
    return 0;
}
