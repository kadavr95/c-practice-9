#include <stdio.h>
#include <limits.h>
int recur(int kk);

int main(void) {
int k,i=1,r;
printf("Input numbers:");
scanf("%d", &k);
r=recur(k);
if (r==0) {
 printf("Function=ERROR\n");
}
else
{
printf("Function=%d\n", r);
printf("|Lvl|    Value on enter   |                 Value on return                |\n");
printf("| 0 |Enter:%2d Function(%2d)|                               Result:%10d|\n",k,k,recur(k));
while (k>1)
{
if (k==2)
	printf("|%2d |i=%2d                 |Return:  %10d            Result:%10d|\n",i,k,2,recur(k));
	else
 printf("|%2d |i=%2d     Function(%2d)|Return:%10d+2*%-10d Result:%10d|\n",i,k,k,recur(k-2),recur(k-1),recur(k));
 i++;
 k--;
}
printf("|%2d |i=%2d                  Return:  %10d            Result:%10d|\n",i,k,1,recur(k));
}
fflush(stdin);
getchar();
return 0;
}

int recur(int kk) {
int s=0;
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
if ((INT_MAX-2*recur(kk-1))>s) {

s= 2*recur(kk-1)+recur(kk-2);
}
else
s=0;
 return s;
}
}

