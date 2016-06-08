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
    int a[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    char s[10];
    int n = 1;
    int cnt = 0;
    rep(i,0,15)
    {
        pin(a[i]);
        fflush(stdout);
        scanf("%s",s);
        if(s[0] == 'y')
        {
            n *= a[i];
            cnt++;
        }
    }
    if(cnt == 0)
    {
        printf("prime\n");
        fflush(stdout);
        return 0;
    }
    else if (cnt >= 2)
    {
        printf("composite\n");
        fflush(stdout);
        return 0;
    }
    else
    {
        if(n <= 7)
        {
            pin(n*n);
            fflush(stdout);
            scanf("%s",s);
        }
        else
        {
            printf("prime\n");
            fflush(stdout);
            return 0;
        }
        if(s[0] == 'y')
        {
            printf("composite\n");
            fflush(stdout);
            return 0;
        }
        else
        {
            printf("prime\n");
            fflush(stdout);
            return 0;
        }
    }

    return 0;
}
