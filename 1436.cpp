#include<iostream>

int satan(int n);

int main(){
	int input;
	scanf("%d", &input);
	printf("%d", satan(input));
	
	return 0;
}

int satan(int n){
	int i=666;
	int tmp;
	int count = 0;
	while(1){
		tmp = i;
		if(tmp%1000==666){
			count++;
			if(count==n){
				return i;
			}
		}else{
			while(tmp>100){
				tmp = tmp/10;
				if(tmp%1000 == 666){
					count++;
					if(count==n){
						return i;
					}else{
						break;
					}
				}
			}
		}
		i++;
	}
}
