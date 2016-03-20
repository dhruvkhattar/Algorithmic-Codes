#include <bits/stdc++.h>

using namespace std;

typedef struct ll{
    int d;
    struct ll *next;
}ll;

ll *a[100005];
ll *tr[100005];
ll *dag[100005];
int vis[100005]={0};
int vt[100005]={0};
int sizedag;
int flag=0;
int cov[100005]={0};
int covdag[100005]={0};
vector<int> ve;

int com[100005]={0};

vector< vector<int> > vec(100005);
vector< pair<int,int> > vpair;
vector<int> cover;
vector<int> coverdag;
int pt =0;


stack<int> st;

void reset(int n)
{
    for(int i=0;i<=n;i++)
        vt[i]=0;

    ve.clear();
}

void insert_dag(int x,int y){

    ll *temp = (ll*)malloc(sizeof(ll));
    temp->d = y;
    temp->next = NULL;

    if(dag[x] == NULL){
        dag[x] = (ll*)malloc(sizeof(ll));
        dag[x] = temp;
    }
    else
    {
        temp->next = dag[x];
        dag[x] = temp;
    }
}

void insert_node(int x,int y){

    ll *temp = (ll*)malloc(sizeof(ll));
    temp->d = y;
    temp->next = NULL;

    if(a[x] == NULL){
        a[x] = (ll*)malloc(sizeof(ll));
        a[x] = temp;
    }
    else
    {
        temp->next = a[x];
        a[x] = temp;
    }

    ll *temp2 = (ll*)malloc(sizeof(ll));
    temp2->d = x;
    temp2->next = NULL;

    if(tr[y] == NULL){
        tr[y] = (ll*)malloc(sizeof(ll));
        tr[y] = temp2;
    }
    else
    {
        temp2->next = tr[y];
        tr[y] = temp2;
    }

}


void fill(int v){
    vis[v] = 1;
    ll *t = a[v];

    while(t!=NULL){
        if(vis[t->d]!=1){
            fill(t->d);
        }
        t = t->next;
    }
    st.push(v);
}

void dfs(int v){
    vis[v] = 1;
    ll *t = a[v];
    //printf("%d ",v);
    while(t!=NULL){
        if(vis[t->d]!=1){
            dfs(t->d);
        }
        t = t->next;
    }
}


void dfsyo(int v){
    vt[v] = 1;
    ll *t = dag[v];
    int f=0;
    for(int i=0;i<sizedag;i++)
        if(vt[coverdag[i]]!=1)
        {
 //           printf("fdsfas\n");
            f=1;
            break;
        }
    if(f==0)
    {
        flag=1;
        return;
    }
    //printf("%d ",v);
    while(t!=NULL){
        if(vt[t->d]!=1){
            ve.push_back(t->d);
            dfsyo(t->d);
            if(flag==1)
                break;
            vt[t->d] = 0;
            ve.pop_back();
        }
        t = t->next;
    }
}


void dfsr(int v){
    vis[v] = 1;
    ll *t = tr[v];
    //printf("%d ",v);
    vec[pt].push_back(v);
    com[v] = pt;
    while(t!=NULL){
        if(vis[t->d]!=1){
            dfsr(t->d);
        }
        t = t->next;
    }
}

void printscc(int n){
    for(int i=0;i<n;i++){
        if(vis[i] ==0)
            fill(i);
    }

    for(int i=0;i<=n;i++)
        vis[i]=0;

    while(st.empty() == false){
        int x = st.top();
        st.pop();

        if(vis[x] == 0){
            dfsr(x);
            pt++;
        }
    }
}

void print(){
    for(int i=0;i<pt;i++){
        cout<<i<<" : ";
        ll *t = dag[i];
        while(t!=NULL){
            cout<<t->d<<" ";
            t=t->next;
        }
        cout<<endl;
    }
}


int main(){

    int t;
    int n,m,k;
    int p,q;
    scanf("%d",&t);

    while(t--){

        scanf("%d%d%d",&n,&m,&k);

        int x;
        for(int i=0;i<k;i++)
        {
            scanf("%d",&x);
            cover.push_back(x);
            cov[x]=1;
        }

        for(int i=0;i<m;i++){
            scanf("%d%d",&p,&q);
            insert_node(p,q);
            vpair.push_back(make_pair(p,q));
        }

 //   cout<<"printing strongly connected components\n";

    printscc(n);
    
    
    for(int i = 0;i<pt;i++){
        sort(vec[i].begin(),vec[i].end());
      //  int x = vec[i].size();
  //      for(int j = 0;j<x;j++)
    //        cout<<vec[i][j]<<" ";
       // cout<<endl;
    }

    x = vpair.size();

    for(int i = 0;i<x;i++){
        if(com[vpair[i].first] != com[vpair[i].second])
            insert_dag(com[vpair[i].first],com[vpair[i].second]);
    }

    x = cover.size();

    for(int i=0;i<x;i++)
    {
        covdag[com[cover[i]]] =1;
        if(find(coverdag.begin(),coverdag.end(),com[cover[i]]) != coverdag.end() )
            ;
        else
            coverdag.push_back(com[cover[i]]);  
    }

    sizedag = coverdag.size();
    //printf("%d\n",sizedag);

    for(int i=0;i<sizedag;i++)
    {
        flag=0;
        reset(sizedag);
        ve.push_back(coverdag[i]);
        //vt[coverdag[i]]=1;
        dfsyo(coverdag[i]);
        if(flag==1)
            break;
    }

    if(flag==1)
    {
        int size = ve.size();
       // printf("fkjbsd %d\n",size);
        for(int i=0;i<size;i++)
        {
            if(covdag[i]==1)
            {
                int x = vec[i].size();
                for(int j=0;j<x;j++)
                    if(cov[vec[i][j]]==1)
                        printf("%d ",vec[i][j]);
            }
        }
    }
    else
        printf("-1");

    printf("\n");


    //for(int i=0;i<x;i++)
    //{
     //   printf("%d ",coverdag[i]);
    //}
    //printf("\n");
   // print();
    }
    return 0;
}

