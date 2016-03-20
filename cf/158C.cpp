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
    si(n);
    vector<string> v(10004);
    int ctr=0;
    rep(i,0,n)
    {
        string a;
        cin>>a;
        if(a.compare("pwd") == 0)
        {
            cout<<"/";
            rep(i,0,ctr)
            {
                cout<<v[i]<<"/";
            }
            pn;
        }
        else
        {
            string b;
            cin>>b;
            if(b[0]=='/')
            {
                b = b.substr(1,b.length());
                int i=0;
                while(present(b,'/'))
                {
                    int yo=b.find('/');
                    string x = b.substr(0,yo);
                    if(x.compare("..")==0)
                        i-=2;
                    else
                        v[i]=x;
                    b=b.substr(yo+1,b.length());
                    i++;
                }
                if(b.compare("..")==0)
                    i--;
                else
                    v[i++]=b;
                ctr=i;
            }
            else
            {
                while(present(b,'/'))
                {
                    int yo=b.find('/');
                    string x = b.substr(0,yo);
                    if(x.compare("..")==0)
                        ctr-=2;
                    else
                        v[ctr]=x;
                    b=b.substr(yo+1,b.length());
                    ctr++;
                }
                if(b.compare("..")==0)
                    ctr--;
                else
                    v[ctr++]=b;
            }
        }
    }
    return 0;
}
