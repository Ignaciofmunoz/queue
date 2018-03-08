#include <iostream>
#include "queaue.h"
using namespace std;

namespace Queue
{
void Enq(Queue&q,int val)
{
    Nodo *aux = new  Nodo();
    aux->dni= val;
    aux->next = NULL;
    if( IsEmpty(q))
        q.f = aux;   
    else
    q.b->next = aux;
    q.b= aux;
}

int Deq(Queue&q)
{
    Nodo *aux;
    aux = q.f;
    int num = aux->dni;
    q.f =(q.f)->next;
    delete(aux);

    return num;
}

void CoutQueue(Queue&q)
{
    Nodo *aux;
    aux = q.f;

    while( aux != NULL )
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
