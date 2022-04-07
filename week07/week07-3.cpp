#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char line[2000][80];
int compare(const void *p1, const void *p2)
{
	return strcmp( (char*)p1 ,(char*)p2 );
}
int main()
{
    int N;
    scanf("%d\n", &N);

    for(int i=0; i<N ; i++){
    	scanf("%s",line[i]); //左邊國家名
    	char others[80];	 //剩下的
        gets( others );	 //右邊讀完
    }

    qsort(line , N, 80 , compare);

    for(int i=0 ;i<N ; i++){
        printf("%s\n", line[i]);

    }
    return 0;
}
