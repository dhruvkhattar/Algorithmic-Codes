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
    vi l;
    vi d;
    vii p;
    vii pr;
    set<int> num;
    int x;
    int en[100005]={0};
    int count[100005]={0};
    int sum=0;
    rep(i,0,n)
    {
        si(x);
        num.insert(x);
        count[x]++;
        l.pb(x);
    }
    rep(i,0,n)
    {
        si(x);
        d.pb(x);
        en[l[i]]+=x;
        sum+=x;

    }
    rep(i,0,n)
    {
        p.pb(mp(l[i],d[i]));
        pr.pb(mp(d[i],l[i]));
    }

    sort(all(p));
    sort(all(pr));

    int ans=sum-pr[n-1].ff;
    tr(num,it)
    {
        int tmp=0;
        if(count[*it]>1)
        {
            int yo=count[*it]-1;
            tmp+=en[*it];

            rrep(j,n,0)
            {
                if(yo<1)
                    break;
                if(pr[j].ss<*it)
                {
                    tmp+=pr[j].ff;
                    yo--;
                }
            }
            ans=min(ans,sum-tmp);
        }
    }
    pin(ans);

    return 0;
}
