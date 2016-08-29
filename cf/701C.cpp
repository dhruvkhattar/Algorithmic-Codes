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
    int ct = 0;
    char s[100005];
    scanf("%s",s);
    int a[26] = {0};
    int A[26] = {0};
    rep(i,0,n)
    {
        if (s[i] <= 'Z' && s[i] >= 'A')
            if (!A[s[i]-'A'])
            {
                ct++;
                A[s[i]-'A']++;
            }
        if (s[i] <= 'z' && s[i] >= 'a')
            if (!a[s[i]-'a'])
            {
                ct++;
                a[s[i]-'a']++;
            }
    }

    int fa[26] = {0};
    int fA[26] = {0};

    int ans = n;
    int cnt = 0;
    int j = 0;
    rep(i,0,n)
    {
        if (s[i] <= 'Z' && s[i] >= 'A')
        {
            if (!fA[s[i]-'A'])
                cnt++;
            fA[s[i]-'A']++;
        }
        else
        {
            if (!fa[s[i]-'a'])
                cnt++;
            fa[s[i]-'a']++;
        }
        while(1)
        {
            if (s[j] <= 'Z' && s[j] >= 'A')
            {
                if (fA[s[j]-'A'] > 1)
                {
                    fA[s[j]-'A']--;
                    j++;
                }
                else
                    break;
            }
            else
            {
                if (fa[s[j]-'a'] > 1)
                {
                    fa[s[j]-'a']--;
                    j++;
                }
                else
                    break;
            }
        }
        if (cnt == ct)
            ans = min(ans,i - j + 1);
    }
    pin(ans);

    return 0;
}
