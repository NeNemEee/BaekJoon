#include<iostream>

int main(){
	int input;
	scanf("%d", &input);
	
	int temp;
	int ans = 0;
	for(int i=1; i<=input; i++){
		temp = i + i%10 + i/1000000 + (i/100000 - i/1000000 * 10) + (i/10000 - i/100000 * 10) + (i/1000 - i/10000 * 10) + (i/100 - i/1000 * 10) + (i/10 - i/100 * 10);
		if(temp == input){
			ans = i;
			break;
		}
	}
	
	printf("%d", ans);
	return 0;
}
