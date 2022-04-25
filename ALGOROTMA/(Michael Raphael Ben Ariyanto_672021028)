#include <stdio.h>
#include <stdlib.h>

struct isi
{
    char perusahaan[10], namabarang[10];
    int beratbarang, stok, harga;

} data;

void main()
{

    int pilihan;
    
menu:
    printf("***** Data barang *****\n");
    printf("1. isi data\n");
    printf("2. lihat data\n");
    printf("3. selesai\n");
    printf("pilihan menu : ");
    scanf("%d", &pilihan);

    if (pilihan == 1)
    {
        // system("clear");
        printf("***** menu 1 : isi data *****\n");
        printf("Perusahaan\t: ");
        scanf("%s", data.perusahaan);
        printf("Nama Barang\t: ");
        scanf("%s", data.namabarang);
        printf("berat Barang (Kg)\t: ");
        scanf("%d", &data.beratbarang);
        printf("Harga\t: ");
        scanf("%d", &data.harga);
        printf("stok barang\t: ");
        scanf("%d", &data.stok);
        goto menu;
    }
    else if (pilihan == 2)
    {
        // system("clear");
        printf("***** menu 2 : lihat data *****");
        printf("\nperusahaan    : %s", data.perusahaan);
        printf("\nnama barang   : %s", data.namabarang);
        printf("\nberat barang  : %d Kg", data.beratbarang);
        printf("\nharga         : Rp.%d", data.harga);
        printf("\nstok barang   : %d", data.stok);
        printf("\n");
        goto menu;
    }
    else
    {
        printf("BYE!");
        system("pause");
    }
   
    
    
   
}
