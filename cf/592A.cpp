//////////////////////////////////////
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
    char n[9][9];

    rep(i,0,8)
        scanf("%s",n[i]);
    
    int a = 8;
    int b = 8;

    rep(i,0,8)
    {
        rep(j,0,8)
        {
            if(n[j][i]=='B')
                break;
            else if(n[j][i]=='W')
            {
                a=min(j,a);
                break;
            }
        }
    }
    
    rep(i,0,8)
    {
        rrep(j,8,0)
        {
            if(n[j][i]=='W')
                break;
            else if(n[j][i]=='B')
            {
                b=min(7-j,b);
                break;
            }
        }
    }

    if(a<=b)
        printf("A\n");
    else
        printf("B\n");

    return 0;
}
