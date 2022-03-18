#include<iostream>
#include<cmath>
int cal(int i);

int main(){
	int input;
	std::cin>>input;
	int i = 1;
	while(1){
		if(input==1){
			std::cout<<'1';
			break;
		}else if(input<=cal(i)&&input>cal(i-1)){
			std::cout<<i;
			break;
		}
		i++;
	}
	return 0;
}

int cal(int i){
	return (3*pow(i,2) - 3*i + 1);
}
