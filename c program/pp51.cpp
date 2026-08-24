#include<stdio.h>
#define MAX 10
int adj[MAX][MAX];
int visited[MAX];
int n;
void dfs(int v){
    printf("%d",v);
    visited[v]=1;
    for(int i=0;i<n;i++){
        if(adj[v][i]==1&&visited[i]==0){
            dfs(i);
        }
    }
}
void bfs(int start){
    int queue[MAX],front=0,rear=0;
    queue[rear++]=start;
    visited[start]=1;
    while(front<rear){
        int v=queue[front++];
        printf("%d",v);
        for(int i=0;i<n;i++){
            if(adj[v][i]==1&&visited==0){
                queue[rear++]=i;
                visited[i]=1;
            }
        }
    }
}
int main(){
    int start;
    printf("Number of vertices:");
    scanf("%d",&n);
    printf("enter adjacency matrix:\n");
    for(int i=0;i<n;i++){
        visited[i]=0;
        for(int j=0;j<n;j++){
            scanf("%d",&adj[i][j]);

        }
    }
    printf("Starting vertex:\n");
    scanf("%d",&start);
    printf("DFS Travesal:\n");
    dfs(start);
    for(int i=0;i<n;i++)
        visited[i]=0;
    printf("\nBFS Traversal:");
    bfs(start);
    return 0;
}
