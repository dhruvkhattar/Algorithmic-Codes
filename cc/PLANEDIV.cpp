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

int gcd( int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int t,n;
    si (t);
    int a,b,g;
    double c;

    while(t--)
    {
        set<pair<pair<int,int>,double> > s;
        si(n);
        while(n--)
        {
            si(a);si(b);
            scanf("%lf",&c);
            
            g = gcd(a,b);
            s.insert(mp(mp(a/g,b/g),(double)c/g));
        }

        int ans = 1;
        int count = 1;
        a=b=0;
        tr(s,it)
        {
            if( (it->ff).ff == a && (it->ff).ss == b)
                count++;
            else
            {
                ans = max(ans,count);
                count = 1;
            }

            a = (it->ff).ff;
            b = (it->ff).ss;
        }
        ans = max(ans,count);

        pin(ans);
    }
    return 0;
}
