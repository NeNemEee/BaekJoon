#include<iostream>

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	long long a,b,c;
	std::cin>>a>>b>>c;
	if(b>=c){
		std::cout<<"-1";
	}else{	
		std::cout<<(a/(c-b) + 1);		
	}
	return 0;
}
