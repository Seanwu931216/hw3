1.函數名稱 : strstr

作用 : 尋找子字串在主字串中第一次出現的位置，終止'\0'字符不比較

範例 ： 

/*******************************************
function name: replace
description: When mode is 1, replace the first target finded in source with the replacement.
             When mode is 2, replace left-most target by replacement until there are no targets in the source.
return value: Return the result after replace.
*******************************************/
#include <string.h>
char *replace(char *source, char *target, char *replacement, int mode) {
  	char *temp = NULL;
	switch(mode){
      case 1 :
        temp = strstr(source,target);
        if(temp != NULL){
          char tail[100];
          strcpy(tail,temp + strlen(target));
          strcpy(temp,replacement);
          strcat(source,tail);
        }
         break;
      case 2 :
        temp = strstr(source,target);
        while(temp != NULL){
         	char tail[1000];
        	strcpy(tail,temp + strlen(target));
        	strcpy(temp,replacement);
        	strcat(source,tail);
        	temp = strstr(source,target);
        }
    }
  return source;
}
說明 : 來源 程式設計實驗第十一週第一題http://134.208.3.66/status/60c3cb9192ffd7bf7c0b9a0cfb8d6ea1
根據mode1或mode2，分為case1,case2，case1只需要找一次，case2要用while迴圈一直做
直到sourse中完全沒有target字串。而strstr函數用來找target第一次出現在sourse
的位址，如果temp不等於NULL，strcpy函數把temp加上target長度(使用strelen取strget長度)
複製到tail，紀錄複製字串後剩下的字串，接著把我們要複製的replacement字串複製到temp存的
位址，最後使用strcat將調換過的sourse和後面剩下的字串合併


2.函數名稱 : strlen

作用 : 計算但不包括終止空字符的字符串str的長度

範例 ： 

/*******************************************
function name: replace
description: When mode is 1, replace the first target finded in source with the replacement.
             When mode is 2, replace left-most target by replacement until there are no targets in the source.
return value: Return the result after replace.
*******************************************/
#include <string.h>
char *replace(char *source, char *target, char *replacement, int mode) {
  	char *temp = NULL;
	switch(mode){
      case 1 :
        temp = strstr(source,target);
        if(temp != NULL){
          char tail[100];
          strcpy(tail,temp + strlen(target));
          strcpy(temp,replacement);
          strcat(source,tail);
        }
         break;
      case 2 :
        temp = strstr(source,target);
        while(temp != NULL){
         	char tail[1000];
        	strcpy(tail,temp + strlen(target));
        	strcpy(temp,replacement);
        	strcat(source,tail);
        	temp = strstr(source,target);
        }
    }
  return source;
}
說明 : 來源 程式設計實驗第十一週第一題http://134.208.3.66/status/60c3cb9192ffd7bf7c0b9a0cfb8d6ea1
根據mode1或mode2，分為case1,case2，case1只需要找一次，case2要用while迴圈一直做
直到sourse中完全沒有target字串。而strstr函數用來找target第一次出現在sourse
的位址，如果temp不等於NULL，strcpy函數把temp加上target長度(使用strelen取target長度)
複製到tail，紀錄複製字串後剩下的字串，接著把我們要複製的replacement字串複製到temp存的
位址，最後使用strcat將調換過的sourse和後面剩下的字串合併


3.函數名稱 : strcpy

作用 : 需要兩個字串當作參數，然後把第二個參數的字串複製到第一個參數的字串中，然後回傳第一個參數

範例 ： 

/*******************************************
function name: replace
description: When mode is 1, replace the first target finded in source with the replacement.
             When mode is 2, replace left-most target by replacement until there are no targets in the source.
return value: Return the result after replace.
*******************************************/
#include <string.h>
char *replace(char *source, char *target, char *replacement, int mode) {
  	char *temp = NULL;
	switch(mode){
      case 1 :
        temp = strstr(source,target);
        if(temp != NULL){
          char tail[100];
          strcpy(tail,temp + strlen(target));
          strcpy(temp,replacement);
          strcat(source,tail);
        }
         break;
      case 2 :
        temp = strstr(source,target);
        while(temp != NULL){
         	char tail[1000];
        	strcpy(tail,temp + strlen(target));
        	strcpy(temp,replacement);
        	strcat(source,tail);
        	temp = strstr(source,target);
        }
    }
  return source;
}
說明 : 來源 程式設計實驗第十一週第一題http://134.208.3.66/status/60c3cb9192ffd7bf7c0b9a0cfb8d6ea1
根據mode1或mode2，分為case1,case2，case1只需要找一次，case2要用while迴圈一直做
直到sourse中完全沒有target字串。而strstr函數用來找target第一次出現在sourse
的位址，如果temp不等於NULL，strcpy函數把temp加上target長度(使用strelen取target長度)
複製到tail，紀錄複製字串後剩下的字串，接著把我們要複製的replacement字串複製到temp存的
位址，最後使用strcat將調換過的sourse和後面剩下的字串合併


4.函數名稱 : strcat

作用 : strcat會將兩個字串合併，參數2會合併到參數1後

範例 ： 

/*******************************************
function name: replace
description: When mode is 1, replace the first target finded in source with the replacement.
             When mode is 2, replace left-most target by replacement until there are no targets in the source.
return value: Return the result after replace.
*******************************************/
#include <string.h>
char *replace(char *source, char *target, char *replacement, int mode) {
  	char *temp = NULL;
	switch(mode){
      case 1 :
        temp = strstr(source,target);
        if(temp != NULL){
          char tail[100];
          strcpy(tail,temp + strlen(target));
          strcpy(temp,replacement);
          strcat(source,tail);
        }
         break;
      case 2 :
        temp = strstr(source,target);
        while(temp != NULL){
         	char tail[1000];
        	strcpy(tail,temp + strlen(target));
        	strcpy(temp,replacement);
        	strcat(source,tail);
        	temp = strstr(source,target);
        }
    }
  return source;
}
說明 : 來源 程式設計實驗第十一週第一題http://134.208.3.66/status/60c3cb9192ffd7bf7c0b9a0cfb8d6ea1
根據mode1或mode2，分為case1,case2，case1只需要找一次，case2要用while迴圈一直做
直到sourse中完全沒有target字串。而strstr函數用來找target第一次出現在sourse
的位址，如果temp不等於NULL，strcpy函數把temp加上target長度(使用strelen取target長度)
複製到tail，紀錄複製字串後剩下的字串，接著把我們要複製的replacement字串複製到temp存的
位址，最後使用strcat將調換過的sourse和後面剩下的字串合併



5.函數名稱 : memset

作用 : 複製字符到參數str指向的字符串的前n個字符

範例 ： 
#include <stdio.h>
#include <string.h>

int main ()
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);
   
   return(0);
}

說明 : 來源https://tw.gitbook.net/c_standard_library/c_function_memset.html
memset可以將字元'$'複製7個字元到字串陣列str中
