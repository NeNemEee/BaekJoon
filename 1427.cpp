#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	char*input = new char[11];
	cin>>input;
	
	int i=0;
	while(1){
		if(input[i]=='\0'){
			break;
		}
		
		i++;
	}
	
	stable_sort(input, input+i, greater<char>());
	
	for(int j=0; j<i; j++){
		cout<<(int)(input[j]-'0');
	}
	
	delete[] input;
	return 0;
}
