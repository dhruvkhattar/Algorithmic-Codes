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

int power( int x )
{
    int no = 1;
    rep(i,0,x)
    {
        no = (long long)((long long)no*2)%mod;
    }
    return no;
}

int main()
{
    int t;
    si(t);
    int n,m,yo,lol,p,no;
    char s[11];
    int dp1[1030] = {0};
    int dp2[1030] = {0};

    while( t-- )
    {
        yo = 0;
        m = 1;
        map<int,int> a;
        memset(dp1,0,sizeof(int)*1030);
        memset(dp2,0,sizeof(int)*1030);
        dp2[0] = 1;
        
        scanf("%s",s);
        
        rep(i,0,10)
        {
            if( s[9-i] == 'w')
                yo += m;
            m*=2;
        }
        
        si(n);
        
        rep(i,0,n)
        {
            scanf("%s",s);
            m = 1;
            lol = 0;
            rep(j,0,10)
            {
                if( s[9-j] == '+')
                    lol += m;
                m*=2;
            }
            a[lol]++;
        }
        
        tr(a,it)
        {   
            p = power((it->ss) -1);
            no = it->ff;
            rep(j,0,1024)
                dp1[j] = ((long long)p*((dp2[j] + dp2[j^no] )%mod))%mod;
            
            rep(j,0,1024)
                dp2[j] = dp1[j];
        }
        pin(dp2[yo]);
    }
    return 0;
}

