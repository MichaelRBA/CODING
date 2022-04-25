#include <stdio.h>


int angka[7]={8,8,2,5,6,1,7,};

void main(){

	for(int a=0; a<7; a++){

		int indexNilaiMinimal=a;
		for(int b=a; b<7; b++){
			if(angka[b]<angka[indexNilaiMinimal]){
				indexNilaiMinimal=b;
			}
		}
		int temp=angka[a];
		angka[a]=angka[indexNilaiMinimal];
		angka[indexNilaiMinimal]=temp;
	}
	for(int a=0; a<7; a++){
		printf("%d ", angka[a]);
	}
	getchar();
}
