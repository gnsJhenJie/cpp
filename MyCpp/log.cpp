#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   long long int first,t,rule=0;
   long double k=1.0,base;
   cout<<"������Log�Ȫ��p�⾹\n"; 
   cout<<"��J����\n";
   cin>>base;
   cout<<"��J����\n";
   cin>>t;
   for(int i=1;i<=t;i++){
   k=k*base;
   }
   while(1){
   k=k/10.0;
   rule++;
   if(k>=1&&k<10){
   break;
   }	
   }
   first=rule;
   cout<<base<<"^"<<t<<"��Log��:"<<endl<<endl; 
   cout<<"����: "<<first<<endl<<"����: "; 
   printf("%.4f\n",log10(k));
   int i=k;
   cout<<endl<<endl<<base<<"^"<<t<<endl; 
   cout<<"���: "<<first+1<<endl;
   cout<<"�̰���Ʀr: "<<i<<endl; 
	return 0;
}
 
