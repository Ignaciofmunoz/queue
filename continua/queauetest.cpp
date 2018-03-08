#include <iostream>
#include <Cassert>
#include "queue.h"

#define SIZE 15
using namespace std;
using namespace Queue;
Queue::Queue q ;
int main()
{
cout<<"se carga  la cola "<<endl;
for(int i=0;i<SIZE;i++)
{
   Enq(q,i);
}
cout<<"----La cola contiene"<<endl;
CoutQueue(q);
cout<<"se desencolan todos los elementos "<<endl<<endl;
for(int i=0;i<SIZE;i++)
{
   cout<<"se desencola:\t"<<Deq(q)<<endl;
}
//assert(IsEmpty(q));
cout<<"----La cola contiene"<<endl;
CoutQueue(q);
cout<<endl<<"se encolan el 1, 46,126 y 6232"<<endl<<endl;
Enq(q,1);
Enq(q,46);
Enq(q,126);
Enq(q,6232);
assert((Deq(q)==1));
assert((Deq(q)==46));
assert((Deq(q)==126));
assert((Deq(q)==6232));
Enq(q,1);
Enq(q,46);
Enq(q,126);
Enq(q,6232);
cout<<"----La cola contiene"<<endl;
CoutQueue(q);
cout<<"se desencola dos(2) veces"<<endl<<endl;
assert(Deq(q)==1);
Enq(q,1);
cout<<"se desencola:\t"<<Deq(q)<<endl;
cout<<"se desencola:\t"<<Deq(q)<<endl<<endl;
cout<<"----La cola contiene"<<endl;
CoutQueue(q);
cout<<"se desencola dos(2) veces mas "<<endl<<endl;
cout<<"se desencola:\t"<<Deq(q)<<endl;
cout<<"se desencola:\t"<<Deq(q)<<endl<<endl;
cout<<"----La cola contiene"<<endl;
CoutQueue(q);
//assert(IsEmpty(q));
cout<<"----FIN DEL TEST------"<<endl;
return 0;
}
