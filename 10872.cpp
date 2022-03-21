#include<iostream>
int factorial(int n);
int main(){
	int input;
	scanf("%d", &input);
	printf("%d", factorial(input));
	return 0;
}

int factorial(int n){
	 if(n==1||n==0){
	 	return 1;
	 }
	 return n*factorial(n-1);
}
