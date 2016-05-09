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
    int x;

    pin(1);
    pi(2);ps;pi(1);ps;pin(2);
    pi(2);ps;pi(3);ps;pin(4);
    fflush(stdout);
    si(x);
    if(x == 0)
    {
        pin(2);pin(5);
        return 0;
    }
    if(x==1)
    {
        pin(1);
        pi(1);ps;pin(1);
        pi(1);ps;pin(2);
        fflush(stdout);
        si(x);
        pin(2);
        if(x == 1)
            pin(1);
        else
            pin(2);
        return 0;
    }
    if(x == -1)
    {
        pin(1);
        pi(1);ps;pin(3);
        pi(1);ps;pin(4);
        fflush(stdout);
        si(x);
        pin(2);
        if(x == 1)
            pin(3);
        else
            pin(4);
        return 0;
    }
    return 0;
}
