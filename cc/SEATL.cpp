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

int a[1003][1006];

int main()
{
    int t,n,m;
    int ans;
    si(t);

    while( t-- )
    {
        map<int,int> row;
        map<int,int> col;
        row.clear();
        col.clear();
        ans = 0;
        si(n);si(m);
        rep(i,0,n)
            rep(j,0,m)
                si(a[i][j]);
 
        rep(i,0,n)
        {
            int cnt[1000006]={0};
            rep(j,0,m)
            {
                cnt[a[i][j]]++;
                row[a[i][j]] = max(row[a[i][j]],cnt[a[i][j]]);
            }
        }
        
        rep(j,0,m)
        {
            int cnt[1000006]={0};
            rep(i,0,n)
            {
                cnt[a[i][j]]++;
                col[a[i][j]] = max(col[a[i][j]],cnt[a[i][j]]);
            }
        }

        tr(row,it)
            ans = max(ans,it->ss+col[it->ff]);
        
        pin(ans-1);
    }
    return 0;
}
