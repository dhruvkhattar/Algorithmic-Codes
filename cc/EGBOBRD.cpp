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
    int t;
    si(t);

    while(t--)
    {
        ll n,k;
        sl(n);sl(k);

        ll ans=0;

        ll count=k;
        while(n--)
        {
            ll x;
            sl(x);
            if(count>x)
            {
                count-=x+1;
                if(count==0)
                {
                    count=k;
                    ans++;
                }
            }
            else if(count==x)
            {
                count=k;
                ans++;
            }
            else
            {
                ans++;
                x-=count;
                count=k;
                if(count<x)
                {
                    ans+=x/count;
                    ll lol=x%count;
                    if(lol>0)
                    {
                        count-=lol+1;
                        if(count==0)
                        {
                            count=k;
                            ans++;
                        }
                    }
                }
                else if(count==x)
                    ans++;
                else
                {   
                    count-=x+1;
                    if(count==0)
                    {
                        count=k;
                        ans++;
                    }
                }
            }
        }
        if(count!=k)
            ans++;
        pln(ans);
    }
    return 0;
}
