/*
    Biblioteca que implementa uma estrutura de dados do tipo Lista Simplesmente Encadeada (C++11)
*/
#include <iostream>
#include <new>

// Representa o tipo de dados correspondente a cada um dos nodos de uma lista encadeada.
// Armazena uma string e um ponteiro para o próximo nodo da lista
struct nodolista {
    std::string info;       // INFO
    nodolista *elo;     	// ELO
};


// Representa o tipo de dados correspondente a uma lista encadeada.
// Armazena ponteiros para os nodos no incício e no final da lista, assim como o seu tamanho (quantidade de nodos)
struct lista {
    nodolista *inicio = nullptr, // Ponteiro para o primeiro nodo armazenado na lista (nullptr se vazia)
               *fim = nullptr;   // Ponteiro para o último nodo armazenado na lista (nullptr se vazia)
    int tamanho = 0;      // Quantidade de nodos contidos na lista
};


// Insere no início da lista l uma cópia da string passada em s e atualiza o tamanho da lista.
// Retorna false se a alocação falhou ou true se teve sucesso.
bool lista_insere_inicio(lista &l, std::string s)
{
    nodolista *novo;
    novo = new (std::nothrow) nodolista;
    if(novo == nullptr) return false;

    novo->info = s;
    novo->elo = l.inicio;
    l.inicio = novo;
    if(l.fim == nullptr) l.fim = novo;
    l.tamanho++;
    return true;
}


// Insere no fim da lista l uma cópia da string passada no parâmetro s e atualiza o tamanho da lista.
// Retorna false se a alocação falhou ou true se teve sucesso.
bool lista_insere_fim(lista &l, std::string s)
{
    nodolista *novo = new(std::nothrow) nodolista;
    if(novo == nullptr) return false;

    novo->info = s;
    novo->elo = nullptr;
    if(l.inicio == nullptr)
        l.inicio = l.fim = novo;
    else {
        l.fim->elo = novo;
        l.fim = novo;
    }
    l.tamanho++;
    return true;
}

// Retira todos os elementos da lista
void lista_esvazia(lista &l)
{
    nodolista *aux = l.inicio;
    while(aux != nullptr) {
        l.inicio = l.inicio->elo;
        delete aux;
        aux = l.inicio;
    }
    l.inicio = l.fim = nullptr;
    l.tamanho = 0;
}


// Retorna true se o valor passado no parâmetro s existe na lista l, ou false em caso contrário
bool lista_consulta(lista l, std::string s)
{
    nodolista *aux = l.inicio;
    while(aux != nullptr) {
        if(aux->info == s) return true;
        aux = aux->elo;
    }
    return false;
}

// Se encontrar na lista l um nodo contendo o valor s, retira este nodo da lista
// libera a memória ocupada pelo nodo, atualiza o tamanho da lista e retorna true.
// Retorna false não encontre o valor na lista.
bool lista_retira(lista &l, std::string s)
{
    nodolista *p = l.inicio,          *ant = nullptr;

    while(p != nullptr) {         // Enquanto não alcançar o final da lista
        if(s == p->info) break;  // Se achou o valor, sai do laço
        ant = p;                  // O nodo atual passa a ser o anterior
        p = p->elo;               // E o próximo passa a ser o atual
    }
    if(p == nullptr)              // Se atingiu o final da lista sem encontrar
        return false;             // retorna falso

    if(l.inicio == l.fim)         // Retirada do único nodo
        l.inicio = l.fim = nullptr;
    else {
        if(p == l.inicio)         // Retirada do primeiro nodo
            l.inicio = l.inicio->elo;
        else ant->elo = p->elo;   // Retirada de um nodo intermediário
        if(p == l.fim)            // Retirada do último nodo
            l.fim = ant;
    }
    delete p;                     // Libera a memória
    l.tamanho--;                  // Atualiza o tamanho da lista
    return true;
}



// Exibe todos valores contidos na lista, um por linha.
void lista_mostra(lista l)
{
    nodolista *p = l.inicio;
    while(p != nullptr) {
        std::cout << p->info << std::endl;
        p = p->elo;
    }
}

//  A função deve contar e retornar a quantidade de nodos na lista cujo valor é igual ao fornecido no parâmetro s (0 se o valor não existir na lista)
int lista_conta_iguais(lista &l, std::string s)
{
    int n = 0;
    nodolista *p = l.inicio;
    while(p != nullptr) {
        if(p->info == s) n++;
        p = p->elo;
    }
    return n;
}

