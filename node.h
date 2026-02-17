#ifndef node_h
#define node_h

struct node{
    
    int order_number, quantity;;
    struct node *nextPtr;
};

typedef struct node NODE;
typedef struct node *nodePtr;


#endif