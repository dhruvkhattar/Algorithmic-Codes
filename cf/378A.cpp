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
    int a,b;
    si(a);si(b);

    int ans1=0;
    int ans2=0;
    int ans3=0;

    rep(1,7)
    {
        int l=abs(a-i);
        int r=abs(b-i);
        if(l<r)
            ans1++;
        else if( l>r)
            ans3++;
        else
            ans2++;
    }

    pi(ans1);
    ps;
    pi(ans2);
    ps;
    pin(ans3);
    return 0;
}
