#include <stdio.h>

int angka[7]={1,7,5,4,3,2,6};

void main(){
	for(int x=1; x<7; x++){
		for(int y=x; y>0 && angka[y]<angka[y-1]; y--){
			int temp=angka[y-1];
			angka[y-1]=angka[y];
			angka[y]=temp;
		}
	}
	for(int x=0; x<7; x++){
		printf("%d ", angka[x]);
	}
	getchar();
}
