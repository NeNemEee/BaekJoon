#include<iostream>
int def(int n);

int main(){
	int score = 0;
	int input;
	std::cin>>input;
	int*arr = new int[input];
	for(int i=0; i<input; i++){
		std::cin>>arr[i];
	}
	for(int i=0; i<input; i++){
		score = score + def(arr[i]);
	}	
	std::cout<<score;
	delete arr;
	return 0;
}

int def(int n){
	if(n==1){
		return 0;
	}	
	for(int i=n-1;i>1;i--){
		if(n%i==0){
			return 0;
		}
	}	
	return 1;
}
