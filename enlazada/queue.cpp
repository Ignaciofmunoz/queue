#include <iostream>
#include "queue.h"
using namespace std;

namespace Queue
{
void Enq(Queue&q,int val)
{
    Nodo *aux = new  Nodo();
    aux->dni= val;
    aux->next = NULL;
    if( IsEmpty(q))
        q.f = aux;   // encola el primero elemento
    else
    q.b->next = aux;
    q.b= aux;
}

int Deq(Queue&q)
{
    Nodo *aux;
    aux = q.f;      // aux apunta al inicio de la cola
    int num = aux->dni;
    q.f =(q.f)->next;
    delete(aux);          // libera memoria a donde apuntaba aux

    return num;
}
void DeleteQueue( Queue &q)
{
     Nodo *aux;
     while( not IsEmpty(q))
     { aux = q.f;
      q.f = aux->next;
      delete(aux);}
     q.f = NULL;
     q.b = NULL;

}
void CoutQueue(Queue&q)
{
    Nodo *aux;
    aux = q.f;

    while( aux != NULL )//porbar con !isemtpy
    {
        cout<< aux->dni<<endl;
        aux = aux->next;
    }
}

bool IsEmpty(const Queue&q)
{
    if (q.f == NULL)
        return true;
    else
        return false;
}
}
