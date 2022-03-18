#include<iostream>

int main(){
	char a[5];
	char b[5];
	std::cin>>a>>b;
	a[4] = a[2];
	a[2] = a[0];
	a[0] = a[4];
	b[4] = b[2];
	b[2] = b[0];
	b[0] = b[4];
	int aN = (a[0]-'0')*100 + (a[1]-'0')*10 + (a[2]-'0');
	int bN = (b[0]-'0')*100 + (b[1]-'0')*10 + (b[2]-'0');
	if(aN>bN){
		std::cout<<aN;
	}else{
		std::cout<<bN;
	}
	return 0;
}
