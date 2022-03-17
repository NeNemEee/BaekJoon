#include<iostream>
#include <iomanip>

int main(){
	std::cout.setf(std::ios::fixed);
	std::cout.precision(3);
	int testCase;
	std::cin>>testCase;
	for(int i=0; i<testCase; i++){
		int p;
		double sum = 0;
		double avrUp = 0;
		std::cin>>p;
		int*score = new int[p];
		for(int j=0; j<p; j++){
			std::cin>>score[j];
			sum = sum + (double)score[j];
		}
		sum = sum/(double)p;
		for(int j=0; j<p; j++){
			if(score[j]>sum){
				avrUp = avrUp + 1;
			}
		}
		std::cout<<(avrUp/p)*100.f<<'%'<<std::endl;
		delete score;
	}
	return 0;
}
