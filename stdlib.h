1.函數名稱 : abs

作用 : 返回參數的絕對值

範例 : 
#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int a, b;

   a = abs(5);
   printf("value of a = %d", a);

   b = abs(-10);
   printf("value of b = %d", b);
   
   return(0);
}
說明 : https://tw.gitbook.net/c_standard_library/c_function_abs.html
這個範例是在宣告兩個參數a、b，不論宣告數字的正負為何，
通過abs()函數，都會返還其絕對值



2.函數名稱 : rand

作用 : 返回參數的絕對值

範例 : 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n;
   time_t t;
   
   n = 5;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 50 */
   for( i = 0 ; i < n ; i++ ) {
      printf("%d", rand() % 50);
   }
   
  return(0);
}
說明 : https://tw.gitbook.net/c_standard_library/c_function_abs.html
宣告一個time_h型態的參數t，time()函數用來得到現在的時間，並存放到t
，然後用unsigned轉換秒數為無符號整數，以滿足srand函數的要求，而
srand()函數用於設置隨機數生成器的種子，可以確保每次跑的時候都有不同
的隨機數序列



3.函數名稱 : srand

作用 : 使用rand()產生的隨機數生成器來作為種子

範例 : 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n;
   time_t t;
   
   n = 5;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 50 */
   for( i = 0 ; i < n ; i++ ) {
      printf("%d", rand() % 50);
   }
   
  return(0);
}
說明 : https://tw.gitbook.net/c_standard_library/c_function_abs.html
宣告一個time_h型態的參數t，time()函數用來得到現在的時間，並存放到t
，然後用unsigned轉換秒數為無符號整數，以滿足srand函數的要求，而
srand()函數用於設置隨機數生成器的種子，可以確保每次跑的時候都有不同
的隨機數序列



4.函數名稱 : malloc

作用 : 分配請求的記憶體，並返回一個指向它的指標

範例 : 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "yiibai");
   printf("String = %s,  Address = %u", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u", str, str);

   free(str);
   
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_malloc.html
使用malloc分配記憶體，但其返回的是void*類別的指標，所以要使用(char *)，
強制型別轉換，之後使用strcpy複製yiibai到str(也就是記憶體的起始位置)，而
第二段code則用realloc重新分配記憶體大小為25，並用strcat函數把str和".com"
和併，最後在使用free()釋放已分配的記憶體，讓系統知道這些記憶體可以使用了


5.函數名稱 : realloc

作用 : 重新調整之前malloc或calloc請求的記憶體大小

範例 : 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "yiibai");
   printf("String = %s,  Address = %u", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u", str, str);

   free(str);
   
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_malloc.html
使用malloc分配記憶體，但其返回的是void*類別的指標，所以要使用(char *)，
強制型別轉換，之後使用strcpy複製yiibai到str(也就是記憶體的起始位置)，而
第二段code則用realloc重新分配記憶體大小為25，並用strcat函數把str和".com"
和併，最後在使用free()釋放已分配的記憶體，讓系統知道這些記憶體可以使用了



6.函數名稱 : free

作用 : 回收先前alloc，malloc或realloc調用的記憶體

範例 : 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "yiibai");
   printf("String = %s,  Address = %u", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u", str, str);

   free(str);
   
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_malloc.html
使用malloc分配記憶體，但其返回的是void*類別的指標，所以要使用(char *)，
強制型別轉換，之後使用strcpy複製yiibai到str(也就是記憶體的起始位置)，而
第二段code則用realloc重新分配記憶體大小為25，並用strcat函數把str和".com"
和併，最後在使用free()釋放已分配的記憶體，讓系統知道這些記憶體可以使用了
