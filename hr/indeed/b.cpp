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
    int t,n,flag;
    int a[100005];
    int b[100005];
    int c[100005];
    si(t);

    while( t-- )
    {
        si(n);
        rep(i,0,n)
            si(a[i]);
        rep(i,0,n)
            si(b[i]);
        c[0] = min(a[0],b[0]);
        flag = 0; 
        rep(i,1,n)
        {
            if( a[i] >= c[i-1] )
            {
                if( b[i] >= c[i-1] )
                    c[i] = min(a[i],b[i]);
                else
                    c[i] = a[i];
            }
            else
            {
                if( b[i] >= c[i-1] )
                    c[i] = b[i];
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        
        if( flag == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
