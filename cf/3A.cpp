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
#define present(a,x) (find(all(a),x) != (a).end())
#define cpresent(c,x) ((c).find(x) != (c).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vll;
typedef pair<int,int> ii;
typedef vector<ii> vii;

vector<string> v;

void solve(int x,int y,int xd,int yd)
{
    if(x==xd && y==yd)
        return;
    else if( x==xd)
    {
        if(yd>y)
        {
            v.pb("U");
            solve(x,y+1,xd,yd);
        }
        else
        {
            v.pb("D");
            solve(x,y-1,xd,yd);
        }
    }
    else if( y==yd)
    {
        if(xd>x)
        {
            v.pb("R");
            solve(x+1,y,xd,yd);
        }
        else
        {
            v.pb("L");
             solve(x-1,y,xd,yd);
        }
    }
    else if(x<xd)
    {
        if(y<yd)
        {
            v.pb("RU");
            solve(x+1,y+1,xd,yd);
        }
        else
        {
            v.pb("RD");
            solve(x+1,y-1,xd,yd);
        }
    }
    else
    {
        if(y<yd)
        {
            v.pb("LU");
            solve(x-1,y+1,xd,yd);
        }
        else
        {
            v.pb("LD");
            solve(x-1,y-1,xd,yd);
        }
    }
}

int main()
{
    char a[5] ;
    int x,y,xd,yd;
    scanf("%s",a);
    x=a[0]-'a'+1;
    y=a[1]-'0';
    scanf("%s",a);
    xd=a[0]-'a'+1;
    yd=a[1]-'0';

    solve(x,y,xd,yd);

    pin(sz(v));

    tr(v,it)
    {
        cout<<*it<<endl;
    }
    return 0;
}
