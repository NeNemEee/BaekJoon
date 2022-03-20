#define pi 3.14159265358979323846264338327950288419716939937510582097
#include<iostream>
#include<cmath>

int main(){
	int input;
	scanf("%d", &input);
	printf("%.6f\n", (double)pow(input,2)*pi);
	printf("%.6f", (double)pow(input,2)*2);
	return 0;
}
