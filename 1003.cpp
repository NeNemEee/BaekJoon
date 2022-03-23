#include<iostream>
int fibonachis(int n);
int fibonachi(int n);

int main(){
	int input;
	scanf("%d". &input);
	int*arr = new int[input+1];
	for(int i=0; i<input; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<input; i++){
		fibonachis(arr[i]);
	}
	
	
	
	for(int i=0; i<input; i++){
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}

int fibonachi(int n){
	static int k;
	static int p;
	if(n==0){
		k++;
		return 0;
	}else if(n==1){
		p++;
		return 1;
	}else{
		return fibonachi(n-1)+fibonachi(n-2);
	}
}
