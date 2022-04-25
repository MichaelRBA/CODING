#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

int main(){
   char username[6]= "Admin", pass[12]= "adminn";
   char usr[6], pas[12];
   int status = 0, salah = 0;

   while(status < 3){//mengulang suatu statement selama kondisi syarat yang diberikan bernilai benar
      printf("Masukkan Username : ");
      gets(usr);//memasukkan data bertipe karakter dan tidak dapat digunakan untuk memasukkan data numerik
      printf("Masukkan Password : ");
      gets(pas);//memasukkan data bertipe karakter dan tidak dapat digunakan untuk memasukkan data numerik

      if(strcmp(username, usr)==0 && strcmp (pass, pas)== 0){//igunakan untuk membandingkan string dengan string yang lainnya
         printf("Akses diterima. Selamat Datang\n");
         break;
      }else{
         printf("Username dan Password tidak sama\n");
         salah++;
         if(salah == 3){
            printf("Akses ditolak\n");
         }
      }
      status++;
   }

   system("pause");
   return 0;
}
