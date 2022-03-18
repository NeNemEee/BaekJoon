#include<iostream>
#include<string>

int main(){
	std::string sen;
	std::cin>>sen;
	int*arr = new int[30];
	for(int i=0; i<26; i++){
		arr[i]=0;
	}
	for(int i=0; i<sen.length(); i++){
		if(sen.at(i)>='a'&&sen.at(i)<='z'){
			arr[sen.at(i)-'a']++;
		}else if(sen.at(i)>='A'&&sen.at(i)<='Z'){
			arr[sen.at(i)-'A']++;
		}
	}	
	int max = -1;
	int idx = 0;	
	for(int i=0; i<26; i++){
		if(arr[i]>max){
			max = arr[i];
			idx = i;
		}
	}
	for(int i=0; i<26; i++){
		if(arr[i]==max&&idx!=i){
			std::cout<<'?';
			delete arr;
			return 0;
		}
	}
	std::cout<<(char)(idx+'A');
	delete arr;
	return 0;
}
