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
    char a[55];

    scanf("%s",a);

    int sum1=0;
    int sum2=0;
    rep(i,0,n/2)
    {
        if(a[i]!='4' && a[i]!='7')
        {
            printf("NO\n");
            return 0;
        }
        sum1+=a[i]-'0';
    }
    rep(i,n/2,n)
    {
        if(a[i]!='4' && a[i]!='7')
        {
            printf("NO\n");
            return 0;
        }
        sum2+=a[i]-'0';
    }
    if(sum1==sum2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
