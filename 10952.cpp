#include<iostream>

int main(){
	int a = -1;
	int b = -1;
	
	while(1){
		std::cin>>a>>b;
		if(a==0&&b==0){
			break;
		}
		std::cout<<(a+b)<<std::endl;
	}
	
	return 0;
}
