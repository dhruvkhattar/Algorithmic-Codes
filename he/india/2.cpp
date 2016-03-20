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
    int t,n,m,q,x,y,yo,yo2,new1,new2;
    si(t);
    ll ans;
    set<int>::iterator it;

    while( t-- )
    {
        si(n);si(m);si(q);
        multiset<int> h;
        multiset<int> w;
        set<int> xc;
        set<int> yc;
        h.insert(m-1);
        w.insert(n-1);
        xc.insert(1);
        xc.insert(n);
        yc.insert(1);
        yc.insert(m);


        while(q--)
        {
            si(x);si(y);
            it = xc.lower_bound(x);
            if( *it != x )
            {
                yo2 = *it;
                it--;
                yo = *it;
                xc.insert(x);
                new1 = x - yo;
                new2 = yo2 - x;
                it = w.find(yo2-yo);
                w.erase(it);
                w.insert(new1);
                w.insert(new2);
            }
            
            it = yc.lower_bound(y);
            if( *it != y )
            {
                yo2 = *it;
                it--;
                yo = *it;
                yc.insert(y);
                new1 = y - yo;
                new2 = yo2 - y;
                it = h.find(yo2-yo);
                h.erase(it);
                h.insert(new1);
                h.insert(new2);
            }
        }


        pl((long long)sz(h)*sz(w));ps;
        it = w.begin();
        ans = *it;
        it = h.begin();
        ans = (ll)ans*(*it);
        pl(ans);ps;
        it = w.end();
        it--;
        ans = *it;
        it = h.end();
        it--;
        ans = (long long)ans*(*it);
        pln(ans);
    }
    return 0;
}
