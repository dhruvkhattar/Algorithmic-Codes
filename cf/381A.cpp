///////////////////////////////////////
//    Author : Dhruv Khattar        //
/////////////////////////////////////

#include<bits/stdc++.h>

#define rep(j,N) for( int i=j ; i<N ; i++ )
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
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define all(a) (a).begin(),(a).end()
#define present(a,x) (find(all(a),x) != (a).end()) 

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

    int a[1003];
    rep(0,n)
    {
        si(a[i]);
    }
    int l,r;
    l=0;
    r=n-1;
    int count=0;
    int ans1=0;
    int ans2=0;
    while(l<=r)
    {
        if(count%2==0)
            if( a[l]>a[r] )
                ans1+=a[l++];
            else
                ans1+=a[r--];
        else
            if( a[l]>a[r] )
                ans2+=a[l++];
            else
                ans2+=a[r--];

        count++;
    }
    pi(ans1);
    ps;
    pin(ans2);
    return 0;
}
