#define N 105
int path[N],adj[N][N];

memset(adj,0,sizeof(adj));//建雙向邊
for(int i=0,u,v,w; i<c; i++){
    scanf("%d %d %d",&u,&v,&w);
    adj[u][v] += w;
    adj[v][u] += w;
}

int flow = 0;
while(true){
    memset(path,0,sizeof(path));
    queue<int> Q;

    path[s] = s;
    Q.push(s);
    while(!Q.empty() && !path[t]){//BFS找路徑
        int now = Q.front();
        Q.pop();
        for(int i=1; i<=n; i++){
            if(!path[i] && adj[now][i]>0){
                Q.push(i);
                path[i] = now;
            }
        }
    }

    if(!path[t])//完全沒有路到t就break
        break;
    int min_flow = 1e9;

    for(int from=path[t],to=t; from!=to; from=path[to=from]){//找最窄的路
        min_flow = min(min_flow,adj[from][to]);
    }

    for(int from=path[t],to=t; from!=to; from=path[to=from]){//更新該路徑所有邊的額度
        adj[from][to] -= min_flow;
        adj[to][from] += min_flow;
    }
    flow += min_flow;
}