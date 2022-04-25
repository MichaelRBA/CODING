#include <stdio.h>
#include <conio.h>
#include <string.h>
#define maks 3
struct TMhs
{
      char NIM[9];
      char Nama[21];
      int NilaiQuis,NilaiTTS,NilaiTAS;
      float NilaiAkhir;
      char index;
};
main()
{
   TMhs mhs[maks]; // array struct
   int i;
   for(i=0;i<maks;i++)
   {
       printf("Pengisian Data Mahasiswa Ke-%i\n",i+1);
       printf("NIM        : ");fflush(stdin);gets(mhs[i].NIM);
       printf("NAMA       : ");fflush(stdin);gets(mhs[i].Nama);
       printf("Nilai QUIS : ");scanf("%d",&mhs[i].NilaiQuis);
       printf("Nilai TTS  : ");scanf("%d",&mhs[i].NilaiTTS);
       printf("Nilai TAS : ");scanf("%d",&mhs[i].NilaiTAS);
       mhs[i].NilaiAkhir=0.2*mhs[i].NilaiQuis+0.3*mhs[i].NilaiTTS+0.5*mhs[i].NilaiTAS;
       if(mhs[i].NilaiAkhir>=80) mhs[i].index='A';else
       if(mhs[i].NilaiAkhir>=60) mhs[i].index='B';else
       if(mhs[i].NilaiAkhir>=50) mhs[i].index='E';else
       
   };
  
   printf("Data yang telah dimasukan adalah : \n");
   printf("----------------------------------------------------------------------\n");
   printf("|    NIM     |       NAMA         | QUIS | TTS | TAS |  N A  | INDEX |\n");
   printf("----------------------------------------------------------------------\n");
   for(i=0;i<maks;i++)
   {
      printf("| %-8s | %-20s |  %3i | %3i | %3i | %6.2f |   %c   |\n",
              mhs[i].NIM,mhs[i].Nama,mhs[i].NilaiQuis,mhs[i].NilaiTTS,
              mhs[i].NilaiTAS,mhs[i].NilaiAkhir,mhs[i].index);
   }
   printf("----------------------------------------------------------------------\n");
   getch();
   return 0;
}



