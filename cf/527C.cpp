///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define mod 1000000007
#define rep(i,j,N) for( ll i=j ; i<N ; i++ )
#define rrep(i,N,j) for( ll i=N-1 ; i>=j ; i-- )
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
#define sz(a) ll((a).size())
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
    ll w,h,n;

    sl(w);sl(h);sl(n);

    ll maxx = w;
    ll maxy = h;

    multiset<ll> shs;
    multiset<ll> sws;

    sws.insert(w);
    shs.insert(h);

    set<ll> sw;
    set<ll> sh;

    sw.insert(0);
    sw.insert(w);
    sh.insert(0);
    sh.insert(h);

    char a;
    ll d;

    set<ll>::iterator it;
    set<ll>::iterator it2;
    set<ll>::iterator it3;

    while(n--)
    {
        getchar();
        scanf("%c",&a);
        sl(d);

        if(a=='H')
        {
            sh.insert(d);
            it = sh.upper_bound(d);
            if(it!=sh.end())
            {
                it2 = it;
                it2--;
                it2--;
                if(*it - *it2 == maxy)
                {
                    it3 = shs.end();
                    it3--;
                    shs.erase(it3);
                    shs.insert(*it-d);
                    shs.insert(d-*it2);
                    it3 = shs.end();
                    it3--;
                    maxy = *it3;
                }
                else
                {
                    it3 = shs.find(*it-*it2);
                    shs.erase(it3);
                    shs.insert(*it-d);
                    shs.insert(d-*it2);
                }
            }
        }
        else if(a=='V')
        {
            sw.insert(d);
            it = sw.upper_bound(d);
            if(it!=sw.end())
            {
                it2 = it;
                it2--;
                it2--;
                if(*it - *it2 == maxx)
                {
                    it3 = sws.end();
                    it3--;
                    sws.erase(it3);
                    sws.insert(*it-d);
                    sws.insert(d-*it2);
                    it3 = sws.end();
                    it3--;
                    maxx = *it3;
                }

                else
                {
                    it3 = sws.find(*it-*it2);
                    sws.erase(it3);
                    sws.insert(*it-d);
                    sws.insert(d-*it2);
                }
            }
        }

        pln((long long)maxx*maxy);
    }
    return 0;
}
