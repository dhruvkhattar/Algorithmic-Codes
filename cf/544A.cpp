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
    int k;
    si(k);
    string a;
    cin>>a;
    
    int n[26]={0};
    int len=sz(a);

    int count=0;

    rep(i,0,len)
    {
        if(n[a[i]-'a']==0)
            count++;
        n[a[i]-'a']++;
    }

    if(k>count)
        printf("NO\n");
    else if(k==1)
    {
        printf("YES\n");
        cout<<a<<endl;
    }
    else
    {
        printf("YES\n");
        int j=1;
        printf("%c",a[0]);
        int n[26]={0};
        n[a[0]-'a']++;
        while(k>1)
        {
            if(n[a[j]-'a']==0)
            {
                printf("\n%c",a[j]);
                n[a[j]-'a']++;
                k--;
            }
            else
            {
                printf("%c",a[j]);
            }
            j++;
        }
        while(j<len)
        {
            printf("%c",a[j]);
            j++;
        }
        pn;
    }
    return 0;
}
