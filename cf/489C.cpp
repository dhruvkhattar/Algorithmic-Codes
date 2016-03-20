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
    int m,s;
    si(m);si(s);

    if(m==1 && s==0)
        printf("0 0\n");
    else if(s==0 || s>9*m)
    {
        pi(-1);ps;pin(-1);
    }
    else
    {
        char a[102];
        rep(i,0,m)
            a[i]='0';
        a[0]='1';
        int yo=s-1;
        int h=yo/9;
        int h2=yo%9;

        rep(i,0,h)
        {
            a[m-i-1]='9';
        }
        a[m-h-1]=a[m-h-1]+h2;
        a[m]='\0';
        printf("%s ",a);
        rep(i,0,m)
            a[i]='0';
        h=s/9;
        h2=s%9;
        rep(i,0,h)
            a[i]='9';
        a[h]=a[h]+h2;
        a[m]='\0';
        printf("%s\n",a);

    }
    return 0;
}
