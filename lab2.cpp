#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define k 100000


using namespace std;
int sum1=0;

void proverkasum ( int sum ) {
         		 if (sum <= k){
         	         cout<<"Накопления меньше 10000000:\n";
		 	     } else  {cout<<"Накопления больше 10000000:\n";
  				 }
}

void printsum(int sum,int sum1){
	cout<<"Итого:"<<sum-sum1 <<endl;
}

void proverkasrok ( int srok,  int  sum ){
   				  if (sum<k){
   				      if (srok<=30) {
	 				      sum1=sum-sum*(0.1);
	 				      printsum(sum1,sum);
	 	          	  } else if (srok>=31,srok<=120){
	 		                     sum1=sum+sum*(0.02);
	 		                     printsum(sum1,sum);
	 	 		      } else if (srok>=121,srok<=240){
	 						     sum1=sum+sum*(0.06);
	 						     printsum(sum1,sum);
	 	 		      } else if (srok>=241,srok<=365){
	 						     sum1=sum+sum*(0.12);
	 						     printsum(sum1,sum);
	 	 		      } else if (srok>365){
	 	 		      	         cout<<"Превышение количества дней"<<endl;
	 	 		      } 
				  }
	 	 		      
				  if (sum>k) {
	 	 			  if (srok<=30) {
	 					  sum1=sum-sum*(0.1);
	 					  printsum(sum1,sum);
	 	 			  } else if (srok>=31,srok<=120){
	 							 sum1=sum+sum*(0.03);
	 							 printsum(sum1,sum);
	 	 			  } else if (srok>=121,srok<=240){
	 							 sum1=sum+sum*(0.08);
	 							 printsum(sum1,sum);
	 	  			  } else if (srok>=241,srok<=365){
	 							 sum1=sum+sum*(0.15);
	 							 printsum(sum1,sum);
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
