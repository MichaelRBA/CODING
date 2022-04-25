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
    printf("Masukkan jumlah data: ");
    scanf("%d",&j);

    for (i=0; i<j; i++)

    {
        node = (struct tnode *)malloc (sizeof(struct tnode));
        node -> data = i;

        if (head == NULL)
        {
            printf("Angka Inputan: ");
            scanf("%d",node);
			head = node;
            curr = node;
        }
        else
        {
            printf("Angka Inputan: ");
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
