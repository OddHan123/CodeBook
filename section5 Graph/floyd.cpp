//N為點的個數，G為記錄路徑長的二維振烈
for(int k=0; k<N; k++){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
        }
    }
}