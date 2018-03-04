#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <array>
#define SIZE 15
using namespace std;
namespace Queue{
struct Queue
{
    std::array<int,SIZE>a;
    int f=0;
    int b=0;
    int e=0; //cantidad de elementos cargados
};
void Enq(Queue&,int);
int Deq(Queue&);
void CoutQueue(Queue&);
bool IsEmpty(Queue&);
bool IsFull(Queue&);
void Increase(int& );
void Decrease(int& );
}
#endif // QUEUECONT_H_INCLUDED
