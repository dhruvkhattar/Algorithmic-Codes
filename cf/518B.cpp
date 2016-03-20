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
    char a[200005];
    char b[200005];

    scanf("%s%s",a,b);

    int nas[26]={0};
    int nal[26]={0};
    int nbs[26]={0};
    int nbl[26]={0};

    int ans1=0;
    int ans2=0;

    int lena = strlen(a);
    int lenb = strlen(b);

    /*rep(i,0,lena)
      {
      if( a[i]>='a' && a[i]<='z')
      nas[a[i]-'a']++;
      else
      nal[a[i]-'A']++;
      }*/

    rep(i,0,lenb)
    {
        if( b[i]>='a' && b[i]<='z')
            nbs[b[i]-'a']++;
        else
            nbl[b[i]-'A']++;
    }

    vi v;

    rep(i,0,lena)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            if(nbs[a[i]-'a'])
            {
                ans1++;
                nbs[a[i]-'a']--;
            }
            else
                v.pb(i);
        }
        else
        {
            if(nbl[a[i]-'A'])
            {
                ans1++;
                nbl[a[i]-'A']--;
            }
            else
                v.pb(i);
        }
    }

    int size = sz(v);

    rep(i,0,size)
    {
        if(a[v[i]]>='a' && a[v[i]]<='z')
        {
            if( nbl[a[v[i]]-'a'])
            {
                ans2++;
                nbl[a[v[i]]-'a']--;
            }
        }
        else
        {
            if(nbs[a[v[i]]-'A'])
            {
                ans2++;
                nbs[a[v[i]]-'A']--;
            }
        }
    }

    pi(ans1);ps;pin(ans2);
    return 0;
}
