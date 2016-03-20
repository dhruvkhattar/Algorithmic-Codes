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
    int m,n;

    si(m);si(n);

    int a[102][102]={0};
    int b[102][102];

    rep(i,0,102)
        rep(j,0,102)
        b[i][j]=-1;

    rep(i,0,m)
    {
        rep(j,0,n)
        {
            si(a[i][j]);
            if( a[i][j] == 0 )
            {
                rep(k,0,n)
                    b[i][k]=0;
                rep(k,0,m)
                    b[k][j]=0;
            }
        }
    }

    rep(i,0,m)
    {
        rep(j,0,n)
        {
            if(a[i][j])
            {
                int flag=0;
                rep(k,0,n)
                    if(b[i][k]==-1 || b[i][k]==1)
                    {
                        b[i][k]=1;
                        flag=1;
                    }
                rep(k,0,m)
                    if(b[k][j]==-1 || b[k][j]==1)
                    {
                        b[k][j]=1;
                        flag=1;
                    }
                if(flag==0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }

    printf("YES\n");

    rep(i,0,m)
    {
        rep(j,0,n)
        {
            pi(b[i][j]);ps;
        }
        pn;
    }
    return 0;
}
