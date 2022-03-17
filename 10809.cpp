#include<iostream>
#include<string>

int main(){
	std::string input;
	std::cin>>input;
	int*arr= new int[30];
	for(int i=0; i<26; i++){
		arr[i] = -1;
	}
	for(int i=0; i<input.length(); i++){
		if(input.at(i)>='a'&&input.at(i)<='z'){
			if(arr[(int)(input.at(i) - 'a')]==-1){
				arr[(int)(input.at(i) - 'a')] = i;
			}
		}
	}
	for(int i=0; i<26; i++){
		std::cout<<arr[i];
		if(i!=25){
			std::cout<<' ';
		}
	}
	delete arr;
	return 0;
}
