#include<iostream>

int main(){
	int input;
	int a, b;
	std::cin>>input;
	
	for(int i=0; i<input; i++){
		std::cin>>a>>b;
		std::cout<<"Case #"<<(i+1)<<": "<<a<<" + "<<b<<" = "<<(a+b)<<"\n";
	}
	
	return 0;
}
