1.函數名稱 : pow

作用 :  計算某數次方值

範例 ：
#include <stdio.h>
#include <math.h>

int main ()
{
   printf("Value 8.0 ^ 3 = %lf", pow(8.0, 3));

   printf("Value 3.05 ^ 1.98 = %lf", pow(3.05, 1.98));
   
   return(0);
}
說明 : 使用Pow(intx,inty)，以參數x作為底，參數y作為次方，且因為回傳
double型別的值，所以使用%lf



2.函數名稱 : sqrt

作用 :  回傳平方根

範例 ：
#include <stdio.h>
#include <math.h>

int main ()
{

   printf("Square root of %lf is %lf
", 4.0, sqrt(4.0) );
   printf("Square root of %lf is %lf
", 5.0, sqrt(5.0) );
   
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_sqrt.html
計算()中的參數的平方根，且因為回傳double型別的值，所以使用%lf


3.函數名稱 : exp

作用 :  求以e為底數的指數值

範例 ：
#include <stdio.h>
#include <math.h>

int main ()
{
   double x = 0;
  
   printf("The exponential value of %lf is %lf", x, exp(x));
   printf("The exponential value of %lf is %lf", x+1, exp(x+1));
   printf("The exponential value of %lf is %lf", x+2, exp(x+2));
   
   return(0);
}
說明 : https://tw.gitbook.net/c_standard_library/c_function_exp.html
以e為底數，找到x指數值


4.函數名稱 : log10

作用 :  求以10為底的對數值

範例 ：
#include <stdio.h>
#include <math.h>

int main ()
{
   double x, ret;
   x = 10000;
  
   /* finding value of log1010000 */
   ret = log10(x);
   printf("log10(%lf) = %lf
", x, ret);
   
   return(0);
}
說明 : https://tw.gitbook.net/c_standard_library/c_function_exp.html
以10為底數，找到x的對數值



5.函數名稱 : log

作用 :  求以e為底的自然對數值

範例 ：
#include <stdio.h>
#include <math.h>

int main ()
{
   double x, ret;
   x = 2.7;

   /* finding log(2.7) */
   ret = log(x);
   printf("log(%lf) = %lf", x, ret);
   
   return(0);
}
說明 : https://tw.gitbook.net/c_standard_library/c_function_exp.html
以e為底數，找到x的自然對數值
