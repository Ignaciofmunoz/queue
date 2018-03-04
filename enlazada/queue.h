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
    Nodo *f;
    Nodo *b;
};


void Enq(Queue&,int);
int Deq(Queue&);
void CoutQueue(Queue&);
bool IsEmpty(const Queue&);
void DeleteQueue( Queue&);

}
#endif // QUEUE_H_INCLUDED
