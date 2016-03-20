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
    char a[6];
    char b[6];
    scanf("%s",a);
    scanf("%s",b);

    int ah=10*(a[0]-'0')+(a[1]-'0');
    int am=10*(a[3]-'0')+(a[4]-'0');
    
    int bh=10*(b[0]-'0')+b[1]-'0';
    int bm=10*(b[3]-'0')+b[4]-'0';
    
    am=am-bm;
    if(am<0)
    {
        am+=60;
        ah--;
        if(ah<0)
            ah+=24;
    }
    ah=ah-bh;
    if(ah<0)
        ah+=24;
    pi(ah/10);pi(ah%10);
    printf(":");
    pi(am/10);pin(am%10);

    return 0;
}
