#include <header.h>

int main()
{
    char nim[9];
    mahasiswa mhs;
    do{
    printf("======INPUT DATA MAHASISWA=======");
    printf("NIM Mahasiswa  :  ");
    scanf("%d",&mhs.nim);
    system("cls");
    printf("====== Nilai Mahasiswa======");
    printf("\n Nilai Kuis    : ");
    scanf("%d",,&mhs.kuis);
    printf("\n Nilai TTS    : ");
    scanf("%d",,&mhs.tts);
    printf("\n Nilai TAS    : ");
    scanf("%d",,&mhs.tas);
    system("cls");
    cetak(mhs);
    printf("\n Mahasiswa Lainya (y/n) : ");
    scanf("%s,&mhs.pilihan");
    system("cls");
    }while(strcmp(mhs.pilihan,"n")==1;

    return 0;

