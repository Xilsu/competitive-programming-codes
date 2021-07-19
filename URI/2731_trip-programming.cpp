/*
Luis Henrique Morelli
181027097
URI - 2731
Programação de Viagem

Resolução:

O exercícicio pede a construção de um algoritmo que define a melhor rota para
Valentina voltar para casa (nó 1) e descobrir se ela se atrasará para sua aula na 
faculdade, situada em um nó D, lido como entrada do programa. Podemos simplificar a 
situação em um problema de otimização, levando em consideração caminhos mínimos em um grafo. 
Para isso, sabemos que a aplicação do algoritmo de Dijkstra funciona bem como uma solução 
para o problema, o qual procura o menor caminho, ou seja, menor soma das arestas, de um nó
inicial para todos os demais, escolhendo a melhor solução local em cada etapa para atingir
a solução global ótima no final.
*/

#include <bits/stdc++.h>

using namespace std;

int dijkstra(vector<pair<int, int>> adjList[], int source, int n, int p[]){
    //Declaração do vetor das distância entre os nós
    int dist[n + 1];

    for(int i = 0; i <= n; i++){
        dist[i] = INT_MAX;
        p[i] = -1;
    }

    //Declaração da fila de prioridade para coordenar ordem de visita dos nós
    priority_queue<pair<int, int>> q;

    q.push({dist[source] = 0, source});

    //Enquanto a fila de prioridade não estiver vazia, processar os nós
    while(!q.empty()){
        //Declaração e atribuição do nó sendo visitado atualmente para a variável node
        int node = q.top().second;
        q.pop();

        //Visitar todas as arestas que saem de node e incidem em outro nó
        for(int i = 0; i < adjList[node].size(); i++){
            int to = adjList[node][i].first, w = adjList[node][i].second;
            
            //Verifica se a distância do nó atual até o nó destino é menor que a computada
            if(dist[to] > dist[node] + w){
                dist[to] = dist[node] + w;
                p[to] = node;

                q.push({-dist[to], to});
            }
        }
    }

    //Retorno do custo total da viagem
    return dist[1];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //Declaração da variável n (nº de vértices) e m (nº de arestas)
    int n, m;

    //Leitura do número de vértices e arestas enquanto ambos diferentes de zero
    while(cin >> n >> m){
        if(n == 0 && m == 0){
            break;
        }

        //Declaração da estrutura do grafo como lista de adjacência
        vector<pair<int, int>> adjList[n + 1];

        //Leitura das arestas e pesos que ligam os vértices do grafo bidirecionado
        for(int i = 0; i < m; i++){
            int a, b, w;

            cin >> a >> b >> w;

            adjList[a].push_back({b, w});
            adjList[b].push_back({a, w});
        }

        //Declaração e leitura da variável que indica a cidade onde a faculdade se encontra 
        int source;

        cin >> source;

        //Declaração do vetor de pais dos nós visitados para construção do caminho entre cidade e custo da viagem em tempo
        int parent[n + 1];
        int cost = dijkstra(adjList, source, n, parent);

        //Verificação se o custo da viagem levou mais de 2 horas
        if(cost > 120){
            cout << "It will be " << cost - 120 << " minutes late. ";
        }
        else{
            cout << "Will not be late. ";
        }

        cout << "Travel time - " << cost << " - best way -";
        
        //Impressão do melhor caminho para Valentina chegar a faculdade no menor tempo
        stack<int> s;

        source = 1;

        while(parent[source] != -1){
            s.push(parent[source]);

            source = parent[source];
        }

        while(!s.empty()){
            cout << " " << s.top();

            s.pop();
        }

        cout << " 1\n";
    }

    return 0;
}