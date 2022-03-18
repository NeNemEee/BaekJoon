#include<iostream>
#include<string>
int def(std::string a);

int main(){
	int input;
	int score = 0;
	std::cin>>input;
	std::string*arr = new std::string[input+1];
	for(int i=0; i<input; i++){
		std::cin>>arr[i];
	}
	for(int i=0; i<input; i++){
		score = score + def(arr[i]);
	}
	std::cout<<score;
	return 0;
}

int def(std::string a){
	int*arr = new int[30];
	for(int i=0; i<26; i++){
		arr[i] = 0;
	}
	for(int i=1; i<a.length(); i++){
		if(a[i]!=a[i-1]){
			if(arr[a[i]-'a']==1){
				return 0;
			}else{
				arr[a[i-1]-'a']=1;
			}
		}
	}
	
	return 1;
}
