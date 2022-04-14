#include <stdio.h>
int main()
{
    FILE * fout = fopen("檔名.txt" , "w+"); ///fout為自訂名稱
    fprintf(fout , "Hello 哈,我在檔案裡\n");

    printf("Hello World\n");
}
