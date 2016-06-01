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
#define pf(i) printf("%lf",i)
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
    int n,t;
    si(n);si(t);
    int col; 
    double a[12][25] = {0.0f};
    rep(i,0,t)
    {
        a[0][11] += 1;
        
        rep(i,1,n)
        {
            if(i%2)
            {
                rep(j,0,i+1)
                {
                    col = 10 + 2*(j-i/2);
                    if(a[i-1][col+1] > 1)
                        a[i][col] += (a[i-1][col+1] - 1)/2;
                    if(a[i-1][col-1] > 1)
                        a[i][col] += (a[i-1][col-1] - 1)/2;
                }
            }
            else
            {
                rep(j,0,i+1)
                {
                    col = 11 + 2*(j-i/2);
                    if(a[i-1][col+1] > 1)
                        a[i][col] += (a[i-1][col+1] - 1)/2;
                    if(a[i-1][col-1] > 1)
                        a[i][col] += (a[i-1][col-1] - 1)/2;
                }
            }

        }

        rep(i,0,n+1)
        {
            rep(j,0,22)
            {
                if(a[i][j] > 1)
                    a[i][j] = 1;
            }
        }
    }

    int ans = 0;
    rep(i,0,n+1)
    {
        rep(j,0,22)
        {
            if(a[i][j] >= 1)
            {
                ans++;
            }
        }
    }

    pin(ans);
    return 0;
}
