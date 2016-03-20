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
        map<string,int> m;
        m["green"]=0;
        m["black"]=0;
        m["blue"]=0;
        m["red"]=0;
        m["yellow"]=0;
        m["orange"]=0;
        vector<pair<string,string> > v;
        string x;
        int flag=0;
        rep(i,0,3)
        {
            string a,b;

            cin>>a>>b;
            m[a]++;
            m[b]++;
            if(m[a]>=3)
            {
                flag=1;
                x=a;
            }
            if(m[b]>=3)
            {
                flag=1;
                x=b;
            }
            v.pb(mp(a,b));
        }
        if(flag==1)
        {
            int c=0;
            rep(i,0,3)
            {
                if(v[i].ff==x || v[i].ss==x)
                    c++;
            }
            if(c==3)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
