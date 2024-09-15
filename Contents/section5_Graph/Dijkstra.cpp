struct Data{
    int u,w;
    bool operator<(const Data&rhs) const
    { 
        return w>rhs.w;
    }
};

void sol(int s){
    memset(d,0x3f,sizeof(d));
    memset(vis,0,sizeof(vis));
    d[s] = 0;
    priority_queue<Data> pq;
    pq.push(Data{s,0});
    
    while(!pq.empty()){
        Data k = pq.top();
        pq.pop();
        int u = k.u;
        if(vis[u]) continue;
        vis[u] = 1;
        
        for(int i=0; i<G[u].size(); i++){
            int v = G[u][i].first, w = G[u][i].second;
            if(d[v]>d[u]+w){
                d[v] = d[u] + w;
                pq.push(Data{v,d[v]});
            }
        }
    }
}