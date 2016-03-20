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
    int t;
    si(t);
    int seive[1000006]={0};

    map<int,int> ma;

    seive[1]=1;
    rep(i,2,1002)
    {
        if(!seive[i])
        {
            int j = i*i;
            while(j<1000006)
            {
                seive[j]=1;
                j+=i;
            }
        }
    }

    int yo = sqrt(1000000000);

    rep(i,2,yo+1)
    {
        if(!seive[i])
        {
            ll x = i;
            rep(j,1,30)
            {
                if(x>1000000000)
                    break;
                if(!seive[j+1] && j%2==0)
                    ma[(int)x]=1;
                x=(ll)x*i;
            }
        }
    }

    int n,m;
    int x;

    while( t-- )
    {
        si(m);si(n);

        int cnt=0;
        int a[200006]={0};
        vi primes;
        x = sqrt(n);

        rep(i,2,x+1)
            if(!seive[i])
                primes.pb(i);

        int size = sz(primes);

        int ans[200006]={0};

        rep(i,0,size)
        {
            x=primes[i];
            yo=m/x;
            yo=yo*x;

            int j = yo;
            while(j<=n)
            {
                if(j>=m)
                    ans[j-m]=1;

                j+=x;
            }
        }

        rep(i,0,size)
            if(primes[i]>=m)
                cnt++;

        rep(i,0,n-m+1)
        {
            if(!ans[i] && (i+m)!=1)
                cnt++;
        }

        tr(ma,it)
        {
            if(it->ff >= m && it->ff <= n)
                cnt++;
        }
        pin(cnt);
    }
    return 0;
}
