struct Data{
    int u,w;
    bool operator<(const Data&rhs) const
    { 
        return w>rhs.w;
    }
};

int sol(int s, int e){
    memset(d,0x3f,sizeof(d));//INF版的memset
    memset(vis,0,sizeof(vis));
    d[s] = 0;
    priority_queue<Data> pq;
    pq.push(Data{s,0});
    
    while(!pq.empty()){
        Data k = pq.top();
        pq.pop();
        int ss = k.s;
        if(ss==e) return d[ss];
        if(vis[ss]) continue;
        vis[ss] = 1;
        
        for(int i=0; i<G[ss].size(); i++){
            int u = G[ss][i].first, w = G[ss][i].second;
            if(w>rr) continue;
            if(d[u][rr-w]>d[ss][rr]){
                d[u][rr-w] = d[ss][rr];
                pq.push(Data{u,rr-w,d[u][rr-w]});
            }
        }

    }
    return -1;
}