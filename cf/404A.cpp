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

int main()
{
    int n;
    si(n);
    char a[303][303];
    rep(i,0,n)
        scanf("%s",a[i]);

    char d=a[0][0];
    char o=a[0][1];
    if(o==d)
    {
        printf("NO\n");
        return 0;
    }
    rep(i,0,n)
        rep(j,0,n)
        {
            if(i==j || j==n-i-1)
            {
                if(a[i][j]!=d)
                {
                    printf("NO\n");
                    return 0;
                }
            }
            else 
            if(a[i][j]!=o)
            {
                printf("NO\n");
                return 0;
            }
        }
    printf("YES\n");
    return 0;
}
