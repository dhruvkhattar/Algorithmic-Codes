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
    char a[100005];
    scanf("%s",a);

    ll ans = 1;
    int l = strlen(a);
    int yo,x;
    int cnt = 0;

    rep(i,0,l)
    {
        if(a[i] >= '0' && a[i] <= '9')
            x = a[i] - '0';
        else if(a[i] == '-')
            x = 62;
        else if(a[i] == '_')
            x = 63;
        else if(a[i] >= 'A' && a[i] <= 'Z')
            x = a[i] - 'A' + 10;
        else
            x = a[i] - 'a' + 36;
        rep(j,0,6)
        {
            yo = x%2;
            x /= 2;
            if(!yo)
            {
                cnt++;
            }
        }
    }
    rep(i,0,cnt)
        ans = (ans*3)%mod;
    pln(ans);
    return 0;
}
