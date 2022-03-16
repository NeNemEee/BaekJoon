#include<iostream>

int main(){
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	int input;
	int a, b;
	std::cin>>input;
	
	for(int i=0; i<input; i++){
		std::cin>>a>>b;
		std::cout<<(a+b)<<"\n";
	}
	
	return 0;
}
