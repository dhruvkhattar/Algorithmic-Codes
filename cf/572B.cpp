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
#define trr(c,i) for(typeof((c).rbegin())i = (c).rbegin() ; i != (c).rend(); i++) 
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
    int n,s;
    si(n);si(s);

    map<int,int> mb;
    map<int,int> ms;
    char d;
    int p,a;
    while(n--)
    {
        getchar();
        scanf("%c",&d);
        si(p);si(a);

        if(d=='B')
            mb[p]+=a;
        else
            ms[p]+=a;
    }

    int cnt=0;
    int size = sz(ms);
    int yo=0;

    if(size>s)
        yo=size-s;

    trr(ms,it)
    {
        if(cnt<yo)
            ;
        else
            printf("S %d %d\n",it->first,it->second);
        cnt++;
    }

    cnt=0;

    trr(mb,it)
    {
        if(cnt>=s)
            break;
        printf("B %d %d\n",it->first,it->second);
        cnt++;
    }
    return 0;
}
