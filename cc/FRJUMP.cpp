///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define t 1000000000
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

ll powmod(ll a, ll b)
{
    ll r;
    ll ret = 1; 

    while(b)
    {    
        r = b%2; 
        b = b/2; 
        if(r)
            ret = (ret*a)%mod;
        a = (a*a)%mod;
    }    
    return ret; 
}

int main()
{
    int n,q,p,f,r,c,intans,fd;
    ll a[100005];
    ll ans2,yo;
    long double ans1,diff,add,minus;
    pair<long double,ll> pre[1000];
    si(n);
    int s = sqrt(n);
    rep(i,1,n+1)
        sl(a[i]);
    si(q);
    if(n<=10)
    {
        while(q--)
        {
            si(c);
            if(c == 1)
            {
                si(p);si(f);
                a[p] = f;
            }
            else
            {
                si(r);
                int i = 1;
                ans2 = 1;
                while(i<=n)
                {
                    ans2 *= a[i];
                    i += r;
                }
                yo = ans2;
                while(yo>9)
                {
                    yo /= 10;
                }
                pl(yo);ps;pln(ans2%mod);
            }
        }
        return 0;
    }
    rep(i,1,s+1)
    {
        ans2 = 1;
        ans1 = 0;
        int j = 1;
        while(j <= n)
        {
            ans2 = ans2*a[j];
            if(ans2 > mod)
                ans2 %= mod;
            ans1 += log10(a[j]);
            j += i;
        }
        pre[i] = mp(ans1, ans2);
    }

    while(q--)
    {
        si(c);
        if(c == 1)
        {
            si(p);si(f);
            yo = powmod(a[p],mod-2);
            add = log10(f);
            minus = log10(a[p]);
            rep(i,1,s+1)
            {
                if((p-1)%i == 0)
                {
                    pre[i].ff -= minus;
                    pre[i].ff += add;
                    pre[i].ss = (((pre[i].ss*yo)%mod)*f)%mod;
                }
            }
            a[p] = f;
        }
        else
        {
            si(r);
            if(r <= s)
            {
                ans2 = pre[r].ss;
                ans1 = pre[r].ff;
                intans = (int)ans1;
                diff = ans1 - (long double)intans;
                rep(i,2,11)
                {
                    if(log10(i) > diff)
                    {
                        fd= i-1;
                        break;
                    }
                }
                pi(fd);ps;pln(ans2);
            }
            else
            {
                int i = 1;
                ans2 = 1;
                ans1 = 0;
                while(i <= n)
                {
                    ans2 = ans2*a[i];
                    if(ans2 > mod)
                        ans2 %= mod;
                    ans1 += log10(a[i]);
                    i += r;
                }
                intans = (int)ans1;
                diff = ans1 - (long double)intans;
                rep(i,2,11)
                {
                    if(log10(i) > diff)
                    {
                        fd= i-1;
                        break;
                    }
                }
                pi(fd);ps;pln(ans2);
            }
        }
    }
    return 0;
}
