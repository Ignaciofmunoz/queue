#include <iostream>
#include <Cassert>
//#include "C:\Users\nacho\Desktop\multiarchivos queue\cola continua\queuecont.h"
#include "C:\Users\nacho\Desktop\multiarchivos queue\colaenlazada\queuepointer.h"
#define SIZE 15
using namespace std;

int main()
{
using namespace Queue;
using::Queue::Nodo;
using::Queue::Queue;
Queue q ;//nota al profesor : aca el compilador me advierte de que la referencia es ambigua
cout<<"se carga  la cola "<<endl;
for(int i=0;i<SIZE;i++)
{
   Enq(q,i);
   assert((Deq(q))==i);
   Enq(q,i);
}
CoutQueue(q);
cout<<"se desencolan todos los elementos "<<endl<<endl;
for(int i=0;i<SIZE;i++)//probar con 15
{
   cout<<"se desencola:\t"<<Deq(q)<<endl;
}
assert(IsEmpty(q));
CoutQueue(q);
cout<<endl<<"se encolan el 1, 46,126 y 6232"<<endl<<endl;
Enq(q,1);
assert((Deq(q)==1));
Enq(q,1);
Enq(q,46);
Enq(q,126);
assert((Deq(q)==126));
Enq(q,126);
Enq(q,6232);
CoutQueue(q);
cout<<"se desencola dos(2) veces"<<endl<<endl;
assert(Deq(q)==1);
Enq(q,1);
cout<<"se desencola:\t"<<Deq(q)<<endl;
cout<<"se desencola:\t"<<Deq(q)<<endl<<endl;
CoutQueue(q);
cout<<"se desencola dos(2) veces mas "<<endl<<endl;
cout<<"se desencola:\t"<<Deq(q)<<endl;
cout<<"se desencola:\t"<<Deq(q)<<endl<<endl;
CoutQueue(q);
assert(IsEmpty(q));
cout<<"----FIN DEL TEST"<<endl;
return 0;
}


