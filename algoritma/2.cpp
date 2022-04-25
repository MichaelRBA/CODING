#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

			struct nilai{
			int nim;
			int nilaiKuis;
			int nilaiTTS;
			int nilaiTAS;
			int total;
			char nilaiHuruf[10]= {'A','C','E'};
			
			
		};
	int main()
	{

		struct nilai mhs;
		
		printf("Masukkan NIM:");
		scanf("%d",&mhs.nim);
		printf("Masukkan nilai kuis:");
		scanf("%d", &mhs.nilaiKuis);
		printf("Masukkan nilai TTS:");
		scanf("%d", &mhs.nilaiTTS);
		printf("Masukkan nilai TAS:");
		scanf("%d", &mhs.nilaiTAS);
	
		mhs.total =(25 * mhs.nilaiKuis)/100 + (35 * mhs.nilaiTTS)/100 +(40 * mhs.nilaiTTS)/100;
		system("cls");
		printf("===========================================");
			printf("		NIM= %d\n",mhs.nim);
		printf("total=%d\n",mhs.total); 
		if(mhs.total >70 && mhs.total<=100){
			printf("%c",mhs.nilaiHuruf[0]);
		}
		else if(mhs.total > 45 && mhs.total <=70){
			printf("%c",mhs.nilaiHuruf[1]);
		}
		else{
			printf("%c",mhs.nilaiHuruf[2]);
		}
		printf("===========================================/n");
	
	}
