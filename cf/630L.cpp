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
    char a[10];

    scanf("%s",a);
    
    ll n,yo;
    n = (a[1]-'0') + 10*(a[3]-'0') + 100*(a[4]-'0') + 1000*(a[2]-'0') + 10000*(a[0]-'0');

    yo = n*n;

    yo = yo%100000;

    yo = yo*yo*n;

    int a5 = yo%10;
    yo /= 10;
    int a4 = yo%10;
    yo /= 10;
    int a3 = yo%10;
    yo /= 10;
    int a2 = yo%10;
    yo /= 10;
    int a1 = yo%10;
    yo /= 10;
    pi(a1);pi(a2);pi(a3);pi(a4);pin(a5);
}
