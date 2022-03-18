#include<iostream>

int fun(int n, int k);

int main(){
	int test;
	std::cin>>test;
	for(int i=0; i<test; i++){
		int k,n;
		std::cin>>k>>n;
		std::cout<<fun(n, k);
		if(i!=(test-1)){
			std::cout<<std::endl;
		}
	}
	return 0;
}

int fun(int n, int k){
	if(k==0){
		return n;
	}else if(n==1){
		return 1;
	}else if(n==2){
		return (k+2);
	}else{
		return (fun(n-1,k) + fun(n,k-1));
	}
}
