#define maxn 500+5
int A[maxn][maxn];
int guassian_elimination(int m, int n){
	int r,i,j,k,u;
	i=j=0;
	while(i<m && j<n){
		r=i;
		for(k=i; k<m; k++){//找為1的值
			if(A[k][j]){
				r=k;
				break;
			}
		}
		if(A[r][j]){
			if(r!=i){//換到first row
				for(k=0; k<n; k++)
					swap(A[r][k],A[i][k]);
			}
			for(u=i+1; u<m; u++){
//需要減時，該row才減第一個row
				if(A[u][j]){
					for(k=0; k<n; k++)
						A[u][k]^=A[i][k];
				}
			}
			i++;
		}
		j++;
	}
	return n-i;// free variable數量
}