// Testa se a lista encadeada está em ordem crescente
// Retorna true se está ordenada.  Retorna false se não está.
// Considerar que uma lista vazia ou com um único valor está ordenada.
bool lista_esta_ordenada(lista l)
{
    if(l.tamanho < 2) return true;

    nodolista *p = l.inicio;
    while(p->elo != nullptr) {
        if(p->info > p->elo->info)
            return false;

        p = p->elo;
    }
    return true;
}

// Insere um valor ordenado na lista
// Retorna false se não inseriu, true se inseriu
bool lista_insere_ordenado_V1(lista &l, std::string s)
{
    nodolista *p = l.inicio, *ant = nullptr;
    while(p != nullptr) {
        if(p->info > s) break;

        ant = p;
        p = p->elo;
    }
    nodolista *novo = new(std::nothrow) nodolista;
    if(novo == nullptr) return false;
    novo->info = s;
    if(ant == nullptr) { // Antes do primeiro
        novo->elo = l.inicio;
        l.inicio = novo;
    } else {
        novo->elo = ant->elo;
        ant->elo = novo;
    }

    if(p == nullptr) l.fim = novo; // Após último

    l.tamanho++;
    return true;
}

bool lista_insere_ordenado(lista &l, std::string s)
{
    nodolista* novo = new (std::nothrow) nodolista;
    if(!novo) return false;     // bad alloc

    novo->info = s;    // Guarda o info no novo nodo
    if(!l.inicio) {     // Se a lista está vazia
        novo->elo = nullptr;
        l.inicio = l.fim = novo;
    } else if(s<=l.inicio->info) { // Insere antes do primeiro
        novo->elo = l.inicio;
        l.inicio = novo;
    } else if(s>=l.fim->info) { // Insere depois do último
        novo->elo = nullptr;
        l.fim->elo = novo;
        l.fim = novo;
    } else {                // Insere no meio
        nodolista *atual = l.inicio, *ant=nullptr;
        while(true) {
            if(s<atual->info) break;   // Achou um info maior, sai fora para inserir antes dele
            ant = atual;        // Senão avança na lista
            atual = atual->elo;
        }
        ant->elo = novo;        // O anterior aponta para o novo
        novo->elo = atual;      // O novo aponta para o próximo
    }
    l.tamanho++;
    return true;
}

// Insere um valor ordenado na lista, sem repetição
// Retorna false se não inseriu, true se inseriu
bool lista_insere_ordenado_nrep(lista &l, std::string s)
{
    nodolista *p = l.inicio, *ant = nullptr;
    while(p != nullptr) {
        if(p->info == s) return false;
        if(p->info > s) break;

        ant = p;
        p = p->elo;
    }
    nodolista *novo = new(std::nothrow) nodolista;
    if(novo == nullptr) return false;
    novo->info = s;
    if(ant == nullptr) { // Antes do primeiro
        novo->elo = l.inicio;
        l.inicio = novo;
    } else {
        novo->elo = ant->elo;
        ant->elo = novo;
    }

    if(p == nullptr) l.fim = novo; // Após último

    l.tamanho++;
    return true;
}

bool lista_igual(lista l1, lista l2)
{
    if(l1.tamanho != l2.tamanho) return false;
    nodolista *p1 = l1.inicio, *p2 = l2.inicio;

    while(p1 != nullptr) {
        if(p1->info != p2->info) return false;

        p1 = p1->elo;
        p2 = p2->elo;
    }

    return true;
}

void lista_copia_n(lista l1, lista &l2, int n)
{
    nodolista *aux = l1.inicio;
    if(n > l1.tamanho) n = l1.tamanho;

    while(n > 0) {
        lista_insere_fim(l2, aux->info);
        aux = aux->elo;
        --n;
    }
}


int lista_retira_todo_valor(lista &l, std::string s)
{
    int cont = 0;

    while(true) {
        if(lista_retira(l, s)) cont++;
        else break;
    }
    return cont;
}


void lista_transfere(lista &l1, lista &l2)
{
    if(!l2.inicio) return;                  // Se l2 estiver vazia, nada a fazer

    if(!l1.inicio)                          // Se l1 estiver vazia, o inicio dela será o início da l2
        l1.inicio = l2.inicio;
    else
        l1.fim->elo = l2.inicio;            // Senão, tem que "emendar" a l2 no final da l1

    l1.fim = l2.fim;                        // O fim da lista passa a ser o fim da l2
    l1.tamanho += l2.tamanho;               // O tamanho será a soma dos tamanhos das duas listas
    l2.inicio = l2.fim = nullptr;
    l2.tamanho = 0;
}

