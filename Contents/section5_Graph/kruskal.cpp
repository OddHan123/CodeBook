#define maxn 200005
#define MP make_pair
int N,M;
int par[maxn],Rank[maxn];
vector<pair<int,int>> G[maxn*2];//雙向邊，所以X2

struct edge{
    int x,y,w;
    bool operator<(const edge& rhs) const{
        return w<rhs.w;
    }
}e[maxn*2];//雙向邊，所以X2

int Find(int a){
    return par[a]==a?a:(par[a] = Find(par[a]));
}

bool Union(int a, int b){
    a = Find(a);
    b = Find(b);
    if(a==b) return false;
    int tmp = Rank[a] + Rank[b];
    if(Rank[a]>=Rank[b]){
        Rank[a] = tmp;
        par[b] = a;
    }
    else{
        par[a] = b;
        Rank[b] = tmp;
    }
    return true;
}

int kruskal(){
    for(int i=0; i<N; i++){
        G[i].clear();
        par[i] = i;
        Rank[i] = 1;
    }
    int m = 0, tot = 0;
    for(int i=0,u,v,w; i<M; i++){
        scanf("%d %d %d",&u,&v,&w);
        e[m++] = edge{u,v,w};
        e[m++] = edge{v,u,w};
        tot += w;
    }
    sort(e,e+m);

    int mst = 0, cost = 0;
    for(int i=0,u,v,w; i<m; i++){
        u = e[i].x;
        v = e[i].y;
        w = e[i].w;
        if(Union(u,v)){
            cost += w;
            mst++;
            G[u].push_back(MP(v,w));
            G[v].push_back(MP(u,w));
        }
        if(mst==N-1)
            break;
    }
    return cost;
}