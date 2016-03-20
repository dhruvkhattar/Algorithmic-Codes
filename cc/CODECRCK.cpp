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

double power(double x,int y)
{
    double temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);       
    if (y%2 == 0)
        return temp*temp;
    else
    {
        if(y > 0)
            return x*temp*temp;
        else
            return (temp*temp)/x;
    }
}  

int main()
{
    long long i,k,s;
    double ai,bi;
    sl(i);sl(k);sl(s);
    scanf("%lf%lf",&ai,&bi);

    double x = sqrt(2);
    double y = sqrt(3);

    double sume = ai+bi;
    double sumo = x*(ai+y*bi);
    double q;
    if(i==k)
    {
        q = ai + bi;
        q = q/power(2,s); 
        printf("%lf\n",q);
    }
    else if( i < k)
    {
        long long r = k-i ;
        if( r%2 == 0)
        {
            q = power(2,2*r-s)*sume;
            printf("%lf\n",q);
        }
        else
        {
            q = power(2,2*r-1-s)*sumo;
            printf("%lf\n",q);
        }
    }
    else
    {
        int r = i-k ;
        if( r%2 == 0)
        {
            q = power(2,-2*r-s)*sume;
            printf("%lf\n",q);
        }
        else
        {
            q = power(2,-2*r-1-s)*sumo;
            printf("%lf\n",q);
        }        
    }

    return 0;
}

