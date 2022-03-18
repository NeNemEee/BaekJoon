#include<iostream>
#include<string>

int main(){
	int input;
	std::cin>>input;
	for(int i=0; i<input; i++){
		int forN;
		std::cin>>forN;
		std::string sen;
		std::cin>>sen;
		for(int j=0; j<sen.length(); j++){
			for(int k=0; k<forN; k++){
				std::cout<<sen.at(j);
			}
		}
		std::cout<<std::endl;
	}
	return 0;
}
