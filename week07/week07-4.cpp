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
    	scanf("%s",line[i]); //�����a�W
    	char others[80];	 //�ѤU��
        gets( others );	 //�k��Ū��
    }

    qsort(line , N, 80 , compare);

	line[N][0]=0;       ///�̫᦬�����h�X�Ӫ���ơAex. N=2000,line[N]��2001�����
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
