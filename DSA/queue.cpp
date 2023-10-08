#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
void *enq(struct queue *q,int val)
{
    if(q->r==q->size-1)
    {
        cout<<"the queue is full";
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        cout<<val<<" ";
    }
    
}
int deq(struct queue *q)
{
    int a=-1;
    if(q->f==q->r)
    {
        cout<<"the array is empty";
    }
    else
    {
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
void *cir(struct queue *q,int val)
{
    if((q->r+1)%q->size==q->f)
    {
        cout<<"full hai bhaii";
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
    cout<<val<<" ";
}
int cd(struct queue *q)
{
    int a=-1;
    if(q->f==q->r)
    {
        cout<<"empty  broo";
    }
    else
    {
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}
int main()
{

    struct queue q;
    q.size=100;
    q.f=q.r=-0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    cir(&q,67);
    cir(&q,12);
    cir(&q,90);
    
    return 0;
    
    }

