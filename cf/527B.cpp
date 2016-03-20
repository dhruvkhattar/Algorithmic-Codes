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
    int n;
    si(n);

    char a[200005],b[200005];

    scanf("%s%s",a,b);

    int na[26]={0};
    int nb[26]={0};

    map<char,vi> ma;
    map<char,vi> mb;
    
    int ans = 0;

    set<pair<pair<char,char>,int> > se;

    rep(i,0,n)
    {
        if(a[i]!=b[i])
        {
            se.insert(mp(mp(a[i],b[i]),i));

            ma[a[i]].pb(i);
            mb[b[i]].pb(i);

            na[a[i]-'a']++;
            nb[b[i]-'a']++;
            ans++;
        }
    }

    int idx;
    char f,s;

    set<pair<pair<char,char>,int> >::iterator itr;
    tr(se,it)
    {
        f = (it->ff).ff;        
        s = (it->ff).ss;
        idx = it->ss;

        itr = se.lower_bound(mp(mp(s,f),-1));

        if(itr != se.end())
        {
            if( (((itr->first).first) == s) && (((itr->first).second) == f))
            {
                pin(ans-2);
                pi(idx + 1);ps;pin(itr->second + 1);
                return 0;
            }
        }
    }

    rep(i,0,26)
    {
        if( na[i]!=0 && nb[i]!=0 )
        {
            pin(ans-1);
            pi(ma[i+'a'][0]+1);ps;pin(mb[i+'a'][0]+1);
            return 0;

        }
    }

    pin(ans);
    pi(-1);ps;pin(-1);
    return 0;
}
