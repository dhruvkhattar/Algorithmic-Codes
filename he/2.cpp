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
    char a[100005];

    scanf("%s",a);

    int same=0;
    int low2=0;
    int high2=0;
    int low1=0;
    int high1=0;

    int n1[26]={0};
    int n2[26]={0};
    int a1[26]={0};
    int a2[26]={0};
    rep(i,0,n/2)
    {
        n1[a[i]-'a']++;
        a1[a[i]-'a']++;
    }
    rep(i,n/2,n)
    {
        n2[a[i]-'a']++;
        a2[a[i]-'a']++;
    }
    
    rep(i,0,26)
    {
        if(n1[i]-n2[i] > 0)
            same+=n1[i]-n2[i];
    }

    int x=0;
    rep(i,0,26)
    {
        if(n2[i]!=0)
        {
            if(x>n2[i])
                {
                    n2[i]=0;
                    x-=n2[i];
                }
            else
                n2[i]-=x;
            low1+=n2[i];
        }

        x+=n1[i];
    }
    x=0;
    rep(i,0,26)
    {
        if(a1[i]!=0)
        {
            if(x>a1[i])
                {
                    a1[i]=0;
                    x-=a1[i];
                }
            else
                a1[i]-=x;
            high1+=a1[i];
        }

        x+=a2[i];
    }
   x=0; 
    rrep(i,26,0)
    {
        if(n1[i]!=0)
        {
            if(x>n1[i])
                {
                    n1[i]=0;
                    x-=n1[i];
                }
            else
                n1[i]-=x;
            low2+=n1[i];
        }

        x+=n2[i];
    }
    x=0;
    rrep(i,26,0)
    {
        if(a2[i]!=0)
        {
            if(x>a2[i])
                {
                    a2[i]=0;
                    x-=a2[i];
                }
            else
                a2[i]-=x;
            high2+=a2[i];
        }
        x+=a1[i];
    }

    int low=min(low1,low2);
    int high=min(high1,high2);
    pin(min(min(same,low),high));
    return 0;
}
