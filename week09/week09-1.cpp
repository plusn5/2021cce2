#include <stdio.h>
int grade[10]={1,2,9,8,7,6,5,4,3,0};
int main()
{
    int N=10;
    for(int i=1 ; i<10 ; i++){
        for(int i=0 ; i<N-1 ; i++){
            if(grade[i] < grade[i+1]){
                int temp = grade[i];
                grade[i] = grade[i+1];
                grade[i+1] = temp;
            }
        }
        for(int i=0;i<N;i++) printf("%d ",grade[i]);
        printf("\n");
    }
}

