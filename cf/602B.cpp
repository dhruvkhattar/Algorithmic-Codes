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
    int a[100005];
    si(n);

    rep(i,0,n)
        si(a[i]);

    int ans = 1;
    int temp1,temp2;
    int ind1,ind2;

    temp1 = a[0];
    ind1 = 0;
    int flag = 1;
    int len = 1;

    rep(i,1,n)
    {
        if( flag == 1 )
        {
            if( abs(a[i] - temp1) == 1 )
            {
                temp2 = a[i];
                flag = 2;
                ind2 = i;
                len++;
            }
            else if( a[i] == temp1 )
                len++;
        }
        else if( flag = 2)
        {
            if( a[i] == temp1 )
            {
                if( ind2 > ind1 )
                    ind1 = i;
                len++;
            }
            else if( a[i] == temp2 )
            {
                if( ind1 > ind2 )
                    ind2 = i;
                len++;
            }
            else
            {
                if( a[i-1] == temp1 )
                {
                    len = i-ind1+1;
                    ind2 = i;
                    temp2 = a[i];
                }
                else if( a[i-1] == temp2 )
                {
                    len = i-ind2+1;
                    ind1 = i;
                    temp1 = a[i];
                }
            }
        }
        ans = max(ans,len);
    }

    pin(ans);
    return 0;
}
