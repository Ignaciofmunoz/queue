#include <iostream>
#include <fstream>
#include "queue.h"
#define cutnum 30000000
#define maxprocedures 5
using namespace std;
using namespace Queue;

Queue::Queue q ;
void CargarDNIs(Queue::Queue&q)
{
    ifstream in("DNI.txt");
    for(int  dni; in >> dni ;)
        Enq(q,dni);
}
void Reorgxnum(Queue::Queue&q,Queue::Queue&qhigh,Queue::Queue&qless)
{
    while(not IsEmpty(q))
    {
        int num= Deq(q);
        if(num>=cutnum)
            Enq(qhigh,num);
        else
            Enq(qless,num);
    }
}
void Reorgxord(Queue::Queue&q,Queue::Queue&qtod,Queue::Queue&qtom){
    int aux;
for(int i=0;i<maxprocedures;i++){
     aux =Deq(q);
    Enq(qtod,aux);
}while(not IsEmpty(q)){
    aux =Deq(q);
    Enq(qtom,aux);
}
}

int main()
{
    Queue::Queue q,qless,qhigh,qltod,qltom,qhtod,qhtom;
    CargarDNIs(q);
    cout<<"Estos son los turnos entregados en el dia de la fecha "<<endl<<endl;
    cout<<"NOTA:Por la naturaleza del tramite solo se atienden  "<<maxprocedures <<"  turnos al dia."<<endl;
    cout<<"(El resto de los tramites seran realizados mañana )"<<endl<<endl;
    CoutQueue(q);
    cout<<"Los tramites de DNI's superiores a "<<cutnum<<" \n se realizan"
    " en la oficina #1, los inferiores en la  #2"<<endl<<endl;
    Reorgxnum(q,qless,qhigh);
    cout<<"Turnos a tramitar en la oficina #1 "<<endl<<endl;
    CoutQueue(qless);
    cout<<"Turnos a tramitar en la oficina #2"<<endl<<endl;
    CoutQueue(qhigh);
    Reorgxord(qless,qltod,qltom);
     Reorgxord(qhigh,qhtod,qhtom);
 cout<<"Turnos a tramitar en la oficina #1 hoy"<<endl<<endl;
    CoutQueue(qltod);
    cout<<"Turnos a tramitar en la oficina #2 hoy"<<endl<<endl;
    CoutQueue(qhtod);
cout<<"Turnos a tramitar en la oficina #1 mañana"<<endl<<endl;
    CoutQueue(qltom);
    cout<<"Turnos a tramitar en la oficina #2 mañana"<<endl<<endl;
    CoutQueue(qhtom);

}
