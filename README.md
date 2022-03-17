# 2021cce2
程式設計二
Week04
```c

#include <stdio.h>
char line[1002];
int main()
{
	int t=1;
	while( gets(line)){
		if(t>1) printf("\n");

		int ans[256]={};
		for(int i=0; line[i]!=0 ; i++){
			char c=line[i];
			ans[c]++;
		}

		for(int c=128 ;c>=32 ;c--){
			if(ans[c]!=0) printf("%d %d\n",c,ans[c]);
		}
		t++;
	}
	return 0;
}

```
```c
///tell me the  frequencies
#include <stdio.h>
char line[1002];
int main()
{
	int t=1;
	while( gets(line)){
		if(t>1) printf("\n");

		int ans[256]={};
		for(int i=0; line[i]!=0 ; i++){
			char c=line[i];
			ans[c]++;
		}
		for(int f=1 ; f<1000 ; f++){
			for(int c=128 ;c>=32 ;c--){
				if(ans[c]==f) printf("%d %d\n",c,ans[c]);
			}
		}
		t++;
	}
	return 0;
}

```
```c
#include <stdio.h>
char line[1002];
int main()
{
	int t=1;
	while( gets(line)){
		if(t>1) printf("\n");

		int max=0;
		int ans[256]={};
		for(int i=0; line[i]!=0 ; i++){
			char c=line[i];
			ans[c]++;
			if(ans[c]>max) max=ans[c];
		}
		for(int f=1 ; f<=max ; f++){
			for(int c=128 ;c>=32 ;c--){
				if(ans[c]==f) printf("%d %d\n",c,ans[c]);
			}
		}
		t++;
	}
	return 0;
}

```
```c
///資料結構
#include <stdio.h>
struct DATA{
    char c;
    int ans;
};

struct DATA list1;
struct DATA lists[100];
int main()
{
    list1.c='A';
    list1.ans=1;
}

```
