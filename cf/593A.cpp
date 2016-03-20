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
    int yo;
    si(yo);
    int len,count;
    char a[1003];
    int  n[102][26]={0};
    vii v;
    rep(i,0,yo)
    {
        scanf("%s",a);
        len = strlen(a);
        count=0;
        rep(j,0,len)
        {
            if(!n[i][a[j]-'a'])
                count++;
            n[i][a[j]-'a']++;
        }
        if(count<=2)
        {
            v.pb(mp(i,len));
        }
    }

    int size = sz(v);
    int ans = 0;
    rep(i,0,26)
    {
        rep(j,0,26)
        {
            int count = 0;
            rep(k,0,size)
            {
                int flag=0;
                rep(l,0,26)
                {
                    if(l!=i && l!=j)
                        if(n[v[k].ff][l]!=0)
                        {
                            flag=1;
                            break;
                        }
                }
                if(flag==0)
                    count+=v[k].ss;
            }
            ans = max(ans,count);
        }
    }

    pin(ans);
    return 0;
}
