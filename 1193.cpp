#include<iostream>
#include<cmath>
int main(){
	int input;
	std::cin>>input;
	int i=1;
	while(1){
		if(input>=(1+(i-1)*i/2)&&input<(1+(i+1)*i/2)){
			if(i%2==0){
				std::cout<<1+(input-(1+(i-1)*i/2))<<'/'<<i-(input - (1+(i-1)*i/2));
			}else{
				std::cout<<i-(input - (1+(i-1)*i/2))<<'/'<<1+(input-(1+(i-1)*i/2));
			}
			break;
		}
		i++;
	}
	
	return 0;
}
