#include<iostream>

int main(){
	int input;
	std::cin>>input;
	
	for(int i=0; i<input; i++){
		for(int j=i+1; j<input; j++){
			std::cout<<' ';
		}
		
		for(int j=0; j<=i; j++){
			std::cout<<'*';
		}
		
		std::cout<<'\n';
	}
	
	return 0;
}
