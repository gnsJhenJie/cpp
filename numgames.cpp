#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
string guess,test;
void num();
bool inputwr(string a);
string level(int a);

int main(int argc, const char * argv[]) {	
	num();
	int A=0,B=0,times=0;
	bool again=true;
	while(again==true){
		getline(cin,guess);
		if(inputwr(guess)==1){
			cout<<"輸入錯誤,請重新輸入\n";
			continue;
		}		
		//讀取AB數 
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
		times++;
		if(A==4){
			again=false;
		}
		A=0;B=0;
	}
	cout<<level(times)<<endl;
    return 0;
}

//號碼產生器 (目前有bug) 
void num(){
	srand(time(NULL));
	for(int i=0; i<4;i++){
		test[i]=(rand() % ('9'-'0'+1))+'0';
		for(int k=0; k<i;k++){
			 if(i==0){
			 	break;
			 }
			 if(test[i]==test[k]){
			 	k=0;
			 	test[i]=(rand() % ('9'-'0'+1))+'0';
			 } 
		}
	}
}
//判斷input
bool inputwr(string a){
	bool wrong=0;
	if(a.length()!=4){
		wrong=1;
	}
	for(int i=0;i<4;i++){
		if(a[i]>'9'|a[i]<'0'){
			wrong=1;
		}
	}
	for(int i=0;i<4;i++){
		for(int k=0;k<i;k++){
			if(a[i]==a[k]){
				wrong=1;
			}
		}
	}
	return wrong;
}

//等第判斷
string level(int a){
	string foryou;
	if(a==1){
		foryou="What the Fuck. Are you cheating?";
	}else if(a>=2 && a<=5){
		foryou="Don't you feel happy? But it is easy shit!";
	}else if(a>=6 && a<=10){
		foryou="Dont be sad. You just a little bit foolish.";
	}else{
		foryou="Go to die one die! Stupid bitch!";			
	}
	return foryou;
} 
