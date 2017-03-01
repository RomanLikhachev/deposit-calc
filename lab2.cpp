#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;



int main(){
	int srok,sum,d;
	 cout<<"Please,type count of days:";
	 cin>>srok;
	 cout<<"Please,type your deposite:";
	 cin>>sum;
	 if (sum<=100000){
	 	 if (srok<=30) {
	 		sum=sum-sum*(0.1);
	 	 
		  } else if (srok>=31,srok<=120){
	 		sum=sum+sum*(0.02);
	 	 
		  } else if (srok>=121,srok<=240){
	 		sum=sum+sum*(0.06);
	 	 
		  } else if (srok>=241,srok<=365){
	 		sum=sum+sum*(0.12);
	 	 }
	 }
	 if (sum>100000) {
	 	 if (srok<=30) {
	 		sum=sum-sum*(0.1);
	 	 
		  } else if (srok>=31,srok<=120){
	 		sum=sum+sum*(0.03);
	 	 
		  } else if (srok>=121,srok<=240){
	 		sum=sum+sum*(0.08);
	 	 
		  } else if (srok>=241,srok<=365){
	 		sum=sum+sum*(0.15);
	 	 }
	 }
	 cout<<"Your deposit is:"<<sum<<endl;
	 system("PAUSE");
}
