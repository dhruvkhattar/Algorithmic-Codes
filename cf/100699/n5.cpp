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


int dp[11][11][11][3];

void st()
{
    for(int i=0;i<11;i++)
        for(int j=0;j<11;j++)
            for(int k=0;k<11;k++)
                for(int l=0;l<3;l++)
                    dp[i][j][k][l]= (-1);
}

int func(int x, int y , int z , int n)
{
    int ans;
    if(x<0 || y<0 || z<0)
        return 0;

    if(dp[x][y][z][n]!=(-1))
        return dp[x][y][z][n];
    else
    {
        if(n==0)
            ans = func(x,y-1,z,1) + func(x,y,z-1,2);
        else if(n==1)
            ans = func(x-1,y,z,0) + func(x,y,z-1,2);
        else if(n==2)
            ans = func(x,y-1,z,1) + func(x-1,y,z,0);

        dp[x][y][z][n]=ans;
    }
//    cout << " ans: " << ans << " : " << x << " " << y << " " << z << " " << n << endl;
    return ans;
}


int main()
{
    st();
    dp[0][0][0][0]=0;
    dp[0][1][0][0]=1;
    dp[0][0][1][0]=1;
    dp[1][0][0][0]=0;

    dp[0][0][0][1]=0;
    dp[0][1][0][1]=0;
    dp[0][0][1][1]=1;
    dp[1][0][0][1]=1;

    dp[0][0][0][2]=0;
    dp[0][1][0][2]=1;
    dp[0][0][1][2]=0;
    dp[1][0][0][2]=1;

    int n;
    si(n);

    int sum = func(n-1,n,n,0)+func(n,n-1,n,1)+func(n,n,n-1,2);
    pin(sum);    
    return 0;
}
