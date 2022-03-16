#include<iostream>

int main(){
	int pairCase;
	std::cin>>pairCase;
	
	int**pairArr = new int*[pairCase];
	
	for(int i = 0; i<pairCase; i++){
		pairArr[i] = new int[2];
	}
	
	for(int i=0; i<pairCase; i++){
		std::cin>>pairArr[i][0]>>pairArr[i][1];
	}
	
	for(int i=0; i<pairCase; i++){
		std::cout<<pairArr[i][0] + pairArr[i][1];
		if(i!=(pairCase - 1)){
			std::cout<<std::endl;
		}
	}
	
	for(int i = 0; i<pairCase; i++){
		delete pairArr[i];
	}
	
	delete pairArr;
	return 0;
}
