#include<iostream>

int main(){
	int input;
	std::cin>>input;
	
	for(int i=1; i<10 ; i++){
		std::cout<<input<<" * "<<i<<" = "<<(input*i);
		if(i!=9){
			std::cout<<std::endl;
		}
	}
	
	return 0;
}
