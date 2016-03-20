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
    int t;
    si(t);
    while( t-- )
    {
        int n;
        vii v;
        si(n);

        int x,y;

        int minx=1000000009;
        int miny=1000000009;
        int maxx=-1000000009;
        int maxy=-1000000009;

        rep(i,0,n)
        {
            si(x);si(y);
            if(x>maxx)
                maxx=x;
            if(x<minx)
                minx=x;
            if(y<miny)
                miny=y;
            if(y>maxy)
                maxy=y;

            v.pb(mp(x,y));
        }

        if(present(v,mp(minx,miny)))
        {
            int x = find(all(v),mp(minx,miny)) - v.begin() + 1;
            printf("1\n%d NE\n",x);
        }
        else if(present(v,mp(maxx,maxy)))
        {
            int x = find(all(v),mp(maxx,maxy)) - v.begin() + 1;
            printf("1\n%d SW\n",x);
        }
        else if(present(v,mp(minx,maxy)))
        {
            int x = find(all(v),mp(minx,maxy)) - v.begin() + 1;
            printf("1\n%d SE\n",x);
        }
        else if(present(v,mp(maxx,miny)))
        {
            int x = find(all(v),mp(maxx,miny)) - v.begin() + 1;
            printf("1\n%d NW\n",x);
        }
        else
        {
            pin(2);
            int maxyminx=1000000009;
            int maxymaxx=-1000000009;
            int minyminx=1000000009;
            int minymaxx=-1000000009;

            int size = sz(v);
            rep(i,0,size)
            {
                if( v[i].ss == maxy )
                {
                    if( v[i].ff < maxyminx)
                        maxyminx = v[i].ff;
                    if( v[i].ff > maxymaxx)
                        maxymaxx = v[i].ff;
                }

                if( v[i].ss == miny )
                {
                    if( v[i].ff < minyminx)
                        minyminx = v[i].ff;
                    if( v[i].ff > minymaxx)
                        minymaxx = v[i].ff;
                }
            }

            if(maxyminx < minymaxx)
            {
                int x = find(all(v),mp(maxyminx,maxy)) - v.begin() + 1;
                printf("%d SE\n",x);
                x = find(all(v),mp(minymaxx,miny)) - v.begin() + 1;
                printf("%d NW\n",x);

            }
            else
            {
                int x = find(all(v),mp(maxymaxx,maxy)) - v.begin() + 1;
                printf("%d SW\n",x);
                x = find(all(v),mp(minyminx,miny)) - v.begin() + 1;
                printf("%d NE\n",x);

            }
        }
    }
    return 0;
}
