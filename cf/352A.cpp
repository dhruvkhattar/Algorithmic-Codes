///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define rep(j,N) for( int i=j ; i<N ; i++ )
#define rrep(N,j) for( int i=N-1 ; i>=j ; i-- )
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
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define all(a) (a).begin(),(a).end()
#define present(a,x) (find(all(a),x) != (a).end()) 

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector <ll> vll;
typedef pair<int,int> ii;
typedef vector<ii> vii;

int main()
{
    int n;
    si(n);
    int c0=0;
    int c5=0;

    int yo=0;
    rep(0,n)
    {
        int x;
        si(x);
        if(x==5)
            c5++;
        else
            c0++;
        if( c5==9 )
        {
            yo++;
            c5=0;
        }
    }
    if(c0==0)
        pin(-1);
    else
        if(yo==0)
            pin(0);
        else
        {
            rep(0,yo)
                printf("555555555");
            rep(0,c0)
                printf("0");
            pn;
        }
    return 0;
}