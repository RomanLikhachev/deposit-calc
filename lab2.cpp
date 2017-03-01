#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define k 100000


using namespace std;


void proverkasum ( int sum ) {
         		 if (sum <= k){
         	         cout<<"Накопления меньше 100000:\n";
		 	     } else  {cout<<"Накопления больше 100000:\n";
  				 }
}

void printsum(int sum){
	cout<<"Итого:"<<sum <<endl;
}

void proverkasrok ( int srok,  int  sum ){
   				  if (sum<k){
   				      if (srok<=30) {
	 				      sum=sum-sum*(0.1);
	 				      printsum(sum);
	 	          	  } else if (srok>=31,srok<=120){
	 		                     sum=sum+sum*(0.02);
	 		                     printsum(sum);
	 	 		      } else if (srok>=121,srok<=240){
	 						     sum=sum+sum*(0.06);
	 						     printsum(sum);
	 	 		      } else if (srok>=241,srok<=365){
	 						     sum=sum+sum*(0.12);
	 						     printsum(sum);
	 	 		      } else if (srok>365){
	 	 		      	         cout<<"Превышение количества дней"<<endl;
	 	 		      } 
				  }
	 	 		      
				  if (sum>k) {
	 	 			  if (srok<=30) {
	 					  sum=sum-sum*(0.1);
	 					  printsum(sum);
	 	 			  } else if (srok>=31,srok<=120){
	 							 sum=sum+sum*(0.03);
	 							 printsum(sum);
	 	 			  } else if (srok>=121,srok<=240){
	 							 sum=sum+sum*(0.08);
	 							 printsum(sum);
	 	  			  } else if (srok>=241,srok<=365){
	 							 sum=sum+sum*(0.15);
	 							 printsum(sum);
	 	              }	else if (srok>365){
	 	 		      	         cout<<"Превышение количества дней"<<endl;
	 	 		      } 	
	 	 		  
				 } 	 	   

}
int main(){
	setlocale(0,"RUS");
	int srok, sum;
	 cout<<"Please,type your deposite:";
	 cin>>sum;
	 cout<<"Please,type count of days:";
	 cin>>srok;
	 proverkasum(sum);
	 proverkasrok(srok,sum);
	 system("PAUSE");
}
