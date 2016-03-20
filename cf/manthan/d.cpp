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
    int n;
    si(n);
    int a[1003];
    map<pair<ll,ll>,ll> vis;
    map<int,int> m;
    rep(i,0,n)
    {
        si(a[i]);
        m[a[i]]++;
    }

    int f,s;
    int ans = 2;
    int temp,yo;

    map<int,int> t;
    
    rep(i,0,n)
        rep(j,0,n)
        {
            if( i == j )
                continue;
            f = a[i];
            s = a[j];
            if( vis[mp(f,s)] )
                continue;
            t.clear();
            vis[mp(f,s)] = 1;
            temp = 2;
            t[f]++;
            t[s]++;
            if(f==0 && s==0)
            {
                ans = max(ans,m[0]);
                continue;
            }
            while(1)
            {
                yo = m[f+s];
                if( yo && t[f+s] < yo)
                {   
                    t[f+s]++;
                    temp++;
                    yo = s;
                    s += f;
                    f = yo;
                }
                else
                    break;
            }
            ans = max(ans,temp);
        }

    pin(ans);
    return 0;
}
