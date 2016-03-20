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
    ll d;
    ll c;
    sl(d);sl(c);

    int a[1000006],b[1000006];

    int i=0;
    while(d)
    {
        a[i] = d%2;
        d /= 2;
        i++;
    }
    
    int j=0;
    while(c)
    {
        b[j] = c%2;
        c /= 2;
        j++;
    }

    int ans = 0;
    rep(k,i+1,j)
        ans += k-1;

    if( j>i )
    {
        int l = i-1;
        while(l>=0)
        {
            if(a[l] == 0)
            {
                ans += l+1;
                break;
            }
            l--;
        }
        int cnt = 0;
        l = j-1;
        while( l >= 0 )
        {
            if( b[l]==0 )
                cnt++;
            l--;
        }
        if( cnt == 1 )
            ans++;
        l = j-1;
        if( cnt == 0 )
            ans += j-1;
        else
            while( l >= 0 )
            {
                if( b[l] == 0 )
                {
                    ans += j-l-2;
                    break;
                }
                l--;
            }
        pin(ans);
    }
    else
    {
        int cnt = 0;
        int l = j-1;
        while( l >= 0 )
        {
            if( b[l]==0 )
                cnt++;
            l--;
        }
        if( cnt == 1 )
            ans++;

        l = i-1;
        while(l>=0)
        {
            if(a[l] == 0)
                break;
            l--;
        }
        rrep(k,j,l)
        {
            if( b[k] == 0 )
            {
                pin(ans);
                return 0;
            }
        }
        rrep( k,l+1,0)
        {
            if(b[k] == 1 )
                ans++;
            else
                break;
        }
        pin(ans);
    }

    return 0;
}
