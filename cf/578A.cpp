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
    int a,b;

    si(a);si(b);

    int x1 = a+b;
    int x2 = a-b;

    if(x2 < 0 || b>a)
        pin(-1);
    else if(x2==0)
        pin(a);
    else
    {
        int y1 = x1/b;
        int y2 = x2/b;

        if(y1%2!=0)
            y1--;
        if(y2%2!=0)
            y2--;

        double ans=1000000009;
        if( (double)x1/y1 >= b)
            ans = (double)x1/(y1);
        y1++;
        y1++;
        if( (double)x1/(y1) >= b)
            ans = min(ans, (double)x1/(y1) );
        
        if( (double)x2/(y2) >= b)
            ans = min(ans, (double)x2/(y2) );
        y2++;
        y2++;
        if( (double)x2/(y2) >= b)
            ans = min(ans, (double)x2/(y2) );
        
        printf("%0.10lf\n",ans);

    }
    return 0;
}
