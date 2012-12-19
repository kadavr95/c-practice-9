#include <stdio.h>//подключение библиотек ввода/вывода и предельных значений типов
#include <limits.h>

int recur(int kk);//прототип рекурсивной функции

int main(void)//главная функция
{
 int k,i=1,r;//определение переменных
 printf("Input number:");//вывод запроса и считывание введённых данных
 scanf("%d", &k);
 r=recur(k);//вызов рекурсивной функции
 if (r==0)//выбор вывода
 {
  printf("Function=ERROR\n");//вывод ошибки
 }
 else
 {
  printf("Function=%d\n", r);//вывод значения
  printf("|Lvl|    Value on enter   |                 Value on return                |\n");//вывод таблицы трассировки
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
 fflush(stdin);//ожидание ввода данных
 getchar();
 return 0;
}

int recur(int kk)//рекурсивная функция
{
 int s=0;
 if ((kk<=2))//значения для которых нет рекурсивной функции
 {
  if (kk==1)
  {
   s=1;
   return s;
  }
  if (kk==2)
  {
   s=2;
   return s;
  }
 }
 else//значения для которых есть рекурсивная функция
 {
  if ((INT_MAX-2*recur(kk-1))>s)//проверка ограничений
   s= 2*recur(kk-1)+recur(kk-2);
  else
   s=0;
 return s;
 }
}

