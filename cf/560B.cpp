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
    int b1,b2;
    si(b1);si(b2);
    int p1,p2,q1,q2;
    si(p1);si(p2);
    si(q1);si(q2);
    
    if(p1+q1<=b1 && max(p2,q2)<=b2)
        printf("YES\n");
    else if(p2+q2<=b1 && max(p1,q1)<=b2)
        printf("YES\n");
    else if(p2+q1<=b1 && max(p1,q2)<=b2)
        printf("YES\n");
    else if(p1+q2<=b1 && max(p2,q1)<=b2)
        printf("YES\n");
    else if(p1+q1<=b2 && max(p2,q2)<=b1)
        printf("YES\n");
    else if(p2+q2<=b2 && max(p1,q1)<=b1)
        printf("YES\n");
    else if(p2+q1<=b2 && max(p1,q2)<=b1)
        printf("YES\n");
    else if(p1+q2<=b2 && max(p2,q1)<=b1)
        printf("YES\n");
    else
    printf("NO\n");
    
    return 0;
}
