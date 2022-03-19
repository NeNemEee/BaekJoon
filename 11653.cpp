#include<iostream>

int main(){
	int n;
	std::cin>>n;
	int i=2;
	while(1){
		if(n==1){
			break;
		}
		if(n%i==0){
			n=n/i;
			std::cout<<i<<std::endl;
		}else if(i==n){
			std::cout<<n;
			break;
		}else{
			i++;
		}
	}
	return 0;
}
