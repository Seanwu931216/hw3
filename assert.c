作用 : assert.h C標準庫的頭文件中提供了一個可以用於驗證程序的假設，如果這個假設是錯誤的，並打印診斷消息

範例 : #include <assert.h>
#include <stdio.h>

int main()
{
   int a;
   char str[50];
	 
   printf("Enter an integer value: ");
   scanf("%d", &a);
   assert(a >= 10);
   printf("Integer entered is %d", a);
    
   printf("Enter string: ");
   scanf("%s", &str);
   assert(str != NULL);
   printf("String entered is: %s", str);
	
   return(0);
}
說明 : 來源https://tw.gitbook.net/c_standard_library/signal_h.html
輸入一個整數，assert檢查a如果大於10，就印出"Integer entered is %d"
而程式的第二段則是使用assert判斷出入近來的字串是不是空字串，不是的話就印出來
