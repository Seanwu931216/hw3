<<<<<<< HEAD
1.函數名稱 : isprint

作用 :  檢查傳遞的參數是否為含括空格以內的可列印字元
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'k';
   int var2 = '8';
   int var3 = '	';
   int var4 = ' ';
    
   if( isprint(var1) )
   {
      printf("var1 = |%c| can be printed", var1 );
   }
   else
   {
      printf("var1 = |%c| can't be printed", var1 );
   }
   if( isprint(var2) )
   {
      printf("var2 = |%c| can be printed", var2 );
   }
   else
   {
      printf("var2 = |%c| can't be printed", var2 );
   }
   if( isprint(var3) )
   {
      printf("var3 = |%c| can be printed", var3 );
   }
   else
   {
      printf("var3 = |%c| can't be printed", var3 );
   }
   if( isprint(var4) )
   {
      printf("var4 = |%c| can be printed", var4 );
   }
   else
   {
      printf("var4 = |%c| can't be printed", var4 );
   }
   
   return(0);
}   
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_isprint.html
每個var中的都存有字元的ASCII值，並用isprint函數檢查每個變數能不能印出
，而var3因為是控制字元，所以不能印



2.函數名稱 : isspace

作用 :  檢查傳遞的參數是否為標準空白字元
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 't';
   int var2 = '1';
   int var3 = ' ';

   if( isspace(var1) )
   {
       printf("var1 = |%c| is a white-space character", var1 );
   }
   else
   {
       printf("var1 = |%c| is not a white-space character", var1 );
   }
   if( isspace(var2) )
   {
       printf("var2 = |%c| is a white-space character", var2 );
   }
   else
   {
       printf("var2 = |%c| is not a white-space character", var2 );
   }
   if( isspace(var3) )
   {
       printf("var3 = |%c| is a white-space character", var3 );
   }
   else
   {
       printf("var3 = |%c| is not a white-space character", var3 );
   }
   
   return(0);
}
說明 : https://tw.gitbook.net/c_standard_library/c_function_isspace.html
每個var中的都存有字元的ASCII值，並用isspace函數檢查每個變數是不是標準
空白字元



3.函數名稱 : isalnum

作用 :  檢查傳遞的參數是否為字母或數字
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '	';
   int var4 = ' ';
    
   if( isalnum(var1) )
   {
      printf("var1 = |%c| is alphanumeric", var1 );
   }
   else
   {
      printf("var1 = |%c| is not alphanumeric", var1 );
   }
   if( isalnum(var2) )
   {
      printf("var2 = |%c| is alphanumeric", var2 );
   }
   else
   {
      printf("var2 = |%c| is not alphanumeric", var2 );
   }
   if( isalnum(var3) )
   {
      printf("var3 = |%c| is alphanumeric", var3 );
   }
   else
   {
      printf("var3 = |%c| is not alphanumeri", var3 );
   }
   if( isalnum(var4) )
   {
      printf("var4 = |%c| is alphanumeric", var4 );
   }
   else
   {
      printf("var4 = |%c| is not alphanumeric", var4 );
   }
	
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_isalnum.htmlhttps://tw.gitbook.net/c_standard_library/c_function_isspace.html
每個var中的都存有字元的ASCII值，並用isalnum函數檢查每個變數是不是數字
或字母，是的話回傳非0值，否則回傳值為0



4.函數名稱 : isalpha

作用 :  檢查傳遞的參數是否為字母
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '	';
   int var4 = ' ';
    
   if( isalpha(var1) )
   {
      printf("var1 = |%c| is an alphabet", var1 );
   }
   else
   {
      printf("var1 = |%c| is not an alphabet", var1 );
   }
   if( isalpha(var2) )
   {
      printf("var2 = |%c| is an alphabet", var2 );
   }
   else
   {
      printf("var2 = |%c| is not an alphabet", var2 );
   }
   if( isalpha(var3) )
   {
      printf("var3 = |%c| is an alphabet", var3 );
   }
   else
   {
      printf("var3 = |%c| is not an alphabet", var3 );
   }
   if( isalpha(var4) )
   {
      printf("var4 = |%c| is an alphabet", var4 );
   }
   else
   {
      printf("var4 = |%c| is not an alphabet", var4 );
   }
   
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_isalpha.html
每個var中的都存有字元的ASCII值，並用isalpha函數檢查每個變數是不是字母
，是的話回傳非0值，否則回傳值為0



5.函數名稱 : ispunct

作用 :  檢查傳遞的參數是否為標點符號
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 't';
   int var2 = '1';
   int var3 = '/';
   int var4 = ' ';

   if( ispunct(var1) )
   {
       printf("var1 = |%c| is a punctuation character", var1 );
   }
   else
   {
       printf("var1 = |%c| is not a punctuation character", var1 );
   }
   if( ispunct(var2) )
   {
       printf("var2 = |%c| is a punctuation character", var2 );
   }
   else
   {
       printf("var2 = |%c| is not a punctuation character", var2 );
   }
   if( ispunct(var3) )
   {
       printf("var3 = |%c| is a punctuation character", var3 );
   }
   else
   {
       printf("var3 = |%c| is not a punctuation character", var3 );
   }
   if( ispunct(var4) )
   {
       printf("var4 = |%c| is a punctuation character", var4 );
   }
   else
   {
       printf("var4 = |%c| is not a punctuation character", var4 );
   }
   
   return(0);
}   
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_ispunct.html
每個var中的都存有字元的ASCII值，並用ispunct函數檢查每個變數是不是標點
符號，是的話回傳非0值，否則回傳值為0
=======
1.函數名稱 : isprint

