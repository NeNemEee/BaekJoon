#include<iostream>

int main(){
	int T;
	std::cin>>T;
	int**arr = new int*[T];
	for(int i=0; i<T; i++){
		arr[i] = new int[3];
	}
	for(int i=0; i<T; i++){
		std::cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
	}
	for(int i=0; i<T; i++){
		int a = arr[i][2]/arr[i][0];
		if(arr[i][2]%arr[i][0]!=0){
			a=a+1;
		}
		int b = arr[i][2]%arr[i][0];
		if(b==0){
			b=arr[i][0];
		}
		if(a<10){
			std::cout<<b<<'0'<<a;
		}else{
			std::cout<<b<<a;
		}
		if(i!=(T-1)){
			std::cout<<std::endl;
		}
	}
	for(int i=0; i<T; i++){
		delete arr[i];
	}
	delete arr;
	return 0;
}
