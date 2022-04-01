#include<iostream>
using namespace std;
void solve(int y, int x, int num, char**&arr);

int main(){
	int input;
	cin>>input;
	char**arr = new char*[input];
	
	
	for(int i = 0; i<input; i++){
		arr[i] = new char[input];
		for(int j = 0; j<input; j++)
			arr[i][j] = ' ';
	}
		
	
	solve(0, 0, input, arr);
	
	for(int y = 0; y<input; y++){
		for(int x = 0; x<input; x++)
			cout<<arr[y][x];
			
		printf("\n");	
		
	}

	for(int i=0; i<input; i++){
		delete arr[i];
	}
	
	delete arr;
	
	return 0;
}

void solve(int y, int x, int num, char**&arr)
{
    if(num == 1)
    {
        arr[y][x]='*';
        return;
    }
     
    int div = num/3;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i == 1 && j == 1){
			}else
                solve(y+(i*div), x+(j*div), div, arr);
        }
    }
}
