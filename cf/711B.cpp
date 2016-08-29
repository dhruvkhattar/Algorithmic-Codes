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
    int n,x,y;
    si(n);
    ll a[502][502];
    ll row[502] = {0};
    ll col[502] = {0};
    rep(i,0,n)
        rep(j,0,n)
        {
            sl(a[i][j]);
            if (a[i][j] == 0)
            {
                x = i;
                y = j;
            }
            row[i] += a[i][j];
            col[j] += a[i][j];
        }

    if (n==1)
    {
        pin(1);
        return 0;
    }

    ll srow = row[0];
    ll scol = col[0];
    if (x == 0)
        srow = row[1];
    if (y == 0)
        scol = col[1];

    int dr = 0, dc = 0;
    int ridx, cidx;
    rep(i,0,n)
    {
        if (row[i] != srow)
        {
            dr++;
            ridx = i;
        }
        if (col[i] != scol)
        {
            dc++;
            cidx = i;
        }
    }
    if (dr == 1 && dc == 1)
    {
        ll ans = srow - row[ridx];
        if (ans <= 0 || ans != scol - col[cidx])
            pin(-1);
        else
        {
            ll s = 0;
            rep(i,0,n)
            {
                s += a[i][i];
            }
            if (x == y)
            {
                if (s + ans == srow)
                    ;
                else
                {
                    pin(-1);
                    return 0;
                }
            }
            else
            {
                if (s == srow)
                    ;
                else
                {
                    pin(-1);
                    return 0;
                }
            }
            s = 0;
            rep(i,0,n)
            {
                s += a[i][n-1-i];
            }
            if (x == n - 1 - y)
            {
                if (s + ans == srow)
                    pln(ans);
                else
                    pin(-1);
            }
            else
            {
                if (s == srow)
                    pln(ans);
                else
                    pin(-1);
            }
        }

    }
    else
        pin(-1);
    
    return 0;
}
