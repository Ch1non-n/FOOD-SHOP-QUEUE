#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "node.h"
#include "queue.h"

int main(int argc, char **argv){

    queue q;
    q.headPtr = NULL, q.tailPtr = NULL;
    q.size = 0;

    printf("====== Menu list ======\n");
    printf("   1.Ramen 120 baht\n");
    printf("   1.Miso  45 baht\n");
    printf("   1.Sushi 20 baht\n");
    printf("=======================\n");

    int cutomer_count = 0;
    for(int i = 1; i < argc; i++){
        if(strcmp(argv[i], "x") == 0){
            cutomer_count++;
        }
        else{

            switch(atoi(argv[i])){
                case 1: 
                    enqueue(&q, atoi(argv[i+1]));
                    printf("My order is : %d\n", atoi(argv[i]));
                    break;
                case 2:
                    enqueue(&q, atoi(argv[i+1]));
                    printf("My order is : %d\n", atoi(argv[i]));
                    break;
                case 3:
                    enqueue(&q, atoi(argv[i+1]));
                    printf("My order is : %d\n", atoi(argv[i]));
                    break;
                default : printf("No Food");
            }
            i++;
            
        }
    }


    
    return 0;
}