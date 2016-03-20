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

int a[100005];
int tree[400005];
int lazy[400005];

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

void update_tree(int node,int l,int r,int i,int j,int val)
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

    tree[node] = tree[node*2] + tree[node*2+1];
}

int query_tree(int node,int l,int r,int i,int j)
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

    int q1 = query_tree(node*2,l,(l+r)/2,i,j);
    int q2 = query_tree(node*2+1,1+(l+r)/2,r,i,j);

    int res = q1 + q2;

    return res;
}

int main()
{
    int m,n,q,A,p,x,y,temp,temp2;
    int b[100005]={0};
    int assign[100005]={0};
    si(m);si(n);si(q);

    rep(i,0,n)
    {
        si(p);
        b[p]++;
        assign[i]=p;
    }

    rep(i,0,m)
        a[ b[i] ]++;

    build_tree(1,0,n-1);

    rep(i,0,q)
    {
        si(A);
        if( A == 1)
        {
            si(x);si(y);
            temp = b[y];
            b[y]++;
            temp2 = b[ assign[x] ];
            b[assign[x]]--;
            assign[x] = y;
            update_tree(1, 0, n-1, temp, temp, -1); 
            update_tree(1, 0, n-1, temp+1, temp+1, 1); 
            update_tree(1, 0, n-1, temp2, temp2, -1); 
            update_tree(1, 0, n-1, temp2-1, temp2-1, 1); 
        }
        else
        {
            si(p);
            printf("%d\n",query_tree(1,0,n-1,0,p-1));
        }
    }

    return 0;
}
