#include <stdio.h>
#include <stdlib.h>

#define INF 1000000000

int proximo(int n, int dist[], int visitado[]) {
  int u = -1;
  for (int i = 0; i < n; i++)
    if (!visitado[i] && dist[i] < INF && (u == -1 || dist[i] < dist[u]))
      u = i;
  return u;
}

void dijkstra(int n, int **W, int origem, int dist[], int anterior[]) {
  int *visitado = calloc(n, sizeof(int));
  for (int i = 0; i < n; i++) {
    dist[i] = INF;
    anterior[i] = -1;
  }
  dist[origem] = 0;
  for (int passo = 0; passo < n; passo++) {
    int u = proximo(n, dist, visitado);
    if (u == -1)
      break;
    visitado[u] = 1;
    for (int v = 0; v < n; v++) {
      if (!visitado[v] && W[u][v] > 0 && dist[u] + W[u][v] < dist[v]) {
        dist[v] = dist[u] + W[u][v];
        anterior[v] = u;
      }
    }
  }
  free(visitado);
}

void imprimirCaminho(int n, int anterior[], int destino) {
  int *pilha = malloc(n * sizeof(int));
  int topo = 0;
  for (int v = destino; v != -1; v = anterior[v])
    pilha[topo++] = v;

  printf("(");
  for (int i = topo - 1; i >= 0; i--) {
    printf("%c", 'A' + pilha[i]);
    if (i > 0) printf(", ");
  }
  printf(")");
  free(pilha);
}

int contarColunas(const char *linha) {
  int cont = 0;
  const char *p = linha;
  char *fim;
  while (1) {
    strtol(p, &fim, 10);
    if (fim == p) break;
    cont++;
    p = fim;
  }
  return cont;
}

int main(int argc, char *argv[]) {
  const char *arquivo = (argc > 1) ? argv[1] : "grafo.txt";
  FILE *f = fopen(arquivo, "r");
  if (!f) {
    printf("Erro: nao foi possivel abrir '%s'\n", arquivo);
    return 1;
  }

  char linha[1024];
  if (!fgets(linha, sizeof(linha), f)) {
    printf("Erro: arquivo vazio.\n");
    fclose(f);
    return 1;
  }

  int n = contarColunas(linha);
  if (n < 1 || n > 26) {
    printf("Erro: matriz invalida (use de 1 a 26 vertices).\n");
    fclose(f);
    return 1;
  }

  rewind(f);
  int **W = malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++) {
    W[i] = malloc(n * sizeof(int));
    for (int j = 0; j < n; j++)
      if (fscanf(f, "%d", &W[i][j]) != 1) {
        printf("Erro: arquivo com dados insuficientes.\n");
        fclose(f);
        return 1;
      }
  }
  fclose(f);

  /* Mostra a matriz lida */
  printf("Matriz de adjacencia (%dx%d):\n    ", n, n);
  for (int j = 0; j < n; j++) printf("%c   ", 'A' + j);
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("%c   ", 'A' + i);
    for (int j = 0; j < n; j++) printf("%-4d", W[i][j]);
    printf("\n");
  }

  int *dist = malloc(n * sizeof(int));
  int *anterior = malloc(n * sizeof(int));

  char o, d;
  printf("\nVertice de origem (A-%c): ", 'A' + n - 1);
  scanf(" %c", &o);
  printf("Vertice de destino (A-%c): ", 'A' + n - 1);
  scanf(" %c", &d);

  int origem = o - 'A', destino = d - 'A';
  if (origem < 0 || origem >= n || destino < 0 || destino >= n) {
    printf("Vertice invalido.\n");
    return 1;
  }

  dijkstra(n, W, origem, dist, anterior);

  if (dist[destino] == INF) {
    printf("Nao existe caminho de %c ate %c.\n", o, d);
  } else {
    printf("\n1. Caminho minimo: ");
    imprimirCaminho(n, anterior, destino);
    printf("\n2. Distancia percorrida: %d\n", dist[destino]);
  }

  for (int i = 0; i < n; i++) free(W[i]);
  free(W);
  free(dist);
  free(anterior);
  return 0;
}