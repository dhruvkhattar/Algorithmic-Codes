///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( int i=j ; i<N ; i++ )
#define rrep(i,N,j) for( int i=N-1 ; i>=j ; i-- )
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sd(i) scanf("%lf",&i)
#define pi(i) printf("%d",i)
#define pl(i) printf("%lld",i)
#define pin(i) printf("%d\n",i)
#define pln(i) printf("%lld\n",i)
#define pdn(i) printf("%.18lf\n",i)
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
    double a,b,c;
    sd(a);sd(b);sd(c);

    double yo = 4.0f;
    double y2 = 2.0f;
    if(a > 0)
    {
        pdn((-b+sqrt(b*b - yo*a*c))/(y2*a));
        pdn((-b-sqrt(b*b - yo*a*c))/(y2*a));
    }
    else
    {
        pdn((-b-sqrt(b*b - yo*a*c))/(y2*a));
        pdn((-b+sqrt(b*b - yo*a*c))/(y2*a));
    }
    return 0;
}
