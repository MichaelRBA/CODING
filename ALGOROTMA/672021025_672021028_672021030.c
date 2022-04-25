#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void Barang();
void Karyawan();
void Kasir();
void Member();
void Keluar();

int ch,n,m,code,k,i,j,tmp, total, jml, pilihan, pil, pilih, select=0, tunai['0'], jumharga['0'], ppn['0'], totharga['0'], pemasukan;
char nama[10],lagi='Y',orang='Y';
 int jumlah,harga,total,bayar,kembali,totsel;

struct barang
{
    int Kode;
    int Stok;
	int Harga;
    char Nama[80];
    char Satuan[80];
};

void menu(){
	int pilihan;	
	struct barang list[80];
    struct barang tmp;
	mulai:
	system("cls");
	printf("\t\t\t\t\t\t==============================\n");
   	printf("\t\t\t\t\t\t|        TOKO BANGUNAN       |\n");
   	printf("\t\t\t\t\t\t|          KULI JAWA         |\n");
   	printf("\t\t\t\t\t\t==============================\n");    
	printf("\t\t\t\t\t\t|1. Input Barang             |\n");
	printf("\t\t\t\t\t\t|2. View List Barang         |\n");
    printf("\t\t\t\t\t\t|3. Search Barang            |\n");
    printf("\t\t\t\t\t\t|4. Update List Barang       |\n");
    printf("\t\t\t\t\t\t|5. Delete Barang            |\n");
	printf("\t\t\t\t\t\t|6. Kasir                    |\n");
	printf("\t\t\t\t\t\t|7. Keluar                   |\n");
	printf("\t\t\t\t\t\t==============================\n");
	printf("\t\t\t\t\t\tPilihan : ");
	scanf("%d", &pilihan);
	switch(pilihan) {
		case 1:
			system("cls");
			printf("\t\t\t\t\t============================================\n");
			printf("\t\t\t\t\t   Jumlah barang yang ingin diinput : ");
    		scanf("%d", &n);
    		printf("\t\t\t\t\t============================================\n");
    			
    		for(i=0;i<n;i++){
    			printf("\t\t\t\t\t   Nomor Rak\t\t: ");
    			scanf("%d", &list[i].Kode);
    			printf("\t\t\t\t\t   Nama Barang\t\t: ");
				scanf("%s", &list[i].Nama);
				printf("\t\t\t\t\t   Harga Satuan Barang\t: ");
				scanf("%d", &list[i].Harga);
				printf("\t\t\t\t\t   Jumlah Barang\t: ");
				scanf("%d", &list[i].Stok);
				printf("\t\t\t\t\t   Satuan Barang\t: ");
				scanf("%s", list[i].Satuan);
				printf("\t\t\t\t\t============================================\n");
				}
				getch();
				goto mulai;
        		break;
			case 2:
				system("cls");
				printf("\t---------------------------------------------------------------------------------------------------------\n");
	        	printf("\t|                                            List Stok Barang                                           |\n");
				printf("\t---------------------------------------------------------------------------------------------------------\n");
	            printf("\t|\tKode\t|\tRak\t|\tNama Barang\t|\tHarga Satuan\t|\tStok\t\t|\n");
	            printf("\t---------------------------------------------------------------------------------------------------------\n");
				for (i = 0; i < n; i++)
			    {
			        for (j = 0; j < (n - i - 1); j++)
			        {
			            if (list[j].Kode > list[j + 1].Kode)
			            {
			                tmp = list[j];
			                list[j] = list[j + 1];
			                list[j + 1] = tmp;
			            }
			        }
			    }
				for(i=0;i<n;i++){
					printf("\t|\t%d.\t|\t%d\t| \t%s\t\t|\tRp.%d\t|\t%d%s\t|\n",i+1,list[i].Kode,list[i].Nama,list[i].Harga,list[i].Stok,list[i].Satuan);
				}					
				printf("\t---------------------------------------------------------------------------------------------------------\n");
				getch();
				goto mulai;
        		break;
			case 3:
				system("cls");
				printf("\t\t\t\t\t=================================\n");
				printf("\t\t\t\t\tCari rak barang sesuai kode : ");
				scanf("%d",&code);					
				printf("\t\t\t\t\t=================================\n");
				if(code>n){
					printf("Kode barang yang dicari tidak ada");
				}else{
					printf("\t\t\t\t    -------------------------------------\n");
			        printf("\t\t\t\t    |%d. Nomor Rak\t: %d\t\t|\n",code,list[code-1].Kode);
			        printf("\t\t\t\t    |   Nama Barang\t: %s\t\t|\n",list[code-1].Nama);
			        printf("\t\t\t\t    |   Harga Barang\t: Rp.%d\t|\n",list[code-1].Harga);
			        printf("\t\t\t\t    |   Jumlah Barang\t: %d %s\t|\n",list[code-1].Stok,list[code-1].Satuan);
			        printf("\t\t\t\t    -------------------------------------\n");
				}
				getch();
				goto mulai;
        		break;
			case 4:
				system("cls");
				printf("\t\t\t\t\t=============================================\n");
				printf("\t\t\t\t\tMasukkan kode barang yang akan diupdate : ");
				scanf("%d",&code);				
				printf("\t\t\t\t\t=============================================\n");
				if(code>n){
					printf("\t\t\t\t\tKode barang yang dicari tidak ada");
				}else{
					printf("\t\t\t\t\t-----------------------------------------\n");
			        printf("\t\t\t\t\t|%d. Nomor Rak\t\t: %d\t\t|\n",code,list[code-1].Kode);
			        printf("\t\t\t\t\t|   Nama Barang\t\t: %s\t\t|\n",list[code-1].Nama);
			        printf("\t\t\t\t\t|   Harga Barang\t: Rp.%d\t|\n",list[code-1].Harga);
			        printf("\t\t\t\t\t|   Jumlah Barang\t: %d %s\t|\n",list[code-1].Stok,list[code-1].Satuan);
			        printf("\t\t\t\t\t-----------------------------------------\n");
					printf("\t\t\t\t\tNomor Rak\t\t: ");
    				scanf("%d", &list[code-1].Kode);
    				printf("\t\t\t\t\tNama Barang\t\t: ");
			   		scanf("%s", &list[code-1].Nama);
					printf("\t\t\t\t\tHarga Satuan Barang\t: ");
			   		scanf("%d", &list[code-1].Harga);
			   		printf("\t\t\t\t\tJumlah Barang\t\t: ");
			   		scanf("%d", &list[code-1].Stok);
			   		printf("\t\t\t\t\tSatuan Barang\t\t: ");
			   		scanf("%s", list[code-1].Satuan);
			   		printf("\n\t\t\t\t\tKode barang %d, berhasil diupdate!", code);
				}
				getch();
				goto mulai;
        		break;
			case 5:				
				system("cls");
				printf("\t\t\t\t\t=============================================\n");
				printf("\t\t\t\t\tMasukkan kode barang yang akan didelete : ");
				scanf("%d",&code);				
				printf("\t\t\t\t\t=============================================\n");
				if(code>n){
					printf("\t\t\t\t\tKode barang yang dicari tidak ada");
				}else{
					printf("\t\t\t\t\tKode barang %d, sudah terhapus!", code);
					for(i=code-1;i<n-1;i++){
						list[i].Kode = list[i+1].Kode;
						strcpy(list[i].Nama,list[i+1].Nama);
						list[i].Harga = list[i+1].Harga;
						list[i].Stok = list[i+1].Stok;
						strcpy(list[i].Satuan,list[i+1].Satuan);
					}
					n--;
				}
				getch();
				goto mulai;
        		break;
			case 6: 
				system("cls");
			   	printf("\t\t\t\t\t-------------------------------------------\n");
				printf("\t\t\t\t\t|           KASIR TOKO BANGUNAN           |\n");
				printf("\t\t\t\t\t-------------------------------------------\n");				
				do{//untuk perulangan while
 totsel=0;
				do{  
				    printf("\n\t\t\t\t\tPesanan\t\t\t: ");
					scanf("%d",&code);//%d untuk menampilkan interger yang ada
				    printf("\t\t\t\t\tMasukkan jumlah barang\t: ");
				    scanf("%d",&jumlah); 					  
				    total=jumlah*list[code-1].Harga;
 					printf("\n\t\t\t\t\tTotalnya\t\t: %d\n",total);
 totsel=totsel+total;

 printf("\t\t\t\t\t--------------------------------------------------\n");
 printf("\t\t\t\t\tTransaksi lagi (Y/N) ? ");scanf("\n%c",&lagi);//%c untuk menampilkan Char 
 printf("\t\t\t\t\t--------------------------------------------------\n");
 }
 while(lagi=='Y');//mengulang suatu statement selama kondisi syarat yang diberikan bernilai benar
 printf("\t\t\t\t\tTOTAL SELURUH                      : %d\n",totsel);
 printf("\t\t\t\t\t__________________________________________________\n");
 printf("\t\t\t\t\tMasukkan jumlah uang yang dibayar  : ");scanf("%d",&bayar);
 kembali=bayar-totsel;
 if(totsel<=bayar)//menyambung beberapa kondisi IF ELSE menjadi sebuah kesatuan
 {
  printf("\t\t\t\t\tJumlah Kembalian                     : %d\n\n",kembali); 
 }else
 {
  printf("\n\t\t\t\t\tSORRY uang anda tidak cukup guyys\n\n");
 }

 printf("\t\t\t\t\t\t\t--- TERIMAKSIH ---\n");
 printf("\t\t\t\t\t==================================================\n");
 printf("\t\t\t\t\tADA LAGI YANG MAU TRANSAKSI ? (Y/N) ");scanf("\n%c",&orang);
 printf("\t\t\t\t\t==================================================\n\n");
 }while(orang=='Y');
 printf("\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
 printf("\t\t\t\t\t\t\t --- TERIMAKSIH ---\n");
				system("pause");
		        getch();//membaca data karakter
				goto mulai;
        		break;
			case 7: 
				Keluar(0);
				getch();
        		break;
		system("pause");
		default :printf(" Pilih Menu Yang Tersedia");
        getch();
		goto mulai;
			break;
		}
		}
		

void Keluar(){
    system("cls");
    char a[]={"\n\t\t\t\t\tCredit By :\n\t\t\t\t\tBenedictus Nigel Ageng Pambudi\t(672021025)\n\t\t\t\t\tMichael Raphael Ben Ariyanto\t(672021028)\n\t\t\t\t\tJustin Clarence Setiawan\t(672021030)\n"};
    int i;
    double j;
    for(i=0;a[i]!=0;i++)
{
    printf("%c",a[i]);
    for(j=0;j<=9990000;j++)
{
}
}
}

int main(){
    char savedusername[24], savedpass[24], username[24], pass[24];
    int status = 0, salah = 0, i;
    char a[]={"\t\t\t\t\tSelamat Datang..."};// kegunaan\t untuk memberi Tab atau jarak
    double j;// untuk menyimpan angka pecahan
    for(i=0;a[i]!=0;i++)
{
    printf("%c",a[i]);
    for(j=0;j<=99900000;j++)
{
}
}
   strcpy(savedusername, "Admin");// kegunaan  untuk meng-copy string dari sebuah variabel ke variabel yang lainnya
   strcpy(savedpass, "admin");
   while(status < 3){//engulang suatu statement selama kondisi syarat yang diberikan bernilai benar
   		system("cls");
   		printf("\t\t\t\t\t=====================================\n");
   		printf("\n");
	    printf("\t\t\t\t\t\tUsername : ");
	    gets(username);//memasukkan data bertipe karakter dan tidak dapat digunakan untuk memasukkan data numerik.(menghambil 1 kata)
	    printf("\n");
	    printf("\t\t\t\t\t\tPassword : ");
	    gets(pass);//memasukkan data bertipe karakter dan tidak dapat digunakan untuk memasukkan data numerik.
	    printf("|\n");
	    printf("\t\t\t\t\t=====================================\n");

	    if(strcmp(username, savedusername)==0 && strcmp (pass, savedpass)== 0){//stercmp untuk membandingkan string dengan string yang lainnya
	        printf("\t\t\t\t\tAkses diterima. Selamat Datang\n");
	        Sleep(1000);//menunggu hanya thread saat ini untuk waktu yang ditentukan
	        menu();
	        break;
	    }else{
	        printf("\t\t\t\t\tUsername atau Password salah\n");
	        Sleep(1000);
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
