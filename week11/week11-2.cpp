#include <stdio.h>
#include <map>
#include <string> ///����.h

char line[100];
int main()
{
    int T;
    FILE * fin = fopen("input.txt", "r");
    fscanf(fin ,"%d" ,&T);
    std::map< std::string, int> table;

    while( fgets(line ,100 ,fin)){

        printf("Ū��F = %s =\n",line); ///���B�z
        table[line]++;
    }
}
