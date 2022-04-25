#include <stdio.h>
#include <conio.h>

typedef int angka;
typedef float pecahan;
typedef char huruf;

void main()
{
    //clrscr();
    angka umur;
    pecahan pecah;
    huruf h;
    huruf nama[10];

    printf("Masukkan umur Anda: "); scanf("%d", &umur);
    printf("\nUmur Anda adalah %d", umur);

    printf("\nMasukkan bilangan pecahan: "); scanf("%f", &pecah);
    printf("\nBilangan pecahan yang kamu inputkan adalah %f", pecah);

    //printf("\nMasukkan sebuah huruf: ");
    //h=getche();
    //printf("\nHuruf yang Anda inputkan adalah %c", h);

    printf("\nSiapakah nama Anda: "); scanf("%s", nama);
    printf("\nHai %s!", nama);

    getch();
}
