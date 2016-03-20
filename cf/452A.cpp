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
    int n;
    string a,c;
    a="espeon";
    vector<string> b;
    c="vaporeon";

    b.pb("jolteon");
    b.pb("flareon");
    b.pb("umbreon");
    b.pb("leafeon");
    b.pb("glaceon");
    b.pb("sylveon");

    si(n);

    string x;
    cin>>x;

    if(n==6)
        cout<<a<<endl;
    else if(n==8)
        cout<<c<<endl;
    else
    {
        if(x[0]=='l' || x[1]=='e'|| x[3]=='f')
            cout<<b[3]<<endl;
        else if(x[0]=='j' || x[1]=='o' || x[3]=='t')
            cout<<b[0]<<endl;
        else if(x[0]=='f' || ((x[1]=='l' || x[2]=='a')&&x[3]=='r'))
            cout<<b[1]<<endl;
        else if(x[0]=='u' || x[1]=='m' || x[2]=='b')
            cout<<b[2]<<endl;
        else if(x[0]=='g' || x[3]=='c' )
            cout<<b[4]<<endl;
        else
            cout<<b[5]<<endl;
    }

    return 0;
}
