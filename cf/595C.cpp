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

    int x;

    set<int> s;
    
    set<int>::iterator it1;
    set<int>::iterator it2;
    set<int>::iterator it3;

    set<pair<int,int> >::iterator i1;
    set<pair<int,int> >::iterator i2;

    int yo;

    set <pair<int,int> > m;
    rep(i,0,n)
    {
        si(x);
        s.insert(x);
    }

    it1 = s.begin();
    it2 = s.begin();
    it3 = s.begin();
    it2++;
    it3++;
    it3++;

    rep(i,0,n-2)
    {
        m.insert(mp(*it3-*it1,*it2));
    }

    int midl,midr;
    int l,r;
    rep(i,0,n-2)
    {
        if(i%2==0)
        {
            it1 = s.begin();
            it2 = s.end();
            it2--;
            l = -(*it1);
            it1++;
            l += *it1;
            r = *it2;
            it2--;
            r -= *it2;

            midl=*it1;
            midr=*it2;
            if(l>r)
            {
                l -= *it1;
                it1++;
                l += *it1;
                s.erase(s.begin());
                i1 = m.find(mp(l,midl));
                m.erase(i1);
            }
            else
            {
                it3 = s.end();
                it3--;
                s.erase(it3);
                
                r += *it2;
                it2++;
                r -= *it2;
                it3 = m.find(mp(r,midr));
                m.erase(it3);
            }
        }
        else
        {
            i1 = m.end();
            i1--;
            l = i1->ff;
            r = i2->ss;
            m.erase(i1);
            it2 = s.find(r);
            s.erase(it2);
        }
        
    }

    int ans;

    it1=s.begin();
    it2=s.end();
    it2--;

    ans = *it2-*it1;

    pin(ans);
    return 0;
}
