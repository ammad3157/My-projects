#include<iostream>
using namespace std ;
int main()
{
	// Step 1 : First we add personal info 
	string studentName= "abcd";
	long long studentID=123456789; // write here only id digits .
	
	cout <<"Student Name :" << studentName <<endl;
	cout <<"Sudent Id  : Bc "<< studentID<< endl;
	
	cout <<"==== Cummunity Refill Water Depot - Daily Report" << endl << endl ;
	cout << "Order\tQuantity\tPackage Type\t\tOriginal(Rs.)\tDiscount\tFinal(Rs.)" << endl;
	 
	 //Variabls for daily summery
	 int totalContainers =0;
	 int totalDiscount =0;
	 int totalOrignalCharges =0;
	 int totalAmountCollected =0;
	 int finalAmountCollected =0;
	 
	 // step no 3 : extracxt last five digit  from id
	 // use the operators / and %  only :
	 int d5 =(studentID/10000)%10;
	 int d6 =(studentID/1000)%10;
	 int d7 =(studentID/100)%10;
	 int d8 =(studentID/10)%10;
	 int d9 =studentID%10;
	 
	 // in this step we set these extracted values in loop 
	 int digits[5]={d5 , d6 , d7 , d8 , d9};
	 for (int i =0 ; i<5 ; i++)
	 {
	 	int orderNum =i+1;
	 	int qty = digits[i] * 10 ; // hr digit ko 10 se multiply kre
	 	double rate =0;
	 	string pkgType="";
	 	
	 	// first three digit has value of 5 liter and next two has 19 liter
	 	if (orderNum <= 3)
	 	{
	 		rate = 70.0;
	 		pkgType = "5-Liter Container";  
		 }
		 else
		 {
		 	rate = 180.0;
		 	pkgType = "19-Liter Container";}
		 
           double origCharges  = qty * rate;
		 double discount =0;
		 
		 // if the qty is higher than 50 so we will give 10% discount 
		 if (qty >= 50)
		 {
		 	discount = origCharges * 0.10;}
		 	double finalCharges = origCharges-discount;
		 	// update summary 
		 	totalContainers += qty;
		 	totalOrignalCharges += origCharges;
		 	totalDiscount += discount;
		 	totalAmountCollected += finalCharges;
		
		cout << orderNum << "\t" << qty <<"\t\t"<< pkgType << "\t\t" << origCharges << "\t\t" << discount <<"\t\t"  << finalCharges <<endl ;
	}
		// step 4 status checking 
		string salesStatus = "";
		if (finalAmountCollected < 15000)
		{salesStatus = " low Sale";
                            	}
	   else if (finalAmountCollected >= 15000 && finalAmountCollected <= 29999)
	   {
	   	salesStatus = "Normal Sales";
	   	
	   }
	   else 
	  {
	    salesStatus = "High Sales";
	}
	cout << "====Daily summary ====" << endl;
	cout <<"Total Container Supplied" << totalContainers << endl ;
	cout << "Toal Original Charges  :  Rs. "   << totalOrignalCharges <<endl ;
	cout << "Total Discount   Rs :"  <<totalDiscount << endl ;
	cout <<"Final Amount Collected  Rs  :" << finalAmountCollected << endl ;
	cout << "Sales Status    Rs :"  << salesStatus << endl ;
	   return 0; 
	 
	 
}

