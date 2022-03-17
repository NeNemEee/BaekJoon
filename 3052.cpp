#include<iostream>

int main(){
	int sum = 0;
	int*store = new int[42];
	for(int i=0; i<42; i++){
		store[i]=0;
	}
	int*input = new int[10];
	for(int i=0; i<10; i++){
		std::cin>>input[i];
	}
	for(int i=0; i<10; i++){
		store[input[i]%42] = 1;
	}
	for(int i=0; i<42; i++){
		sum = sum + store[i];
	}
	std::cout<<sum;
	
	delete store, input;
	return 0;
}
