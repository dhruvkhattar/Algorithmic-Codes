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
    int t,k,len,sum1,sum2,ans;
    si(t);
    while(t--)
    {
        char a[100005];
        int no[26] = {0};
        ans = mod;
        scanf("%s",a);
        si(k);
        map<int,int> m;
        vii v;
        len = strlen(a);
        rep(i,0,len)
        {
            no[a[i]-'a']++;
        }
        rep(i,0,26)
        {
            if(no[i])
            {
                m[no[i]]++;
            }
        }
        sum1 = sum2 = 0;
        tr(m,it)
        {
            v.pb(mp(it->ff,it->ss));
        }
        sort(all(v));
        len = sz(v);
        rep(i,0,len)
        {
            sum1 = 0;
            rrep(j,len,i+1)
            {
                if(v[j].ff - v[i].ff > k)
                    sum1 += (v[j].ff - v[i].ff - k)*v[j].ss;
                else
                    break;
            }
            //pi(sum1);ps;pi(sum2);pn;
            ans = min(ans,sum1+sum2);
            sum2 += v[i].ff * v[i].ss;
        }
        pin(ans);

    }
    return 0;
}
