#include<iostream>

int main(){
	int a,b,c;
	int res;
	int idx;
	int*answer = new int[10];
	for(int i=0; i<10; i++){
		answer[i]=0;
	}
	
	std::cin>>a>>b>>c;
	res = a*b*c;
	
	if(res>100000000){
		idx=8;
	}else if(res>10000000){
		idx=7;
	}else if(res>1000000){
		idx=6;
	}else if(res>100000){
		idx=5;
	}else if(res>10000){
		idx=4;
	}else if(res>1000){
		idx=3;
	}else if(res>100){
		idx=2;
	}else if(res>10){
		idx=1;
	}else{
		idx=0;
	}
	
	int divideNumber = 1;
	for(int i=0; i<idx; i++){
		divideNumber = divideNumber * 10;
	}
	
	for(int i =idx; i>=0; i--){
		answer[res/divideNumber]++;
		res = res - divideNumber*(res/divideNumber);
		divideNumber = divideNumber/10;
	}
	
	for(int i=0; i<10; i++){
		std::cout<<answer[i]<<std::endl;
	}
	
	return 0;
}
