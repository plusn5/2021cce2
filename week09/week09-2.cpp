///�]�������
#include <stdio.h>
int grade[10]={1,2,9,8,7,6,5,4,3,0};
int main()
{
    int N=10;

    for(int k=0 ; k<10 ; k++){

        int change=0;    ///��l

        for(int i=0 ; i<N-1 ; i++){

            if(grade[i] < grade[i+1]){
                int temp = grade[i];
                grade[i] = grade[i+1];
                grade[i+1] = temp;
                change++;   ///���ק�h++
            }
        }
        if(change==0) break;  ///�S���ק�N���X
        for(int i=0;i<N;i++) printf("%d ",grade[i]);
        printf("\n");
    }
}

