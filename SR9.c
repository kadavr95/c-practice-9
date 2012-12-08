#include <stdio.h>

int recur(int kk);

int main(void) {
int k;
printf("Input numbers:");
scanf("%d", &k);
printf("Function=%d\n", recur(k));
fflush(stdin);
getchar();
return 0;
}

int recur(int kk) {
 int s;
 printf("%d\n",kk);
if ((kk<=2))
 {
 if (kk==1) {

   s=1;
   return s;
 }
 if (kk==2) {

   s=2;
   return s;
 }
 }
else
{

 return 2*recur(kk-1)+recur(kk-2);
}
}
