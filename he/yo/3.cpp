///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( ll i=j ; i<N ; i++ )
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

ll a[1000000];
ll a2[1000000];
ll tree[1000000];
ll tree2[1000000];
ll lazy[1000000];
ll lazy2[1000000];

void build_tree(ll node,ll l,ll r)
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

    tree[node] = tree[2*node]+tree[2*node+1];
}

void build_tree2(ll node,ll l,ll r)
{
    if(l>r)
        return;

    if(l==r)
    {
        tree2[node]=a2[l];
        return;
    }

    build_tree2(2*node,l,(l+r)/2);
    build_tree2(2*node+1,(l+r)/2+1,r);

    tree2[node] = tree2[2*node]+tree2[2*node+1];
}

void update_tree(ll node,ll l,ll r,ll i,ll j,ll val)
{
    if(lazy[node]!=0)
    {
        tree[node] += lazy[node];

        if(l!=r)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }

        lazy[node] = 0;
    }

    if( l>r || r<i || l>j)
        return;

    if(l >= i && r <= j)
    {
        tree[node] += val;

        if(l!=r)
        {
            lazy[node*2] += val;
            lazy[node*2+1] += val;
        }

        return;

    }

    update_tree(node*2,l,(l+r)/2,i,j,val);
    update_tree(node*2+1,1+(l+r)/2,r,i,j,val);

    tree[node] = tree[node*2]+tree[node*2+1];
}

void update_tree2(ll node,ll l,ll r,ll i,ll j,ll val)
{
    if(lazy2[node]!=0)
    {
        tree2[node] += lazy2[node];

        if(l!=r)
        {
            lazy2[node*2] += lazy2[node];
            lazy2[node*2+1] += lazy2[node];
        }

        lazy2[node] = 0;
    }

    if( l>r || r<i || l>j)
        return;

    if(l >= i && r <= j)
    {
        tree2[node] += val;

        if(l!=r)
        {
            lazy2[node*2] += val;
            lazy2[node*2+1] += val;
        }

        return;

    }

    update_tree2(node*2,l,(l+r)/2,i,j,val);
    update_tree2(node*2+1,1+(l+r)/2,r,i,j,val);

    tree2[node] = tree2[node*2]+tree2[node*2+1];
}

ll query_tree(ll node,ll l,ll r,ll i,ll j)
{
    if( l>r || l>j || r<i)
        return 0;
    
    if(lazy[node]!=0)
    {
        tree[node] += lazy[node];

        if(l!=r)
        {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }

        lazy[node] = 0;
    }

    if( l>=i && r<=j )
        return tree[node];

    ll q1 = query_tree(node*2,l,(l+r)/2,i,j);
    ll q2 = query_tree(node*2+1,1+(l+r)/2,r,i,j);

    ll res = q1+q2;

    return res;
}

ll query_tree2(ll node,ll l,ll r,ll i,ll j)
{
    if( l>r || l>j || r<i)
        return 0;
    
    if(lazy2[node]!=0)
    {
        tree2[node] += lazy2[node];

        if(l!=r)
        {
            lazy2[node*2] += lazy2[node];
            lazy2[node*2+1] += lazy2[node];
        }

        lazy2[node] = 0;
    }

    if( l>=i && r<=j )
        return tree2[node];

    ll q1 = query_tree2(node*2,l,(l+r)/2,i,j);
    ll q2 = query_tree2(node*2+1,1+(l+r)/2,r,i,j);

    ll res = q1+q2;

    return res;
}

int main()
{
    ll n,q,c,k,l,r,s;
    sl(n);
    sl(q);

    rep(i,0,n)
    {
        sl(a[i]);
        a2[i] = a[i]*i;
    }

    build_tree(1,0,n-1);
    build_tree2(1,0,n-1);

    rep(i,0,q)
    {
        sl(c);
        if(c==1)
        {
            sl(k);sl(l);sl(r);
            if( k<=r && k>=l)
                printf("%lld\n",abs(query_tree2(1,0,n-1,l-1,k-1) - (k-1)*query_tree(1,0,n-1,l-1,k-1)) + abs(query_tree2(1,0,n-1,k-1,r-1) - (k-1)*query_tree(1,0,n-1,k-1,r-1)));
            else
                printf("%lld\n",abs(query_tree2(1,0,n-1,l-1,r-1) - (k-1)*query_tree(1,0,n-1,l-1,r-1)));
            
        }
        else
        {
            sl(k);sl(s);
            update_tree(1,0,n-1,k-1,k-1,s);
            update_tree2(1,0,n-1,k-1,k-1,(k-1)*s);
        }
    }
    return 0;
}
