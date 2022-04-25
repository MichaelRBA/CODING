#include <stdio.h>
#define MAX 3

typedef struct()
	int data{MAX};
	int head;
	int tail;
 Queue;

Queue antrian;

void awal()
{
	antrian.head=antrian.tail=-1;
}

int kosong()
{
	if(antrian.tail==-1)
		return 1;
	else
		return 0;
}

int penuh()
{
	if(antrian.tail==MAX-1)	
		return 1;
	else
		return 0;
}


void main()
{
	int pilihan;
	
	printf("\n");
	printf("1.MasukSatuData\n");
	printf("2.KeluarSatuData\n");
	printf("3.Lihat isi antrian\n");
	printf("4.Hapus isi antrian\n");
	printf("5.Quit Program\n");
	printf("Pilihan Anda?\n");
	scanf("%d",&pilihan);
}
