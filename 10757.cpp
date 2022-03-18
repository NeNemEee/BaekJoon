#include<iostream>
#include<string>

int main(){
	std::string a;
	std::string b;
	int*sum = new int[10100];
	int carry=0;
	int s = 0;
	std::cin>>a>>b;
	if(a.length()>b.length()){
		s=a.length();
	}else{
		s=b.length();
	}
	int af = a.length()-1;
	int bf = b.length()-1;
	for(int i=s;i>0; i--){
		if(af<0){
			sum[i]=b.at(bf)+carry-'0';
			bf--;
		}else if(bf<0){
			sum[i]=a.at(af)+carry-'0';
			af--;
		}else{
			sum[i]=a.at(af)+b.at(bf)+carry-'0'*2;
			af--;
			bf--;
		}
		
		if(sum[i]>=10){
			carry = 1;
			sum[i]=sum[i]%10;
		}else{
			carry=0;
		}
	}
	if(carry==1){
		sum[0] = 1;
		sum[1] = sum[1]%10;
		for(int i=0; i<=s; i++){
			std::cout<<sum[i];
		}
	}else{
		
		for(int i=1; i<=s; i++){
			std::cout<<sum[i];
		}
	}		
	delete sum;
	return 0;
}
