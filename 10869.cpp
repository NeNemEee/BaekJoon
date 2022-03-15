#include<iostream>

int main(){
	std::cout.precision(10);
	int a, b;
	std::cin>>a>>b;
	std::cout<<(a+b)<<std::endl<<(a-b)<<std::endl<<(a*b)<<std::endl<<(a/b)<<std::endl<<(a%b);
	return 0;
}
