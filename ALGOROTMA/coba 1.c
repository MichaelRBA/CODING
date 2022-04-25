#include <stdio.h>


char user[10],pass[10];

int main(){
    printf("Masukan Username : ");
    scanf("%s",&user);
    printf("Masukan Password : ");
    scanf("%s",&pass);
    if(strcmp(user,"admin")==0 && strcmp(pass,"123")==0){
        printf("Akses diterima. Selamat Datang\n");
        system("pause");
        menu_admin();
    }
    else{
         printf("Username dan Password tidak match\n");
         system("pause");
         exit(1);
    }

}
