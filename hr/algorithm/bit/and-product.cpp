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
     int t;
     si(t);
     unsigned int l,r;

     while( t-- )
     {
         scanf("%u%u",&l,&r);

         int a[100]={0};
         int b[100]={0};

         unsigned int x = l;
         unsigned int y = r;

         int i=0;

         while(x)
         {
             a[i]=x%2;
             x/=2;
             i++;
         }

         i=0;

         while(y)
         {
             b[i]=y%2;
             y/=2;
             i++;
         }
         
         rrep(j,i,0)
         {
             if( a[j]==0 && b[j]==1 )
             {
                 rrep(k,j+1,0)
                     a[k]=0;
             }
         }

         unsigned int ans=0;
         unsigned int yo=1;
         rep(j,0,i)
         {
             ans+=(unsigned int)a[j]*yo;
             yo*=2;
         }

         printf("%u",ans);
         pn;

     }
    return 0;
}
