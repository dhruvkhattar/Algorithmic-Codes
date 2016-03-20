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
    int h,w;
    si(h);si(w);

    char a[505][505];

    rep(i,0,h)
        scanf("%s",a[i]);
    
    int row[505][505]={0};
    int col[505][505]={0};

    char prev;
    rep(i,0,h)
    {
        prev = a[i][0];
        rep(j,1,w)
        {
            if( a[i][j] == prev && prev == '.' )
                row[i+1][j+1] = row[i+1][j]+1;
            else
                row[i+1][j+1] = row[i+1][j];
            prev = a[i][j];
        }
    }
    
    rep(i,0,w)
    {
        prev = a[0][i];
        rep(j,1,h)
        {
            if( a[j][i] == prev && prev == '.' )
                col[j+1][i+1] = col[j][i+1] + 1;
            else
                col[j+1][i+1] = col[j][i+1];
            prev = a[j][i];
        }
    }

    int q;
    si(q);

    int c1,r1,c2,r2;
    ll ans;
    while( q-- )
    {
        si(r1);si(c1);si(r2);si(c2);
        ans = 0;
        rep(i,c1,c2+1)
            ans += col[r2][i] - col[r1][i];
        rep(i,r1,r2+1)
            ans += row[i][c2] - row[i][c1];
        pln(ans);
    }

    return 0;
}
