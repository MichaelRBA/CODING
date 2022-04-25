#include <stdio.h>
#include <stdlib.h>

void main()
{
    float rupiah, BTC, ETH, USDT;
    char a;
    int pilihan;

    do
    {
        printf("konversi menuju Rupiah\n");
        	printf("input Uang Rupiah yang akan dikonversi : ");
       			 scanf("%f",&rupiah);
        			printf("Menu Konversi\n1.Rupiah ke BTC\n2.Rupiah ke ETH\n3.Rupiah ke USDT\n4.OUT\nPilihan : ");
        				scanf("%d",&pilihan);

        BTC=rupiah/54797;
       	 ETH=rupiah/37897;
        	USDT=rupiah/14342;

        if (pilihan==1)
        {
        printf("Hasil konversi  BTC = BTC %.2f\n",BTC);
        }
       		 else if (pilihan==2)
        {
            printf("Hasil konversi  ETH = ETH %.2f\n",ETH);
        }
        		else if (pilihan==3)
        {
            	printf("Hasil konversi USDT = USDT %.2f\n",USDT);
        }
        			else
        {
          			  printf("THANKYOU");
           			  break;
        }
        printf("Mau Ulang? Y/N\n");
        scanf("%s",&a);


    } while (a=='Y'||a=='y');

}
