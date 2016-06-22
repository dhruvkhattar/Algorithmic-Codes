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
    ll r,c,m,k,j,l,b,rem;
    si(t);

    while(t--)
    {
        sl(r);sl(c);sl(m);sl(k);sl(j);
        b = min(r,c);
        l = max(r,c);
        if(r*c != m+k+j)
        {
            printf("No\n");
            continue;
        }
        if(m%b == 0 && k%b == 0 && j%b == 0)
            if((m/b + k/b + j/b) == l)
            {
                printf("Yes\n");
                continue;
            }
        if(m%l == 0 && k%l == 0 && j%l == 0)
            if((m/l + k/l + j/l) == b)
            {
                printf("Yes\n");
                continue;
            }
        if(m%l == 0)
        {
            if(m/l < b)
            {
                rem = b - m/l;
                if(k%rem == 0 && j%rem == 0)
                    if( k/rem + j/rem == l)
                    {
                        printf("Yes\n");
                        continue;
                    }
            }
        }
        if(k%l == 0)
        {
            if(k/l < b)
            {
                rem = b - k/l;
                if(m%rem == 0 && j%rem == 0)
                    if( m/rem + j/rem == l)
                    {
                        printf("Yes\n");
                        continue;
                    }
            }
        }
        if(j%l == 0)
        {
            if(j/l < b)
            {
                rem = b - j/l;
                if(k%rem == 0 && m%rem == 0)
                    if( k/rem + m/rem == l)
                    {
                        printf("Yes\n");
                        continue;
                    }
            }
        }
        if(m%b == 0)
        {
            if(m/b < l)
            {
                rem = l - m/b;
                if(k%rem == 0 && j%rem == 0)
                    if( k/rem + j/rem == b)
                    {
                        printf("Yes\n");
                        continue;
                    }
            }
        }
        if(k%b == 0)
        {
            if(k/b < l)
            {
                rem = l - k/b;
                if(m%rem == 0 && j%rem == 0)
                    if( m/rem + j/rem == b)
                    {
                        printf("Yes\n");
                        continue;
                    }
            }
        }
        if(j%b == 0)
        {
            if(j/b < l)
            {
                rem = l - j/b;
                if(k%rem == 0 && m%rem == 0)
                    if( k/rem + m/rem == b)
                    {
                        printf("Yes\n");
                        continue;
                    }
            }
        }
        printf("No\n");
    }
    return 0;
}
