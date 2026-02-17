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

    int profit = 0;
    int cutomer_count = 1;
    for(int i = 1; i < argc; i++){
        if(strcmp(argv[i], "x") == 0){
            int price = dequeue(&q);

            printf("Cutomer no : %d\n", cutomer_count++);
            printf("You have to pay : %d\n", price);

            int cash;
            while(1){

                printf("cash : ");
                scanf("%d", &cash);
                if(cash >= price) break;
                else printf("Insufficient money\n");
            }

            int change = cash - price;
            printf("change : %d\n", change);
            profit += change;
        }
        else{

            switch(atoi(argv[i])){
                case 1: 
                    enqueue(&q, atoi(argv[i]), atoi(argv[i+1]));
                    printf("My order is : %d\n", atoi(argv[i]));
                    break;
                case 2:
                    enqueue(&q, atoi(argv[i]), atoi(argv[i+1]));
                    printf("My order is : %d\n", atoi(argv[i]));
                    break;
                case 3:
                    enqueue(&q, atoi(argv[i]), atoi(argv[i+1]));
                    printf("My order is : %d\n", atoi(argv[i]));
                    break;
                default : printf("No Food\n");
            }
            i++;
            
        }
    }

    if(q.size != 0) printf("There are %d people left in the queue", q.size);
    return 0;
}