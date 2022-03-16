#include<iostream>

int main(){
	int idx = 0;
	int input;
	
	std::cin>>input;
	int temp = input;
	while(idx==0 ||input != temp){
		temp = (temp%10)*10 + (temp/10 + temp%10)%10;
		idx++;
		
	}
	std::cout<<idx;
	
	return 0;
}
