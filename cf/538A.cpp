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
    char a[111];

    scanf("%s",a);

    int len=strlen(a);

    int pmax=0;
    int smax=0;

    int count=0;
    if(len<10)
        printf("NO\n");
    else
    {
        if(a[0]=='C')
        {
            pmax++;
            if(a[1]=='O')
            {
                pmax++;
                if(a[2]=='D')
                {
                    pmax++;
                    if(a[3]=='E')
                    {
                        pmax++;
                        if(a[4]=='F')
                        {
                            pmax++;
                            if(a[5]=='O')
                            {
                                pmax++;
                                if(a[6]=='R')
                                {
                                    pmax++;
                                    if(a[7]=='C')
                                    {
                                        pmax++;
                                        if(a[8]=='E')
                                        {
                                            pmax++;
                                            if(a[9]=='S')
                                            {
                                                pmax++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
        if(a[len-1]=='S')
        {
            smax++;
            if(a[len-2]=='E')
            {
                smax++;
                if(a[len-3]=='C')
                {
                    smax++;
                    if(a[len-4]=='R')
                    {
                        smax++;
                        if(a[len-5]=='O')
                        {
                            smax++;
                            if(a[len-6]=='F')
                            {
                                smax++;
                                if(a[len-7]=='E')
                                {
                                    smax++;
                                    if(a[len-8]=='D')
                                    {
                                        smax++;
                                        if(a[len-9]=='O')
                                        {
                                            smax++;
                                            if(a[len-10]=='C')
                                            {
                                                smax++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    if(pmax+smax>=10)
        printf("YES\n");
    else
        printf("NO\n");

    }
        return 0;
}