bool lista_possui_repetido(lista l)
{
    if(l.tamanho < 2) return false;             // Se tiver menos que dois valores não pode ter repetidos...

    nodolista *p1 = l.inicio;
    while(p1 != nullptr) {                      // Percorre toda a lista
        nodolista *p2 = p1->elo;
        while(p2 != nullptr) {                  // Percorre a lista iniciando no nopo após aquele apontado por p1
            if(p1->info == p2->info)          // Se achar valores iguais ao próximo, existem repetidos
                return true;                    // Finaliza

            p2 = p2->elo;                       // Avança p1 para o próximo nodo
        }
        p1 = p1->elo;                           // Avança p2 para o próximo nodo
    }
    return false;
}

bool lista_ordenada_possui_repetido(lista l)
{
    if(l.tamanho < 2) return false;         // Se tiver menos que dois valores não pode ter repetidos...

    nodolista *aux = l.inicio;
    while(aux->elo != nullptr) {               // Percorre a lista
        if(aux->info == aux->elo->info)   // Se achar um valor igual ao próximo, existem repetidos
            return true;                    // Finaliza

        aux = aux->elo;                     // Avança para o próximo nodo
    }
    return false;
}

bool lista_retira_pos(lista &l, int n, std::string &s)
{
    if(n < 0 || n >= l.tamanho) return false; // n fora do intervalo

    nodolista   *aux = l.inicio,    // Atual
                 *ant = nullptr;        // Anterior

    for(int i = 0; i < n; i++) {    // Percorre a lista até a posição n
        ant = aux;
        aux = aux->elo;
    }

    if(l.inicio == l.fim)               // Único nodo
        l.inicio = l.fim = nullptr;        // A lista ficou vazia
    else {
        if(aux == l.inicio)  l.inicio = l.inicio->elo; // Primeiro nodo
        else ant->elo = aux->elo;                   // Possui um nodo anterior
        if(aux == l.fim) l.fim = ant;               // Último nodo
    }
    s = aux->info;                                 // Copia o valor
    delete aux;                                     // Libera a memória ocupada pelo nodo retirado
    l.tamanho--;

    return true;
}


int lista_retira_meio(lista &l, std::string &s)
{
    if(l.tamanho == 0) return -1;

    nodolista *aux = l.inicio, *ant = nullptr;

    int n = l.tamanho / 2;
    if(l.tamanho % 2 == 0) n--;

    for(int i = 0; i < n; i++) {
        ant = aux;
        aux = aux->elo;
    }

    if(l.inicio == l.fim)   // Único nodo
        l.inicio = l.fim = nullptr;
    else {
        if(aux == l.inicio) // Primeiro nodo
            l.inicio = l.inicio->elo;
        else ant->elo = aux->elo;
        if(aux == l.fim) // Último nodo
            l.fim = ant;
    }
    s = aux->info;
    delete aux;
    l.tamanho--;
    return n;
}

std::string lista_consulta_meio(lista l)
{
    if(l.tamanho == 0) return ""; // Lista vazia

    nodolista *p {l.inicio};  // Partindo do início
    int meio {l.tamanho / 2};   // Calcula posição do meio
    if(l.tamanho % 2 == 0) meio--; // Se tamanho é par, meio é um antes

    for(int i = 0; i < meio; i++) // Percorre sequencialmente a lista até a posição do meio
        p = p->elo;

    return p->info;          // Retorna o valor nquela posição
}

int lista_retira_anteriores(lista &l, std::string s)
{
    if(l.tamanho == 0 || !lista_consulta(l, s))   // Se o valor não existe na lista
        return 0;                                       // nenhum nodo será retirado

    int cont {0};                                       // Contador de nodos que serão retirados
    while(l.inicio->info != s) {                       // Vai percorrer até achar o valor informado
        nodolista *p {l.inicio};                        // Guarda endereço do nodo inicial em um ponteiro auxiliar
        l.inicio = l.inicio->elo;                       // O nodo inicial passa a ser o próximo nodo
        delete p;                                       // Deleta o nodo inicial antigo
        cont++;                                         // Faz contagem de nodos retirados
    }
    l.tamanho -= cont;                                  // Atualiza o tamanho da lista
    return cont;                                        // Retorna a quantidade de nodos retirados
}


