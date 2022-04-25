#include <stdio.h>

//inisialisasi data
int angka[7]={1,7,5,4,3,2,6};

void main(){
	//looping sebanyak jumlah data-1
	for(int x=1; x<7; x++){
		//looping selama angka ke-j (j sudah di set sebagai i di awal)
		//lebih kecil dari j-1
		for(int y=x; y>0 && angka[y]<angka[y-1]; y--){
			//lakukan swap value
			int temp=angka[y-1];
			angka[y-1]=angka[y];
			angka[y]=temp;
		}
	}

	//cetak data
	for(int x=0; x<7; x++){
		printf("%d ", angka[x]);
	}
	getchar();
}
