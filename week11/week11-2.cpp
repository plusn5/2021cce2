#include <stdio.h>
#include <map>
#include <string> ///不用.h

char line[100];
int main()
{
    int T;
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin ,"%d" ,&T);
    std::map< std::string, int> table;

    while( fgets(line ,100 ,fin)){

        printf("讀到了 = %s =\n",line); ///做處理
        table[line]++;
    }
}
