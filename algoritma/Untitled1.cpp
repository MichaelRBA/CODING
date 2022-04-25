#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct tnode
    {
        int data;
        struct tnode* next;
    };


    struct tnode *head=NULL,*curr=NULL, *node=NULL;
    int i,j;
    printf("Masukkan jumlah data yang akan diinputkan : ");
    scanf("%d",&j);

    for (a=0; a<j; a++)

    {
        node = (struct tnode *)malloc (sizeof(struct tnode));
        node -> data = a;

        if (head == NULL)
        {
            printf("Inputan: ");
            scanf("%d",node);
			head = node;
            curr = node;
        }
        else
        {
            printf("Inputan: ");
            scanf("%d",node);
            curr -> next = node;
            curr = node;
        }
    }

    curr -> next = NULL;
    curr = head;


    while (curr != NULL)
    {
        printf("%d ", curr ->data );
        curr = curr -> next;
    }

    printf("\n");
}

