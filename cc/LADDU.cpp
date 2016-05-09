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
    int t,n,x,total;
    si(t);
    char orig[20],s[100];

    while(t--)
    {
        total = 0;
        si(n);
        scanf("%s",orig);
        while(n--)
        {
            scanf("%s",s);
            if(s[0] == 'B')
            {
                si(x);
                total += x;
            }
            else if( s[0] == 'T')
                total += 300;
            else
            {
                if( s[8] == 'W')
                {
                    si(x);
                    total += 300 + max(20 - x, 0); 
                }
                else
                    total += 50;
            }
        }
        if(orig[0] == 'I')
            pin(total/200);
        else
            pin(total/400);
    }
    return 0;
}
