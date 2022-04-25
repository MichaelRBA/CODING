#include <stdio.h>

int main () {

   	int index[9]; // n adalah bilangan array bertipe integer, yang bernilai 10
   	int a,b;

	index[0]=10;
	index[1]=6;
	index[2]=9;
	index[3]=3;
	index[4]=5;
	index[5]=2;
	index[6]=20;
	index[7]=11;
	index[8]=9;

	printf("INDEX\tNILAI\tHISTOGRAM\n");

   	for (b = 0; b < 9; b++ ) {
      printf("[%d]\t%d\t", b, index[b] );
      for(a = 0; a < index[b]; a++){
	  printf("*");
	  }
      printf("\n");
      // %d berarti bilangan integer , not double
   	}
   	return 0;
}
