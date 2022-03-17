#include<iostream>
#include<string>

int main(){
	int input;
	std::cin>>input;
	int*score = new int[input];
	for(int i=0; i<input; i++){
		score[i]=0;
	}
	int scoreTemp = 0;
	std::string*arr = new std::string[input];
	for(int i=0; i<input; i++){
		std::cin>>arr[i];
		for(int j=0; j<arr[i].length(); j++){
			if(arr[i].at(j)=='O'){
				scoreTemp = scoreTemp + 1;
				score[i] = score[i] + scoreTemp;
			}else{
				scoreTemp = 0;
			}
		}
		scoreTemp = 0;
	}
	for(int i=0; i<input; i++){
		std::cout<<score[i]<<std::endl;
	}
	delete score, arr;
	return 0;
}
