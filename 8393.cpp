#include<iostream>

int main(){
	int input;
	std::cin>>input;
	int sum =0;
	
	for(int i = 1; i<=input; i++){
		sum = sum + i;
	}
	
	std::cout<<sum;
	
	return 0;
	
}
