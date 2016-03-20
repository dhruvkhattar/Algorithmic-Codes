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
    int n,x;
    si(n);

    vi v;

    rep(i,0,n)
    {
        si(x);
        v.pb(x);
    }

    vi yo;

    int ans[100005]={0};

    if(n==1)
        pin(1);
    else if(n==2)
    {
        if( v[0]==v[1])
            pin(2);
        else
            pin(3);
    }
    else
    {
        if( v[1] >= v[0])
            yo.pb(0);
        
        rep(i,1,n-1)
        {
            if( v[i]<=v[i-1] && v[i]<=v[i+1])
                yo.pb(i);
        }
        
        if( v[n-1] <= v[n-2])
            yo.pb(n-1);

        int size = sz(yo);

        rep(i,0,size)
        {
            int j = yo[i];
            ans[j]=1;
            j++;
            while( j < n )
            {
                if( v[j] > v[j-1])
                    ans[j] = max(ans[j],ans[j-1] + 1);
                else
                    break;
                j++;
            }
            
            j = yo[i]-1;

            while( j >= 0 )
            {
                if( v[j] > v[j+1])
                    ans[j] = max(ans[j],ans[j+1] + 1);
                else
                    break;
                j--;
            }
        }

        int finalans = 0;

        rep(i,0,n)
            finalans+=ans[i];
        
        pin(finalans);
    }


    return 0;
}
