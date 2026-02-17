#ifndef queue_h
#define queue_h

typedef struct queue{

    nodePtr headPtr, tailPtr;
    int size;

}queue;

void enqueue(queue *q, int quantity);
int dequeue(queue *q);


void enqueue(queue *q, int quantity){

    nodePtr new_order = (nodePtr)malloc(sizeof(NODE));
    if(new_order){

        new_order->nextPtr = NULL;
        if(q->size == 0) q->headPtr = new_order;
        else q->tailPtr->nextPtr = new_order;

        q->tailPtr = new_order;
        q->size++;
    }
}




#endif