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

long long a[1000006];
long long tree[1000006];
long long lazy[1000006][2];//0 for add , 1 for mul

void build_tree(long long node,long long l,long long r)
{
    if(l>r)
        return;

    if(l==r)
    {
        tree[node]=a[l];
        return;
    }

    build_tree(2*node,l,(l+r)/2);
    build_tree(2*node+1,1+(l+r)/2,r);

    tree[node]=(tree[2*node]+tree[2*node+1])%mod;
}

void update_tree(long long node,long long l, long long r,long long i,long long j,long long addval,long long mulval)
{
    if(lazy[node][0] != 0 || lazy[node][1] != 1 )
    {
        tree[node] = ((tree[node]*lazy[node][1])%mod + ((r-l+1)*lazy[node][0])%mod)%mod;

        if(l!=r)
        {
            lazy[2*node][0]=((lazy[node][1]*lazy[node*2][0])%mod+lazy[node][0])%mod;
            lazy[2*node][1]=(lazy[2*node][1]*lazy[node][1])%mod;
            lazy[2*node+1][0]=((lazy[node][1]*lazy[node*2+1][0])%mod+lazy[node][0])%mod;
            lazy[2*node+1][1]=(lazy[2*node+1][1]*lazy[node][1])%mod;
        }
        lazy[node][0]=0;
        lazy[node][1]=1;
    }

    if(l>r || i>r || j<l)
        return;

    if(l>=i && r<=j)
    {
        tree[node] = ((tree[node]*mulval)%mod + ((r-l+1)*addval)%mod)%mod;

        if(l!=r)
        {
            lazy[2*node][0]=((lazy[2*node][0]*mulval)%mod+addval)%mod;
            lazy[2*node][1]=(lazy[2*node][1]*mulval)%mod;
            lazy[2*node+1][0]=((lazy[2*node+1][0]*mulval)%mod+addval)%mod;
            lazy[2*node+1][1]=(lazy[2*node+1][1]*mulval)%mod;
        }
        
        return;
    }

    update_tree(2*node,l,(l+r)/2,i,j,addval,mulval);
    update_tree(2*node+1,1+(l+r)/2,r,i,j,addval,mulval);

    tree[node] = (tree[node*2] + tree[1+node*2])%mod;
}

long long query_tree(long long node,long long l,long long r,long long i,long long j)
{
    if( l>r || l>j || r<i )
        return 0;

    if(lazy[node][0]!=0 || lazy[node][1]!=1)
    {
        tree[node] = ((tree[node]*lazy[node][1])%mod + ((r-l+1)*lazy[node][0])%mod)%mod;

        if(l!=r)
        {
            lazy[2*node][0]=((lazy[node][1]*lazy[node*2][0])%mod+lazy[node][0])%mod;
            lazy[2*node][1]=(lazy[2*node][1]*lazy[node][1])%mod;
            lazy[2*node+1][0]=((lazy[node][1]*lazy[node*2+1][0])%mod+lazy[node][0])%mod;
            lazy[2*node+1][1]=(lazy[2*node+1][1]*lazy[node][1])%mod;
        }

        lazy[node][0]=0;
        lazy[node][1]=1;
    }
    
    if(l>=i && r<=j)
        return tree[node];

    long long q1 = query_tree(node*2,l,(l+r)/2,i,j);
    long long q2 = query_tree(node*2+1,1+(l+r)/2,r,i,j);

    return (q1+q2)%mod;
}

int main()
{
    long long n,q;
    sl(n);
    sl(q);

    rep(i,0,n)
        sl(a[i]);

    rep(i,0,1000006)
    {
        lazy[i][0]=0;
        lazy[i][1]=1;
    }

    build_tree(1,0,n-1);

    rep(i,0,q)
    {
        long long c;
        long long x,y,v;
        sl(c);
        if(c==1)
        {
            sl(x);sl(y);sl(v);
            update_tree(1,0,n-1,x-1,y-1,v,1);
        }
        else if(c==2)
        {
            sl(x);sl(y);sl(v);
            update_tree(1,0,n-1,x-1,y-1,0,v);
        }
        else if(c==3)
        {
            sl(x);sl(y);sl(v);
            update_tree(1,0,n-1,x-1,y-1,v,0);
        }
        else
        {
            sl(x);sl(y);
            pln(query_tree(1,0,n-1,x-1,y-1));
        }
    }

    return 0;
}
