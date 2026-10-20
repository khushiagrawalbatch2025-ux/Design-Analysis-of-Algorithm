#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define INF INT_MAX


typedef struct {
	int u;
	int v;
	int w;
} Edge;

void printPath(int parent[], int vertex) {
	if (parent[vertex] == -1) {
		printf("%d", vertex);
		return;
	}
	printPath(parent, parent[vertex]);
	printf("->%d", vertex);
}

int main() {
	int V, E;
	if (scanf("%d", &V) != 1) return 0;
	if (scanf("%d", &E) != 1) return 0;

	Edge* edges = (Edge*)malloc(E * sizeof(Edge));
	for (int i = 0; i < E; i++) {
		scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
	}

	int source;
	scanf("%d", &source);

	long long* dist = (long long*)malloc((V + 1) * sizeof(long long));
}
