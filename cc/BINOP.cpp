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

char a[1000006];
char b[1000006];

int main()
{
    int t,len,z,o,sum;
    si(t);
    while(t--)
    {
        scanf("%s",a);
        scanf("%s",b);
        z = o = 0;
        sum = 0;
        len = strlen(a);
        rep(i,0,len)
        {
            sum += a[i]-'0';
            if(a[i] == '0' && b[i] == '1')
                z++;
            else if(a[i] == '1' && b[i] == '0')
                o++;
        }
        if(sum == 0 || sum == len)
            printf("Unlucky Chef\n");
        else
        {
            printf("Lucky Chef\n");
            pin(min(z,o) + max(z,o)-min(z,o));
        }
    }
    return 0;
}
