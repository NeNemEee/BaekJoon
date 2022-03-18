#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	int a,b,v;
	int day;
	double dayy;
	std::cin>>a>>b>>v;
	dayy = (double)(v-a)/double(a-b);
	day = ((v-a)/(a-b));
	if(dayy>day){
		day = day + 1;
	}	
	std::cout<<(day+1);
	return 0;
}
