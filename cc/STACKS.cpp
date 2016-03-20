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
    int t;
    si(t);
    multiset<int> s;

    while(t--)
    {
        s.clear();
        int n;
        si(n);
        int x;
        rep(i,0,n)
        {
            si(x);
            int flag=0;
         /*   tr(s,it)
            {
                if( *it > x)
                {
                    flag=1;
                    s.erase(it);
                    break;
                }
            }*/

            multiset<int>::iterator it = s.upper_bound(x);
            if(it!=s.end())
                s.erase(it);
            s.insert(x);
        }
        pi(sz(s));ps;
        tr(s,it)
        {
            pi(*it);
            ps;
        }
        pn;
    }


    return 0;
}
