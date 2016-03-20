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

    int a[100005][2];

    int v[100005]={0};

    int x,y;

    rep(i,1,1+n)
    {
        si(x);si(y);
        a[i][0]=x;
        a[i][1]=y;
    }

    int yo;
    double ans=1;
    double finalans=0;
    rep(i,1,1+n)
    {
        if(v[i]==0)
        {
            v[i]==1;
            int cnt=0;
            int flag=0;
            ans = 1;
            yo = i;
            int k=0;
            int ctr=0;
            while(1)
            {
                ans *= (double)a[yo][1]/100;
                v[yo]=1;
                yo=a[yo][0];
                cnt++;
                if( yo == i )
                {
                    flag=1;
                    break;
                }
                if(cnt>=n)
                {
                    break;
                }
                if( v[yo]==1)
                {
                    k=ctr;
                    break;
                }
                ctr++;
            }
            if( flag == 1)
            {
                finalans += ans ;
            }
            else
            {
                yo = i;
                rep(j,0,ctr)
                {
                    yo = a[yo][0];
                    v[yo]=0;
                }
            }

        }
    }

    printf("%.2lf\n",finalans);
    return 0;
}
