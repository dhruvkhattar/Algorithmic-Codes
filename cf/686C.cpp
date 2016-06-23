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
    ll n1,m1,yo1,yo2;
    sl(n1);sl(m1);

    n1--;m1--;
    ll n = n1;
    ll m = m1;

    int i = 0;
    while(n1)
    {
        i++;
        n1 /= 7;
    }
    int j = 0;
    while(m1)
    {
        j++;
        m1 /= 7;
    }
    if(!i)
        i++;
    if(!j)
        j++;
    if(i+j > 7)
    {
        pin(0);
        return 0;
    }

    ll ans = 0;
    ll it[10];
    ll mul;
    map<pair<ll,ll>,int> ma;
    rep(it1,0,7)
    {
        it[1] = it1;
        rep(it2,0,7)
        {
            it[2] = it2;
            if(it1 == it2)
                continue;
            rep(it3,0,7)
            {
                it[3] = it3;
                if(it3 == it2 || it3 == it1)
                    continue;
                rep(it4,0,7)
                {
                    it[4] = it4;
                    if(it4 == it3 || it4 == it2 || it4 == it1)
                        continue;
                    rep(it5,0,7)
                    {
                        it[5] = it5;
                        if(it5 == it4 || it5 == it3 || it5 == it2 || it5 == it1)
                            continue;
                        rep(it6,0,7)
                        {
                            it[6] = it6;
                            if(it6 == it5 || it6 == it4 || it6 == it3 || it6 == it2 || it6 == it1)
                                continue;
                            rep(it7,0,7)
                            {
                                it[7] = it7;
                                if(it7 == it6 || it7 == it5 || it7 == it4 || it7 == it3 || it7 == it2 || it7 == it1)
                                    continue;
                                mul = 1;
                                yo1 = 0;
                                rep(k,0,i)
                                {
                                    yo1 += mul*it[k+1];
                                    mul *= 7;
                                }
                                if( yo1 <= n )
                                {
                                    mul = 1;
                                    yo2 = 0;
                                    rep(k,i,i+j)
                                    {
                                        yo2 += mul*it[k+1];
                                        mul *= 7;
                                    }
                                    if(yo2 <= m)
                                    {
                                        if(!ma[mp(yo1,yo2)])
                                        {
                                            ans++;
                                            ma[mp(yo1,yo2)]++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    pln(ans);
    return 0;
}
