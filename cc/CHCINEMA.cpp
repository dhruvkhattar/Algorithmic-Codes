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
    ll t,n,m,l,r,b,z,com,mi,yo,ans,rz,rb,rows,rows2,rows3,rows4,tot,left;
    sl(t);

    while( t-- )
    {    
        sl(n);sl(m);sl(z);sl(l);sl(r);sl(b);
        com = l+r;
        ans = 0;
        tot = m*n;
        if( m==1 ) 
            pln(min(n,z+com+b));
        else if( z+com >= m*n )
            pln(m*n);
        else if( b == 0 )
            pln(min( n*m , z+com ));
        else if( m==2 )
        {
            if( b <= n )
                pln(min(tot,b+com+z));
            else
                pln( n + min(z+com,n));
        }
        else
        {
            if( m%2 == 0)
            {
                if(com <= n)
                {
                    ans += com;
                    if( z <= n - com)
                    {
                        ans += z;
                        z = 0;
                    }
                    else
                    {
                        ans += n - com;
                        z -= n - com;
                    }
                    com = 0;
                    m--;
                }
                else
                {
                    com -= n;
                    ans += n;
                    m--;
                }
            }
                rz = z/(m/2);
                rb = b/(m/2 + 1);
                rows = min(rb,rz);
                if( rows >= n )
                    pln(tot);
                else
                {
                    b -= rows*(m/2 + 1);
                    z -= rows*(m/2);
                    ans += rows*m;
                    rows2 = n - rows;
                    rows3 = com/(m-1);
                    if( rows3 >= rows2 )
                    {
                        ans += rows2*(m-1);
                        com -= rows2*(m-1);
                        pln( ans + min(rows2,z+com+b));
                    }
                    else
                    {
                        rows4 = rows2 - rows3;
                        ans += rows3*(m-1);
                        com -= rows3*(m-1);
                        if( b <= rows3 )
                        {
                            left = tot - ans;
                            pln(ans + min(left,z+com+b));
                        }
                        else
                        {
                            ans += rows3;
                            b -= rows3;
                            if( com == 0 )
                            {
                                mi = min(b,rows4*(m/2 + 1));
                                ans += mi;
                                left = tot - ans;
                                pln(ans + min(z,left));
                            }
                            else
                            {
                                ans += com;
                                yo = m - com;
                                com = 0;
                                mi = min(b,(rows4-1)*(m/2 + 1) + yo/2 + yo%2 );
                                ans += mi;
                                left = tot - ans;
                                pln( ans + min(left,z));
                            }
                        }
                    }
                }
        }
    }
    return 0;
}
