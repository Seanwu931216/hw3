tm結構具有下列定義：
struct tm {
   int tm_sec;         /* seconds,  range 0 to 59          */
   int tm_min;         /* minutes, range 0 to 59           */
   int tm_hour;        /* hours, range 0 to 23             */
   int tm_mday;        /* day of the month, range 1 to 31  */
   int tm_mon;         /* month, range 0 to 11             */
   int tm_year;        /* The number of years since 1900   */
   int tm_wday;        /* day of the week, range 0 to 6    */
   int tm_yday;        /* day in the year, range 0 to 365  */
   int tm_isdst;       /* daylight saving time             */
};

1.函數名稱 : time

作用 :  將秒值存放到一個參數中

範例 ：
#include <stdio.h>
#include <time.h>

int main ()
{
  time_t seconds;

  seconds = time(NULL);
  printf("Hours since January 1, 1970 = %ld", seconds/3600);
  
  return(0);
}
說明 : https: 來源//tw.gitbook.net/c_standard_library/c_function_time.html
time()中的NULL，可以回傳當前的時間，而再利用秒數計算從1970.1.1到現在
共經歷多少小時



2.函數名稱 : localtime

作用 :  將秒值存放到一個參數中

範例 ：
#include <stdio.h>
#include <time.h>

int main ()
{
   time_t rawtime;
   struct tm *info;

   time( &rawtime );

   info = localtime( &rawtime );
   printf("Current local time and date: %s", asctime(info));

   return(0);
}

說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_localtime.html
宣告一個struct tm形式的指標info，可以儲存時間的各個組成部分，先用time
函數得到現在時間的秒數，並存在rawtime變數中，之後再用localtime函數把
秒數轉成struct tm中的各個部分，賦值給info，最後用asctime函數將info
轉成字串印出



3.函數名稱 : asctime

作用 :  可以將struct tm中的時間資訊轉換為可讀性較高的字串形式

範例 ：
#include <stdio.h>
#include <time.h>

int main ()
{
   time_t rawtime;
   struct tm *info;

   time( &rawtime );

   info = localtime( &rawtime );
   printf("Current local time and date: %s", asctime(info));

   return(0);
}

說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_localtime.html
宣告一個struct tm形式的指標info，可以儲存時間的各個組成部分，先用time
函數得到現在時間的秒數，並存在rawtime變數中，之後再用localtime函數把
秒數轉成struct tm中的各個部分，賦值給info，最後用asctime函數將info
轉成字串印出



4.函數名稱 : mktime

作用 :  將指向的結構轉換成一個time_t值

範例 ： 
#include <stdio.h>
#include <time.h>

int main ()
{
   int ret;
   struct tm info;
   char buffer[80];

   info.tm_year = 2001 - 1900;
   info.tm_mon = 7 - 1;
   info.tm_mday = 4;
   info.tm_hour = 0;
   info.tm_min = 0;
   info.tm_sec = 1;
   info.tm_isdst = -1;

   ret = mktime(&info);
   if( ret == -1 )
   {
       printf("Error: unable to make time using mktime");
   }
   else
   {
      strftime(buffer, sizeof(buffer), "%c", &info );
      printf(buffer);
   }

   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_localtime.html
info.tm_year = 2001 - 1900; 和 info.tm_mon = 7 - 1;但因為tm_year
tm_mon 分別是從1900跟0開始算，所以要減去，然後將tm_isdst初始化為-1，
讓系統自己決定要不要使用夏令時間，接下來用mktime將info指向的struct tm
存放的資料轉成time_t類別，失敗的話回傳-1，成功的話就用strftime函数将
time_t型態的秒數轉成字串



5.函數名稱 : strftime

作用 : 通過指定格式字串，自定義输出的時間字串的格式
範例 ： 
#include <stdio.h>
#include <time.h>

int main ()
{
   int ret;
   struct tm info;
   char buffer[80];

   info.tm_year = 2001 - 1900;
   info.tm_mon = 7 - 1;
   info.tm_mday = 4;
   info.tm_hour = 0;
   info.tm_min = 0;
   info.tm_sec = 1;
   info.tm_isdst = -1;

   ret = mktime(&info);
   if( ret == -1 )
   {
       printf("Error: unable to make time using mktime");
   }
   else
   {
      strftime(buffer, sizeof(buffer), "%c", &info );
      printf(buffer);
   }

   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_localtime.html
info.tm_year = 2001 - 1900; 和 info.tm_mon = 7 - 1;但因為tm_year
tm_mon 分別是從1900跟0開始算，所以要減去，然後將tm_isdst初始化為-1，
讓系統自己決定要不要使用夏令時間，接下來用mktime將info指向的struct tm
存放的資料轉成time_t類別，失敗的話回傳-1，成功的話就用strftime函数将
time_t型態的秒數轉成字串