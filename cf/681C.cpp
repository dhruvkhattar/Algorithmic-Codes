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

char a[100005];
int b[100005];

char ans1[1000006];
int ans2[1000006];

int main()
{
    int n;
    si(n);
    char s[1000];
    rep(i,0,n)
    {
        scanf("%s",s);
        a[i] = s[0];
        if(a[i] != 'r')
            si(b[i]);
    }

    priority_queue<int, vector<int>, greater<int> > m;

    int j = 0;
    int val;
    rep(i,0,n)
    {
        if(a[i] == 'i')
        {
            m.push(b[i]);
            ans1[j] = 'i';
            ans2[j] = b[i];
            j++;
        }
        else if (a[i] == 'r')
        {
            if(m.empty())
            {
                ans1[j] = 'i';
                ans2[j] = 1;
                j++;
                ans1[j] = 'r';
                j++;
            }
            else
            {
                m.pop();
                ans1[j] = 'r';
                j++;
            }
        }
        else
        {
            if(!m.empty())
            {
                val = m.top();
                if(b[i] == val)
                {
                    ans1[j] = 'g';
                    ans2[j] = b[i];
                    j++;
                }
                else
                {
                    while(!m.empty() && m.top() < b[i])
                    {
                        ans1[j] = 'r';
                        j++;
                        m.pop();
                    }

                    if(!m.empty() && m.top() == b[i])
                    {
                        ans1[j] = 'g';
                        ans2[j] = b[i];
                        j++;
                    }
                    else
                    {
                        m.push(b[i]);
                        ans1[j] = 'i';
                        ans2[j] = b[i];
                        j++;
                        ans1[j] = 'g';
                        ans2[j] = b[i];
                        j++;
                    }
                }
            }
            else
            {
                m.push(b[i]);
                ans1[j] = 'i';
                ans2[j] = b[i];
                j++;
                ans1[j] = 'g';
                ans2[j] = b[i];
                j++;

            }
        }
    }

    pin(j);
    rep(i,0,j)
    {
        if(ans1[i] == 'i')
            printf("insert %d\n",ans2[i]);
        else if (ans1[i] == 'r')
            printf("removeMin\n");
        else
            printf("getMin %d\n",ans2[i]);

    }
    return 0;
}
