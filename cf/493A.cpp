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
    string a;
    string b;
    cin>>a>>b;

    int n;
    si(n);

    vector<pair<string,ii> > v;
    set<pair<char,int> > s;
    set<pair<string,int> > yo;
    rep(i,0,n)
    {
        int t;
        si(t);
        char x;
        getchar();
        scanf("%c",&x);
        int p;
        si(p);
        char c;
        getchar();
        scanf("%c",&c);

        if(c=='r' )
        {
            if(x=='h' && !present(yo,mp(a,p)))
            {
                v.pb(mp(a,mp(p,t)));
                yo.insert(mp(a,p));
            }
            else if(x=='a' && !present(yo,mp(b,p)))
            {
                v.pb(mp(b,mp(p,t)));
                yo.insert(mp(b,p));
            }
        }
        else
        {
            if(present(s,mp(x,p)))
                if(x=='h' && !present(yo,mp(a,p)))
                {
                    v.pb(mp(a,mp(p,t)));
                    yo.insert(mp(a,p));
                }
                else if(x=='a' && !present(yo,mp(b,p)))
                {
                    v.pb(mp(b,mp(p,t)));
                    yo.insert(mp(b,p));
                }
            s.insert(mp(x,p));
        }
    }

    tr(v,it)
    {
        cout<<(*it).ff<<" "<<(*it).ss.ff<<" "<<(*it).ss.ss<<endl;
    }
    return 0;
}
