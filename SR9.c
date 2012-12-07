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
 //printf("%d %d\n",mm,nn);
if ((mm==0)||(nn==0))
 {
   return (nn+1);
 }
else
{
 return (recur(mm-1,recur(mm,nn-1)));
}
}

