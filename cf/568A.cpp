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

int pri[2000006]={0};
int pal[2000006]={0};

void checkpal(int x)
{
    int y=x;
    int rev=0;

    while(y)
    {
        rev*=10;
        rev+=y%10;
        y/=10;
    }
    if(rev==x)
        pal[x]=1;
}

int main()
{
    int p,q;
    si(p);si(q);

    int m;
    pri[1]=1;

    rep(i,2,2003)
    {
        m=i*i;    
        if(pri[i]==0)
        {
            while(m<=2000006)
            {
                if(pri[m]==0)
                    pri[m]=1;
                m+=i;
            }
        }
    }

    rep(i,1,2000006)
        checkpal(i);

    int prime,pali,x,y;
    int ans=0;

    x=y=0;
    rep(i,1,2000001)
    {
        prime=x+1-pri[i];
        pali=y+pal[i];
        if(prime*q<=pali*p)
        {
            ans=i;
        }
        x=prime;
        y=pali;
    }

    if(ans==0)
        printf("Palindromic tree is better than splay tree\n");
    else
        pin(ans);
    return 0;
}
