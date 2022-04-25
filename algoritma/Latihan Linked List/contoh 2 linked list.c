#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*next;
};

typedef struct node node_t;

void tampil(node_t*start)
{
    node_t *awal = start;
    while(awal != NULL){
        printf("%d -",awal->data);
        awal = awal->next;
    }
    printf("\n");
}
int main()
{
    node_t a1,a2,a3;
    node_t *start;

    a1.data = 25;
    a2.data = 35;
    a3.data = 20;

    //bikin supaya terhubung
    start = &a1;
    a1.next = &a2;
    a2.next = &a3;
    a3.next = NULL;

    tampil(start);
}
