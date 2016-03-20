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
    int t,n;
    si(t);

    int i,j,k,m,a[1000001];
    for(i=2;i<=1000001;i++)
        a[i]=0;
    a[1]=1;
    for(i=2;i<=1000;i++)
    {   j=2; 
        k=i; 
        m=0;             
        if(a[i]==0)
        {    
            while(m<=1000000)
            {    
                m=j*k;
                if(a[m]==0)
                    a[m]=1;
                j++; 
            }    
        }    
    }

    int prime[1000001]={0};
    rep(i,2,1000001)
    {
        prime[i] = prime[i-1] + 1 - a[i];
    }

    while(t--)
    {
        si(n);

        int dp[100]={0};

        dp[0]=1;
        dp[1]=1;
        dp[2]=1;
        dp[3]=1;
        dp[4]=2;

        rep(i,5,n+1)
            dp[i] = dp[i-1] + dp[i-4];

//        pin(dp[n]);
        pin(prime[dp[n]]);
    }
    return 0;
}
