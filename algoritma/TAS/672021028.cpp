#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK 5
#define MAX 3

struct node
{
    int data;
    struct node *next;
};
struct node *head;
void awal()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n aman cok");
    }
    else
    {
        printf("masukkan data: \n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\ndata berhasil disimpan di node awal\n");
    }
}
void akhir()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\n aman cok");
    }
    else
    {
        printf(" masukkan data: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("berhasil disimpan di NODE Akhir\n");
        }
        else
        {
            temp = head;
            while (temp->next = NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("berhasil disimpan\n");
        }
    }
}
void sembarang()
{
    int i, lokasi, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("masukan data: ");
        scanf("%d", &item);
        ptr->data = item;
        printf("mau simpan dimana oi: ");
        scanf("%d", &lokasi);
        temp = head;
        for (i = 0; i < lokasi; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("tiddak dapat disimpan");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNODE berhasil disimpan\n");
    }
}
void lihat()
{

    {
        struct node *ptr;
        ptr = head;
        if (ptr == NULL)
        {
            printf("tidak ada data");
        }
        else
        {
            printf(" data yang tersimpan: ");
            while (ptr != NULL)
            {
                printf("%d - ", ptr->data);
                ptr = ptr->next;
            }
            printf("\n");
        }
    }
}
typedef struct
{
    int top;
    char data[5][5];
} STACK;

STACK tumpuk;
void inisialisasi()
{
    tumpuk.top = -1;
}

int IsFull()
{
    if (tumpuk.top == MAX_STACK - 1)
        return 1;
    else
        return 0;
}

int IsEmpty()
{
    if (tumpuk.top == -1)
        return 1;
    else
        return 0;
}

void Push(char d[5])
{
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top], d);
}

void Pop()
{
    printf("Data yang diambil = %s\n", tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}

void CetakStack()
{
    for (int i = tumpuk.top; i >= 0; i--)
    {
        printf("Data = %s\n", tumpuk.data[i]);
    }
}

void Clear()
{
    tumpuk.top = -1;
}

typedef struct
{
    int data[MAX];
    int head;
    int tail;
} Queue;

Queue antrian;

void Awal()
{
    antrian.head = antrian.tail = -1;
}

int Kosong()
{
    if (antrian.tail == -1)
        return 1;
    else
        return 0;
}

int Penuh()
{
    if (antrian.tail == MAX - 1)
        return 1;
    else
        return 0;
}

int Enqueue(int data)
{
    system("clear");
    if (Kosong() == 1)
    {
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail] = data;
        printf("%d masuk!\n", antrian.data[antrian.tail]);

        void Tampil();
        {
            if (Kosong() == 0)
            {
                for (int i = antrian.head; i <= antrian.tail; i++)
                {
                    printf("%d ", antrian.data[i]);
                }
            }
            else
                printf("Isi antrian kosong!");
        }
    }
    else if (Penuh() == 0)
    {
        antrian.tail++;
        antrian.data[antrian.tail] = data;
        printf("%d masuk!\n", antrian.data[antrian.tail]);
    }
}

int Dequeue()
{
    int antri = antrian.data[antrian.head];
    for (int i = antrian.head; i <= antrian.tail; i++)
    {
        antrian.data[i] = antrian.data[i + 1];
    }
    antrian.tail--;
    return antri;
}

void Tampil()
{
    if (Kosong() == 0)
    {
        for (int i = antrian.head; i <= antrian.tail; i++)
        {
            printf("%d ", antrian.data[i]);
        }
    }
    else
        printf("Tidak ada data dalam antrian!");
}

void Hapus()
{
    antrian.head = antrian.tail = -1;
    printf("Data sudah dibersihkan!\n");
}
int main()
{
    int pil;
    int pilihan = 0;
    inisialisasi();
    char dt[5];
    int data;
    do
    {
        printf("1. linked-list\n");
        printf("2. Stack\n");
        printf("3. Queue\n");
        printf("pilihan anda    : ");
        scanf("%d", &pil);
        switch (pil)
        {
        case 1:
        system("clear");
            while (pilihan != 5) 
            {
                printf(" ==== MENU LINKED LIST ====");
                printf("\n ==========================");
                printf("\n 1. input data di node awal\n 2. input data di node akhir \n 3. input data di node sembarang\n 4. lihat data dlm linked list\n 5. keluar");
                printf("\n pilihan: ");
                scanf("%d", &pilihan);

                switch (pilihan)
                {
                case 1:
                    awal();
                    break;

                case 2:
                    akhir();
                    break;

                case 3:
                    sembarang();
                    break;

                case 4:
                    lihat();
                    break;
                case 5:
                system("clear");
                    main();
                    break;

                default:
                    printf("silahkan masukkan pilihanmu");
                    break;
                }
            }
            break;
        case 2:
        system("clear");
            do
            {
                printf("1. Push\n");
                printf("2. Pop\n");
                printf("3. Cetak isi array stack!\n");
                printf("4. Hapus isi array stack!\n");
                printf("5. Keluar\n");
                printf("Pilihan anda? ");
                scanf("%d", &pilihan);

                switch (pilihan)
                {
                case 1:
                    if (IsFull() != 1)
                    {
                        printf("Data yang ingin diinput = ");
                        scanf("%s", dt);
                        Push(dt);
                    }
                    else
                        printf("Stack sudah penuh!");
                    break;

                case 2:
                    if (IsEmpty() != 1)
                        Pop();
                    else
                        printf("Stack masih kosong!\n");
                    break;

                case 3:
                    if (IsEmpty() != 1)
                        CetakStack();
                    else
                        printf("\n Tidak ada data. \n");
                    break;

                case 4:
                    Clear();
                    printf("Data dihapus.\n");
                    break;
                case 5:
                    system("clear");
                    main();
                }

            } while (pilihan != 5);
            printf("Keluar dari program...\n");
            break;

        case 3:
        system("clear");
            Awal();
            do
            {
                printf("\n");
                printf("1. MasukSatuData\n");
                printf("2. KeluarSatuData\n");
                printf("3. Lihat isi antrian\n");
                printf("4. Hapus isi antrian\n");
                printf("5. Keluar\n");
                printf("Pilihan Anda? ");
                scanf("%d", &pilihan);
                switch (pilihan)
                {
                case 1:
                    printf("Data = ");
                    scanf("%d", &data);
                    Enqueue(data);
                    break;
                case 2:
                    printf("Data yang keluar: %d", Dequeue());
                    break;
                case 3:
                    Tampil();
                    break;
                case 4:
                    Hapus();
                    break;
                case 5:
                    system("clear");
                    main();
                }
            } while (pilihan !=6);
            break;
        default:
            break;
        }
    } while (pil != 3);
}
