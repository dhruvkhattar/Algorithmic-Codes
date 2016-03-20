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
    ll n,t;
    sl(n);sl(t);
    int a[100005];
    int x[100005];
    int p[100005];
    int b[100005];
    rep(i,1,n+1)
    {
        si(a[i]);
        x[i]=a[i];
    }
    rep(i,1,n+1)
        si(p[i]);

    int turn,yo;
    yo=0;
    rep(j,0,t)
    {
        rep(i,1,n+1)
            b[i]=a[i];

        rep(i,1,n+1)
            a[i]=b[p[i]];

        int flag=0;
        rep(i,1,n+1)
        {
            if(a[i]!=x[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            yo=j+1;
            break;
        }
    }

    if(yo!=0)
    {
        turn=t%yo;
        rep(j,0,turn)
        {
            rep(i,1,n+1)
                b[i]=x[i];

            rep(i,1,n+1)
                x[i]=b[p[i]];
        }

        rep(i,1,n+1)
        {
            pi(x[i]);ps;
        }
        pn;
    }
    else
    {
        rep(i,1,n+1)
        {
            pi(a[i]);ps;
        }
        pn;
    }
    return 0;
}
