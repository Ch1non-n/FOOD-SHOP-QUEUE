#ifndef queue_h
#define queue_h

typedef struct queue{

    nodePtr headPtr, tailPtr;
    int size;

}queue;

void enqueue(queue *q, int order_number, int quantity);
int dequeue(queue *q);


void enqueue(queue *q, int order_number, int quantity){

    nodePtr new_order = (nodePtr)malloc(sizeof(NODE));
    if(new_order){

        new_order->order_number = order_number;
        new_order->quantity = quantity;

        new_order->nextPtr = NULL;
        if(q->size == 0) q->headPtr = new_order;
        else q->tailPtr->nextPtr = new_order;

        q->tailPtr = new_order;
        q->size++;
    }
}

int dequeue(queue *q){

    nodePtr temp = q->headPtr;
    if(temp){
        int quantity = q->headPtr->quantity;
        int order_number = q->headPtr->order_number;
        int price;

        switch(order_number){
            case 1: price = 120 * quantity; break;
            case 2: price = 45 * quantity; break;
            case 3: price = 20 * quantity; break;
        }

        q->headPtr = q->headPtr->nextPtr;
        if(q->size == 1) q->tailPtr = q->tailPtr->nextPtr;
        free(temp);
        q->size--;
        return price;
    }
    printf("the queue is empty\n");
    return 0;
}

#endif