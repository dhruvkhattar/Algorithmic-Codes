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
    int t,n;
    si(t);

    int a[100005];

    while( t-- )
    {
        si(n);

        int ans1,ans2;
        ans1=ans2=0;

        int sum = 0;

        rep(i,0,n)
        {
            si(a[i]);
            if(a[i]>=0)
                ans2+=a[i];

            sum += a[i];
            if(sum<0)
                sum=0;
            ans1 = max(sum,ans1);

        }

        sort(a,a+n);
        if(a[n-1]<0)
            {pi(a[n-1]);ps;pin(a[n-1]);}
        else
            {pi(ans1);ps;pin(ans2);}
    }
    return 0;
}
