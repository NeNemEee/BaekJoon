#include<iostream>

int def(int n);

int main(){
	int m,n;
	int sum=0;
	int min = -1;
	std::cin>>m>>n;
	for(int i=m, k=0; i<=n; i++){
		int res = def(i);
		if(k==0&&res!=0){
			min = res;
			k=1; 
		}
		sum = sum + res;
	}
	if(sum==0){
		std::cout<<"-1";
	}else{
		std::cout<<sum<<std::endl<<min;
	}
	
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
	return n;
}
