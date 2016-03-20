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

char a[200005],b[200005];

int check(int l1,int r1,int l2,int r2)
{
    int mid1 = (r1+l1)/2;
    int mid2 = (r2+l2)/2;
    if((r1-l1+1)%2==1)
    {
        rep(i,0,r1-l1+1)
        {
            if(a[l1+i]!=b[i+l2])
                return 0;
        }
        return 1;
    }

    //cout<<a.substr(0,len/2)<<" "<<a.substr(len/2,len)<<" "<<b.substr(0,len/2)<<" "<<b.substr(len/2,len)<<endl;
    
    return (( check(l1,mid1,l2,mid2) && check(1+mid1,r1,1+mid2,r2)) || (check(l1,mid1,1+mid2,r2) && check(1+mid1,r1,l2,mid2)));

}
int main()
{
    
    cin>>a>>b;

    int len=strlen(a);

    if(check(0,len-1,0,len-1))
        printf("YES\n");
    else
        printf("NO\n");
     
    return 0;
}
