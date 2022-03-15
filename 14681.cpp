#include<iostream>

int main(){
	int x_point, y_point;
	std::cin>>x_point>>y_point;
	if(x_point>0){
		if(y_point>0){
			std::cout<<"1";
		}else{
			std::cout<<"4";
		}
	}else{
		if(y_point>0){
			std::cout<<"2";
		}else{
			std::cout<<"3";
		}		
	}
	return 0;
}
