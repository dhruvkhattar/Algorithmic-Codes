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
    int n;
    si(n);
    int min1,max1;
    int min2,max2;
    int min3,max3;
    si(min1);si(max1);
    si(min2);si(max2);
    si(min3);si(max3);
    int ans=min2+min3+max1;
    if(ans==n)
    {       pi(max1);ps;pi(min2);ps;pin(min3);
    }else if(ans>n)
    {
        pi(n-min2-min3);ps;pi(min2);ps;pin(min3);
    }
    else
    {
        ans=min3+max1+max2;
        if(ans==n)
        {   pi(max1);ps;pi(max2);ps;pin(min3);
        }
        else if(ans>n)
        {
            pi(max1);ps;pi(n-min3-max1);ps;pin(min3);

        }
        else
        {
            pi(max1);ps;pi(max2);ps;pin(n-max1-max2);
            
        }
    }
    return 0;
}
