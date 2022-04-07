#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char line[2001][80];
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

	line[N][0]=0;       ///最後收尾的多出來的資料，ex. N=2000,line[N]第2001筆資料
	int combo=1;
    for(int i=0 ;i<N ; i++){
    	if(strcmp( line[i] , line[i+1])==0 ){
    		combo++;
    	}else{
    		 printf("%s %d\n", line[i], combo);
    	}


    }
    return 0;
}
