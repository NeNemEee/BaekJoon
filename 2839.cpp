#include<iostream>

int main(){
	int n;
	std::cin>>n;
	int t=0;
	int f=0;
	int min=-1;
	while(f*5<n){
		if(f*5==n){
			min = f;
			std::cout<<f;
			return 0;
		}
		f++;
	}
	while(1){
		if(3*t+5*f==n){
			std::cout<<(t+f);
			return 0;
		}
		if(3*t+5*f>n){
			f--;
		}
		if(f<0){
			std::cout<<min;
			break;
		}
		t++;
	}
	return 0;
}
