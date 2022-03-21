#include<iostream>
int fibonachi(int n);

int main(){
	int input;
	scanf("%d", &input);
	printf("%d", fibonachi(input));
	return 0;
}

int fibonachi(int n){
	if(n==0){
		return 0;
	}else if(n==1||n==2){
		return 1;
	}
	
	return fibonachi(n-1)+fibonachi(n-2);
}
