#include<stdio.h>

int main(){
	int input;
	int*count = new int[10000];
	for(int i=0; i<10000; i++){
		count[i] = 0;
	}
	scanf("%d", &input);
	for(int i=0; i<input; i++){
		int tmp;
		scanf("%d", &tmp);
		count[tmp-1]++;	
	}
	for(int i=1; i<10000; i++){
		count[i] = count[i-1]+count[i];
	}
	int tmp=0;
	for(int i=0;i<10000;i++){
		if(tmp<count[i]){
			for(int j=0; j<count[i]-tmp;j++){
				printf("%d\n", (i+1));
			}
			
			tmp = count[i];
		}
	}
	
	delete count;
	
	return 0;
}
