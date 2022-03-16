#include<iostream>

int main(){
	int*arr = new int[9];
	
	int i=0;
	while(i<9){
		std::cin>>arr[i];
		i++;
	}
	i = 0;
	for(int j=1; j<9; j++){
		if(arr[i]<arr[j]){
			i = j;
		}
	}
	
	std::cout<<arr[i]<<std::endl<<i+1;
	
	delete arr;
	
	return 0;
}
