#include <stdio.h>

void quickSort( int[], int, int);
int partition( int[], int, int);

int total;
void main(){
     int total;
     int a[1000];
     int p;
     printf("masukkan jumlah data total = ");scanf("%d",&total);
     for(p=0;p<total;p++){
       printf("masukkan data index ke %d = ",p+1);scanf("%d",&a[p]);
     }

     printf("\n\nsebelum Di- sorting:  ");
     for(p = 0; p < total; ++p){
          printf(" %d ", a[p]);
     }
     quickSort( a, 0, total-1);
     printf("\n\nsesudah Di- sorting: ");
     for(p = 0; p < total; ++p){
          printf(" %d ", a[p]);
     }
     printf("\n");
     }

            void quickSort( int a[], int l, int r){
            int h;
            if( l < r ){
            h = partition( a, l, r);
            quickSort( a, l, h-1);
            quickSort( a, h+1, r);
    }

}

            int partition( int a[], int l, int k) {
            int pivot, m, g, t;
            pivot = a[l];
            m = l; g = k+1;

                while( 1){
                do ++m; while( a[m] <= pivot && m <= k );
                do --g; while( a[g] > pivot );
                if( m >= g ) break;
                t = a[m]; a[m] = a[g]; a[g] = t;
     }
     t = a[l]; a[l] = a[g]; a[g] = t;
     return g;
}
