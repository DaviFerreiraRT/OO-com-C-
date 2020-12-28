#include <iostream>
using namespace std;

typedef struct No{
  int info;
  struct No* pte;
  struct No* ptd;
}No;

No* criarArvore(){

  No* no10 = (No*) malloc(sizeof(No));
  no10->info = 10;
  no10->pte = NULL;
  no10->ptd = NULL;

  No* no12a = (No*) malloc(sizeof(No));
  no12a->info = 8;
  no12a->pte = NULL;
  no12a->ptd = NULL;

  No* no3 = (No*) malloc(sizeof(No));
  no3->info = 1;
  no3->pte = NULL;
  no3->ptd = NULL;

  No* no11 = (No*) malloc(sizeof(No));
  no11->info = 11;
  no11->pte = NULL;
  no11->ptd = NULL;

  // //2 linha
  No* no5 = (No*) malloc(sizeof(No));
  no5->info = 7;
  no5->pte = no10;
  no5->ptd = no12a;

  No* no12 = (No*) malloc(sizeof(No));
  no12->info = 10;
  no12->pte = no3;
  no12->ptd = no11;

  //raiz linha
  No* raiz = (No*) malloc(sizeof(No));
  raiz->info = 5;
  raiz->pte = no5;
  raiz->ptd = no12;
  return raiz;
}
int main(void) {
  No* raiz = criarArvore();
};
