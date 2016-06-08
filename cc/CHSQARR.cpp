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

int p[1003][1003];
int sum[1003][1003];
int n,m,a,b;
int ans = 0;
vvi v(1003);

void getKMax(int j,int k)
{
    deque<int> Q;
    rep(i,1,1+k)
    {
        while((!Q.empty()) && p[i][j] >= p[Q.back()][j])
            Q.pop_back();
        Q.pb(i);
    }

    rep(i,1+k,n+1)
    {
        v[j].pb(p[Q.front()][j]);
        while((!Q.empty()) && Q.front() <= i-k)
            Q.pop_front();
        while((!Q.empty()) && p[i][j] >= p[Q.back()][j])
            Q.pop_back();
        Q.pb(i);
    }
    v[j].pb(p[Q.front()][j]);
}

void getAns(int i,int k)
{
    deque<int> Q;
    int yo = 0;
    rep(j,1,1+k)
    {
        //pi(j);ps;pi(i);ps;pi(v[1][0]);ps;pin(v[Q.back()][i]);
        while((!Q.empty()) && v[j][i] >= v[Q.back()][i])
            Q.pop_back();
        Q.pb(j);
        yo += sum[i+a][j] - sum[i][j];
    }

    rep(j,1+k,m+1)
    {
        ans = min(ans, v[Q.front()][i]*a*b - yo);
        //pi(v[Q.front()][i]);ps;pi(yo);ps;;pin(v[Q.front()][i]*a*b - yo);
        yo -= sum[i+a][j-k] - sum[i][j-k];
        yo += sum[i+a][j] - sum[i][j];
        while((!Q.empty()) && Q.front() <= j-k)
            Q.pop_front();
        while((!Q.empty()) && v[j][i] >= v[Q.back()][i])
            Q.pop_back();
        Q.pb(j);
    }
    ans = min(ans, v[Q.front()][i]*a*b - yo);
    //pi(v[Q.front()][i]);ps;pi(yo);ps;;pin(v[Q.front()][i]*a*b - yo);
}

int main()
{
    int q;
    si(n);si(m);

    rep(i,1,n+1)
        rep(j,1,m+1)
            si(p[i][j]);
 
    rep(i,1,n+1)
        rep(j,1,m+1)
            sum[i][j] = sum[i-1][j] + p[i][j];

    si(q);
    while(q--)
    {
        rep(i,0,1003)
            v[i].clear();
        ans = mod;
        si(a);si(b);
        rep(j,1,m+1)
            getKMax(j,a);

        /*rep(i,0,n+1-a)
        {
            rep(j,1,m+1)
            {
                pi(v[j][i]);ps;
            }
            pn;
        }*/
        
        rep(i,0,n+1-a)
        {
            getAns(i,b);
        }

        if( ans < 0 )
            pin(0);
        else
            pin(ans);
    }
    return 0;
}