作用 :  檢查傳遞的參數是否為含括空格以內的可列印字元
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'k';
   int var2 = '8';
   int var3 = '	';
   int var4 = ' ';
    
   if( isprint(var1) )
   {
      printf("var1 = |%c| can be printed", var1 );
   }
   else
   {
      printf("var1 = |%c| can't be printed", var1 );
   }
   if( isprint(var2) )
   {
      printf("var2 = |%c| can be printed", var2 );
   }
   else
   {
      printf("var2 = |%c| can't be printed", var2 );
   }
   if( isprint(var3) )
   {
      printf("var3 = |%c| can be printed", var3 );
   }
   else
   {
      printf("var3 = |%c| can't be printed", var3 );
   }
   if( isprint(var4) )
   {
      printf("var4 = |%c| can be printed", var4 );
   }
   else
   {
      printf("var4 = |%c| can't be printed", var4 );
   }
   
   return(0);
}   
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_isprint.html
每個var中的都存有字元的ASCII值，並用isprint函數檢查每個變數能不能印出
，而var3因為是控制字元，所以不能印



2.函數名稱 : isspace

作用 :  檢查傳遞的參數是否為標準空白字元
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 't';
   int var2 = '1';
   int var3 = ' ';

   if( isspace(var1) )
   {
       printf("var1 = |%c| is a white-space character", var1 );
   }
   else
   {
       printf("var1 = |%c| is not a white-space character", var1 );
   }
   if( isspace(var2) )
   {
       printf("var2 = |%c| is a white-space character", var2 );
   }
   else
   {
       printf("var2 = |%c| is not a white-space character", var2 );
   }
   if( isspace(var3) )
   {
       printf("var3 = |%c| is a white-space character", var3 );
   }
   else
   {
       printf("var3 = |%c| is not a white-space character", var3 );
   }
   
   return(0);
}
說明 : https://tw.gitbook.net/c_standard_library/c_function_isspace.html
每個var中的都存有字元的ASCII值，並用isspace函數檢查每個變數是不是標準
空白字元



3.函數名稱 : isalnum

作用 :  檢查傳遞的參數是否為字母或數字
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '	';
   int var4 = ' ';
    
   if( isalnum(var1) )
   {
      printf("var1 = |%c| is alphanumeric", var1 );
   }
   else
   {
      printf("var1 = |%c| is not alphanumeric", var1 );
   }
   if( isalnum(var2) )
   {
      printf("var2 = |%c| is alphanumeric", var2 );
   }
   else
   {
      printf("var2 = |%c| is not alphanumeric", var2 );
   }
   if( isalnum(var3) )
   {
      printf("var3 = |%c| is alphanumeric", var3 );
   }
   else
   {
      printf("var3 = |%c| is not alphanumeri", var3 );
   }
   if( isalnum(var4) )
   {
      printf("var4 = |%c| is alphanumeric", var4 );
   }
   else
   {
      printf("var4 = |%c| is not alphanumeric", var4 );
   }
	
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_isalnum.htmlhttps://tw.gitbook.net/c_standard_library/c_function_isspace.html
每個var中的都存有字元的ASCII值，並用isalnum函數檢查每個變數是不是數字
或字母，是的話回傳非0值，否則回傳值為0



4.函數名稱 : isalpha

作用 :  檢查傳遞的參數是否為字母
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '	';
   int var4 = ' ';
    
   if( isalpha(var1) )
   {
      printf("var1 = |%c| is an alphabet", var1 );
   }
   else
   {
      printf("var1 = |%c| is not an alphabet", var1 );
   }
   if( isalpha(var2) )
   {
      printf("var2 = |%c| is an alphabet", var2 );
   }
   else
   {
      printf("var2 = |%c| is not an alphabet", var2 );
   }
   if( isalpha(var3) )
   {
      printf("var3 = |%c| is an alphabet", var3 );
   }
   else
   {
      printf("var3 = |%c| is not an alphabet", var3 );
   }
   if( isalpha(var4) )
   {
      printf("var4 = |%c| is an alphabet", var4 );
   }
   else
   {
      printf("var4 = |%c| is not an alphabet", var4 );
   }
   
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_isalpha.html
每個var中的都存有字元的ASCII值，並用isalpha函數檢查每個變數是不是字母
，是的話回傳非0值，否則回傳值為0



5.函數名稱 : ispunct

作用 :  檢查傳遞的參數是否為標點符號
範例 ：
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 't';
   int var2 = '1';
   int var3 = '/';
   int var4 = ' ';

   if( ispunct(var1) )
   {
       printf("var1 = |%c| is a punctuation character", var1 );
   }
   else
   {
       printf("var1 = |%c| is not a punctuation character", var1 );
   }
   if( ispunct(var2) )
   {
       printf("var2 = |%c| is a punctuation character", var2 );
   }
   else
   {
       printf("var2 = |%c| is not a punctuation character", var2 );
   }
   if( ispunct(var3) )
   {
       printf("var3 = |%c| is a punctuation character", var3 );
   }
   else
   {
       printf("var3 = |%c| is not a punctuation character", var3 );
   }
   if( ispunct(var4) )
   {
       printf("var4 = |%c| is a punctuation character", var4 );
   }
   else
   {
       printf("var4 = |%c| is not a punctuation character", var4 );
   }
   
   return(0);
}   
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_ispunct.html
每個var中的都存有字元的ASCII值，並用ispunct函數檢查每個變數是不是標點
符號，是的話回傳非0值，否則回傳值為0
>>>>>>> 8cd78f7fbc86d9e3259058914c736dbf82578af0
