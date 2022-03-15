#include<iostream>

int main(){
	int hour, min;
	std::cin>>hour>>min;
	
	if(min-45<0){
		hour = hour - 1;
		min = min + 15;
	}else{
		min = min -45;
	}
	
	if(hour<0){
		hour = hour + 24;
	}
	
	std::cout<<hour<<" "<<min;
	
	return 0;
}
