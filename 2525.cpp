#include<iostream>

int main(){
	int hour, min, cook;
	std::cin>>hour>>min>>cook;
	min = min + cook;
	
	while(((min>=0&&min<60)&&(hour<24&&hour>=0))!=1){
		if(min>=60){
			min = min - 60;
			hour= hour + 1;
		}
		
		if(hour>=24){
			hour = hour - 24;
		}
	}
	
	std::cout<<hour<<" "<<min;
	
	return 0;
}
