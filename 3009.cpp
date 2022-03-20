#include<iostream>

int main(){
	int*arr = new int[1010];
	int*arrs = new int[1010];
	for(int i=1; i<=1000; i++){
		arr[i] = 0;
	}
	for(int i=1; i<=1000; i++){
		arrs[i] = 0;
	}
	int a,b;
	for(int i=0; i<3; i++){
		scanf("%d %d", &a, &b);
		arr[a]++;
		arrs[b]++;
	}
	for(int i=0; i<=1000; i++){
		if(arr[i]==1){
			printf("%d ", i);
			break;
		}
	}
	for(int i=0; i<=1000; i++){
		if(arrs[i]==1){
			printf("%d", i);
			break;
		}
	}
	
	delete arr, arrs;
	return 0;
}
