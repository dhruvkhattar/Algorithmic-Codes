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

    while(t--)
    {
        char a[1000006];
        char b[1000006];

        scanf("%s",a);
        scanf("%s",b);
        int ans=0;

        int fa=0;
        int fb=0;
        int len=strlen(a);

        if(a[0]=='#')
            fa=-1;
        else
        {
            int flag=0;
            rep(i,0,len)
            {
                if(a[i+1]=='#' && b[i+1]=='#')
                {
                    fa=-1;
                    break;
                }
                else if(flag==0 && a[i+1]=='#')
                {
                    flag=1;
                    fa++;
                }
                else if(flag==1 && b[i+1]=='#')
                {
                    flag=0;
                    fa++;
                }
            }
        }

        if(b[0]=='#')
            fb=-1;
        else
        {
            int flag=1;
            rep(i,0,len)
            {
                if(a[i+1]=='#' && b[i+1]=='#')
                {
                    fb=-1;
                    break;
                }
                else if(flag==0 && a[i+1]=='#')
                {
                    flag=1;
                    fb++;
                }
                else if(flag==1 && b[i+1]=='#')
                {
                    flag=0;
                    fb++;
                }
            }
        }

        if(fa==-1 && fb==-1)
            printf("No\n");
        else if(fa==-1)
            printf("Yes\n%d\n",fb);
        else if(fb==-1)
            printf("Yes\n%d\n",fa);
        else
            printf("Yes\n%d\n",min(fa,fb));

    }
    return 0;
}
