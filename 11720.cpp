#include<iostream>

int main(){
	int input;
	int sum = 0;
	std::cin>>input;
	char*arr = new char[input+1];
	for(int i=0; i<input; i++){
		std::cin>>arr[i];
		sum = sum + (int)arr[i] - (int)'0';
	}
	std::cout<<sum;
	delete arr;
	return 0;
}
