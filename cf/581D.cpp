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

int func(int x1,int y1,int x2,int y2,int x3,int y3)
{
    if(x1==x2 && x2==x3 && y1+y2+y3==x1)
    {
        pin(x1);
        rep(i,0,y1)
        {
            rep(j,0,x1)
                printf("A");
            pn;
        }
        rep(i,0,y2)
        {
            rep(j,0,x1)
                printf("B");
            pn;
        }
        rep(i,0,y3)
        {
            rep(j,0,x1)
                printf("C");
            pn;
        }
        return 0;
    }

    int yo = 1;
    int max = x1;

    if( x2 > max )
    {
        max = x2;
        yo = 2;
    }
    
    if( x3 > max )
    {
        max = x3;
        yo = 3;
    }

    if( yo == 1 && x1 == x2+x3 && y2==y3 && y2+y1==x1)
    {
        pin(max);
        rep(i,0,y1)
        {
            rep(i,0,x1)
                printf("A");
            pn;
        }
        
        rep(i,0,y2)
        {
            rep(i,0,x2)
                printf("B");
            
            rep(i,0,x3)
                printf("C");
            pn;
        }
        return 0;
    }
    if( yo == 2 && x2 == x1+x3 && y1==y3 && y1+y2==x2)
    {
        pin(max);
        rep(i,0,y2)
        {
            rep(i,0,x2)
                printf("B");
            pn;
        }
        
        rep(i,0,y1)
        {
            rep(i,0,x1)
                printf("A");
            
            rep(i,0,x3)
                printf("C");
            pn;
        }
        return 0;
    }

    if( yo == 3 && x3 == x2+x1 && y2==y1 && y2+y3==x3)
    {
        pin(max);
        rep(i,0,y3)
        {
            rep(i,0,x3)
                printf("C");
            pn;
        }
        
        rep(i,0,y1)
        {
            rep(i,0,x1)
                printf("A");
            
            rep(i,0,x2)
                printf("B");
            pn;
        }
        return 0;
    }
    return 1;
}

int main()
{
    int a[2],b[2],c[2];

    si(a[0]);si(a[1]);si(b[0]);si(b[1]);si(c[0]);si(c[1]);

    rep(i,0,2)
        rep(j,0,2)
            rep(k,0,2)
               if( func(a[i],a[1-i],b[j],b[1-j],c[k],c[1-k]) == 0)
                    return 0;

    pin(-1);

    return 0;
}
