#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
string test,guess;

//���X���;� 
void num(){
	srand(time(NULL));
	for(int i=0; i<4;i++){
		test[i]=(rand() % ('9'-'0'+1))+'0';
		for(int k=0; k<i;k++){
			 if(i==0){
			 	break;
			 }
			 else if(test[i]==test[k]){
			 	k=0;
			 } 
		}
	}
}
int main(int argc, const char * argv[]) {	
	num();
	for(int i=0; i<4;i++){
		cout<<test[i];
	}cout<<endl;
	int A=0,B=0;
	bool again=true;
    while(again==true,cin>>guess){
		
		if(guess.length()!=4){
			cout<<"��J���~\n";
		}
		
		//Ū��AB�� 
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(guess[j]==test[i] && j==i){
					A++;
				}
				else if(guess[j]==test[i]){
					B++;
				}
			}
		}
		cout<<A<<"A"<<B<<"B"<<endl;
		if(A==4){
			again=false;
		}
		A=0;B=0;
	}
	cout<<"���ߩp�j��è\n";
    return 0;
}

