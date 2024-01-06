1.函數名稱 : printf

作用 :  將格式化輸出傳送到 stdout

範例 ：

#include <stdio.h>
    int main (){
        printf("hello world\n");
        return 0;
    }
說明 : 印出hello world


2.函數名稱 : scanf

作用 : 從標準輸入讀取格式化輸入

範例 : 

#include <sdio.h>
    int main (){
        int value;
        scanf("%d",&value);
        printf("%d",value);
        return 0;
    }
說明 : 輸入一個整數，把它放到value，之後再印出它


3.函數名稱 : sprintf

作用 : 發送str 指向一個字符串的格式化輸出

範例 : 

#include <stdio.h>
#include <math.h>

int main()
{
   char str[80];

   sprintf(str, "Value of Pi = %f", M_PI);
   puts(str);
   
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_sprintf.html
sprintf這個函數將M_PI這個在<math.h>中定義的轉換為字串，"Value of Pi ="
合併在一起，並用puts輸出str陣列


4.函數名稱 : puts

作用 : 用於將以null結尾的字串輸出到stdout

範例 : 

#include <stdio.h>
#include <math.h>

int main()
{
   char str[80];

   sprintf(str, "Value of Pi = %f", M_PI);
   puts(str);
   
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_sprintf.html
sprintf這個函數將M_PI這個在<math.h>中定義的轉換為字串，"Value of Pi ="
合併在一起，並用puts輸出str陣列，在輸出的字串末尾自動插入換行符\n


5.函數名稱 : fgets

作用 : 讀取輸入一個字符串格式化

範例 : 
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int day, year;
   char weekday[20], month[20], dtm[100];

   strcpy( dtm, "Saturday March 25 1989" );
   sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );

   printf("%s %d, %d = %s", month, day, year, weekday );
    
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_sscanf.html
這個程式是先將字串Saturday March 25 1989複製到dtm中，而sscanf則可以將
dtm中的字串，按照我們寫的不同的資料型別的參數轉換並存放，之後再印出月、日
年、星期幾
