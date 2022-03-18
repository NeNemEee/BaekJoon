#include<iostream>
#include<string>

int def(char a);

int main(){
	std::string input;
	std::cin>>input;
	int sum=0;
	for(int i=0; i<input.length(); i++){
		sum = sum + def(input.at(i));
	}
	std::cout<<sum;
	return 0;
}

int def(char a){
	if(a>='A'&&a<='C'){
		return 3;
	}else if(a>='D'&&a<='F'){
		return 4;
	}else if(a>='G'&&a<='I'){
		return 5;
	}else if(a>='J'&&a<='L'){
		return 6;
	}else if(a>='M'&&a<='O'){
		return 7;
	}else if(a>='P'&&a<='S'){
		return 8;
	}else if(a>='T'&&a<='V'){
		return 9;
	}else if(a>='W'&&a<='Z'){
		return 10;
	}
}
