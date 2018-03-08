#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

namespace Queue
{
struct Nodo
{
    int dni;
    Nodo *next;
};
struct Queue
{
    Nodo *f=NULL;
    Nodo *b=NULL;
};
void Enq(Queue&,int);
int Deq(Queue&);
void CoutQueue(Queue&);
bool IsEmpty(const Queue&);
}
#endif // QUEUE_H_INCLUDED
