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
    int x,y,x0,y0,ans,size;
    si(x);si(y);si(x0);si(y0);

    char s[100005];

    scanf("%s",s);

    int a[502][502]={0};
    a[x0][y0] = 1;
    
    size = strlen(s);

    pi(1);ps;

    rep(i,0,size)
    {
        if( s[i] == 'U' )
        {
            if( x0 != 1 )
                x0--;
            if(a[x0][y0])
                ans = 0;
            else
            {
                a[x0][y0]=1;
                ans = 1;
            }
        }
        else if( s[i] == 'D' )
        {
            if( x0 != x )
                x0++;
            if(a[x0][y0])
                ans = 0;
            else
            {
                a[x0][y0]=1;
                ans = 1;
            }
        }
        else if( s[i] == 'R' )
        {
            if( y0 != y )
                y0++;
            if(a[x0][y0])
                ans = 0;
            else
            {
                a[x0][y0]=1;
                ans = 1;
            }
        }
        else if( s[i] == 'L' )
        {
            if( y0 != 1 )
                y0--;
            if(a[x0][y0])
                ans = 0;
            else
            {
                a[x0][y0]=1;
                ans = 1;
            }
        }

        if(i == size-1)
        {
            rep(j,1,1+x)
                rep(k,1,1+y)
                    if(!a[j][k])
                        ans++;
        }
        pi(ans);ps;
    }
    pn;

    return 0;
}
