#include <stdio.h>
#include <stdlib.h>

void main ()
{

 int a,b=0,c=1,d=1,e=0,f=0;
   printf("Masukan Inputan : ");
   scanf("%d",&a);
   for(int x=1;x<=a;x++){
    b+=x;
    //1+2+3
   }
   printf("output (for) = %d",b);

   while(b<=a){
    e+=c;
    c++;
   }
   printf("\nOutput(While) = %d",e);

   do{
    f+=d;
    d++;
   }
   while(d<=a);
   printf("\nOutput(Do While) = %d",f);
}
