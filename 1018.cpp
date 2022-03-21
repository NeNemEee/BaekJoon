#include<iostream>

int main(){
	int x, y;
	scanf("%d %d", &y, &x);
	char**board = new char*[y+5];
	for(int i=0; i<y; i++){
		board[i] = new char[x+5];
	}
	
	
	for(int i=0; i<y; i++){
		scanf("%s", board[i]);
	}
	

	
	int w = 64;
	for(int i=0; i<=y-8; i++){
		for(int j=0; j<=x-8; j++){
			int tmp = 0;
			char s = 'W';
			
			for(int k=i; k<i+8; k++){
				for(int l=j; l<j+8; l++){
					if(board[k][l]!=s){
						tmp++;
					}
					if(s=='W'){
						s='B';
					}else{
						s='W';
					}
					
				}
				if(s=='W'){
					s='B';
				}else{
					s='W';
				}
			}
			
			if(w>tmp){
				w = tmp;
			}
		}
	}
	
	int b = 64;
	for(int i=0; i<=y-8; i++){
		for(int j=0; j<=x-8; j++){
			int tmp = 0;
			char s = 'B';
			
			for(int k=i; k<i+8; k++){
				for(int l=j; l<j+8; l++){
					if(board[k][l]!=s){
						tmp++;
					}
					if(s=='W'){
						s='B';
					}else{
						s='W';
					}
					
				}
				if(s=='W'){
					s='B';
				}else{
					s='W';
				}
			}
			
			if(b>tmp){
				b = tmp;
			}
		}
	}
	
	if(w>b){
		printf("%d", b);
	}else{
		printf("%d", w);
	}
	
	for(int i=0; i<y; i++){
		delete board[i];
	}
	
	delete board;
	
	return 0;
}
