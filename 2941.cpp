#include<iostream>
#include<string>

int def(std::string a, int i);

int main(){
	std::string input;
	std::cin>>input;
	int num = 0;
	for(int i=0; i<input.length(); i++){
		if(i!=input.length()-1){
			i = i + def(input, i);
		}		
		num++;
	}
	std::cout<<num;
	return 0;
}

int def(std::string a, int i){
	if(a.at(i)=='c'){
		if(a.at(i+1)=='='){
			return 1;
		}else if(a.at(i+1)=='-'){
			return 1;
		}else{
			return 0;
		}
	}else if(a.at(i)=='d'){
		if(a.at(i+1)=='z'){
			if((i+2)<a.length()&&a.at(i+2)=='='){
				return 2;
			}
			return 0;
		}else if(a.at(i+1)=='-'){
			return 1;
		}else{
			return 0;
		}
	}else if(a.at(i)=='l'){
		if(a.at(i+1)=='j'){
			return 1;
		}else{
			return 0;
		}
	}else if(a.at(i)=='n'){
		if(a.at(i+1)=='j'){
			return 1;
		}else{
			return 0;
		}
	}else if(a.at(i)=='s'){
		if(a.at(i+1)=='='){
			return 1;
		}else{
			return 0;
		}
	}else if(a.at(i)=='z'){
		if(a.at(i+1)=='='){
			return 1;
		}else{
			return 0;
		}
	}else{
		return 0;
	}
}
