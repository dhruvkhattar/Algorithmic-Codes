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
    int a[1000006]={0};
    set<ll> s;
    a[0]=a[1]=1;
    rep(i,2,1003)
    {
        if(a[i]==0)
        {
            int j=i*i;
            while(j<1000006)
            {
                a[j]=1;
                j=j+i;
            }
        }

    }
    int n;
    si(n);
    rep(i,0,n)
    {
        ll x;
        sl(x);
        long long yo = sqrt(x);
        double yo2=sqrt(x);
        if(yo2 - yo == 0 && a[yo]==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
