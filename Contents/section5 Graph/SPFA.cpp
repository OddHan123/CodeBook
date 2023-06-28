#define N 1005
#define MP make_pair
typedef pair<int,int> PII;

int n,m;
int dis[N],cnt[N];
vector<PII> G[N];
bool inq[N];

bool SPFA(){
    memset(dis,0x3f,sizeof(dis));
    memset(inq,false,sizeof(inq));
    memset(cnt,0,sizeof(cnt));

    queue<int> Q;
    dis[0] = 0;
    Q.push(0);
    inq[0] = true;
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        inq[u] = false;
        for(int i=0; i<G[u].size(); i++){
            int v = G[u][i].first, w = G[u][i].second;
            if(dis[v]>dis[u]+w){
                dis[v] = dis[u] + w;
                if(!inq[v]){
                    if(++cnt[v]>=n)//如果鬆弛超過n次，代表有負環
                        return true;
                    inq[v] = true;
                    Q.push(v);
                }
            }
        }
    }
    return false;
}