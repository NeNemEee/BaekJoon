#include<iostream>

int main(){
	int a, b;
	std::cin>>a>>b;
	std::cout<<a*(b%10)<<std::endl<<a*((b%100)/10)<<std::endl<<a*(b/100)<<std::endl<<(a*b);
	
	return 0;
}
