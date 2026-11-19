 #include <stdio.h>
  2 int graph[10][10], visited[10], n;
  3
  4 void DFS(int v) {
  5
  6     visited[v] = 1;
  7     printf("%d ", v);
  8     for (int i = 1; i <= n; i++) {
  9     if (graph[v][i] == 1 && !visited[i]) {
 10     DFS(i);
 11         }
 12     }
 13 }
 14
 15 int main() {
 16
 17     int i, j, start;
 18
 19 printf("Enter number of vertices: ");
 20 scanf("%d", &n);
 21
 22 printf("Enter adjacency matrix:\n");
 23     for (i = 1; i <= n; i++) {
 24         for (j = 1; j <= n; j++) {
 25 scanf("%d", &graph[i][j]);
 26     }
 27 }
 28     for (i = 1; i <= n; i++)
 29     visited[i] = 0;
 30     printf("Enter starting vertex: ");
 31     scanf("%1d", &start);
 32     printf("DFS Traversal: ");
 33     DFS(start);
 34 return 0;
 35 }
~
~
~
