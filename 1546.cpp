#include<iostream>

int main(){
	std::cout.precision(5);
	int input;
	double average =0;
	double max = 0;
	std::cin>>input;
	double*arr = new double[input];
	for(int i=0; i<input; i++){
		std::cin>>arr[i];
		if(max<arr[i]){
			max = arr[i];
		}
	}	
	for(int i=0; i<input; i++){
		arr[i] = (arr[i]/max)*100;
		average = average + arr[i];
	}
	std::cout<<average/(double)input;
	delete arr;
	return 0;
}
