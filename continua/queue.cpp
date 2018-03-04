#include <iostream>
#include "queue.h"
using namespace std;
namespace Queue{
void Enq(Queue&q,int val)
{
    if(IsFull(q)==false){
        q.a.at(q.f)=val;
        Increase(q.f);
        q.e++;}
}
int Deq(Queue&q)
{    if(IsEmpty(q)==false)
    {
        int aux=q.a.at(q.b);
        Increase(q.b);
        q.e--;
        return aux;}
}
void CoutQueue(Queue&q)
{
    if(IsFull(q))
    {
        int a=q.b;//como esta llena los indices son iguales
        int z=q.f;
        Decrease(z);
        cout<<q.a.at(a)<<endl;
        do
        {Increase(a);
            cout<<q.a.at(a)<<endl;}while(a!=z);
    }
    else
    {
        if( not IsEmpty(q))
        {
            for(int i=q.b; i<q.f; Increase(i))
            {
                cout<<q.a.at(i)<<endl;
            }
        }
    }
    cout<<endl;
}
bool IsEmpty(Queue&q)
{
    if ((q.e)==0)
       return true;
    else
        return false;
}
void Increase(int& n)
{
    if (n==SIZE-1)
        n= 0;
    else
        n++;
}
void Decrease(int& n)
{
    if (n==0)
        n= SIZE-1;
    else
        n--;
}
bool IsFull(Queue&q)
{
    if (q.e==SIZE)
        return true;
    else
        return false;
}
}

