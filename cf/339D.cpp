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
int tree[1000006];

void build_tree(int node,int l, int r,int flag)
{
    if(l>r)
        return;

    if(l==r)
    {
        tree[node]=a[l];
        return;
    }

    build_tree(2*node,l,(l+r)/2,1-flag);
    build_tree(2*node+1,1+(l+r)/2,r,1-flag);

    if(flag==1)
        tree[node]=tree[2*node]|tree[2*node+1];
    else
        tree[node]=tree[2*node]^tree[2*node+1];
}

void update_tree(int node,int l,int r,int index,int val,int flag)
{
    if(index<l || index>r)
        return;

    if(l==r)
    {
        tree[node] = val;
        return;
    }

    int mid = (l+r)/2;

    if( index <= mid)
        update_tree(2*node,l,mid,index,val,1-flag);
    else    
        update_tree(2*node+1,mid+1,r,index,val,1-flag);
    
    if(flag==1)
        tree[node]=tree[2*node]|tree[2*node+1];
    else
        tree[node]=tree[2*node]^tree[2*node+1];
}

int main()
{
    int n,m;
    si(n);si(m);

    rep(i,0,1<<n)
        si(a[i]);

    build_tree(1,0,(1<<n)-1,n&1);

    int p,b;
    rep(i,0,m)
    {
        si(p);si(b);
        update_tree(1,0,(1<<n)-1,p-1,b,n&1);
        pin(tree[1]);
    }
    return 0;
}
