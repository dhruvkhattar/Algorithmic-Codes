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
    char a[100005];
    scanf("%s",a);
    int e=0;
    int len=strlen(a);

    int b[100005];
    rep(i,0,len)
    {
        if((a[i]-'0')%2==0)
            b[e++]=i;
    }
    if(e==0)
        pin(-1);
    else
    {
        int flag=0;
        rep(i,0,e)
        {
            if(a[b[i]] < a[len-1])
            {
                char c=a[b[i]];
                a[b[i]]=a[len-1];
                a[len-1]=c;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            char c=a[b[e-1]];
            a[b[e-1]]=a[len-1];
            a[len-1]=c;
        }
        printf("%s\n",a);
    }
    return 0;
}
