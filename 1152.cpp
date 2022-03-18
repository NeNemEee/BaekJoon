#include<iostream>
#include<string>

int main(){
	std::string sen;
	std::getline(std::cin, sen);
	int word=1;
	for(int i=0; i<sen.length(); i++){
		if(sen.at(i)==' '){
			if(i==0||i==sen.length()-1){
			}else{
				word++;
			}
		}
	}
	if(sen.at(0)==' '&&sen.length()==1){
		word=0;
	}
	std::cout<<word;
	return 0;
}
