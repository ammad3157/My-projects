#include<iostream>
using namespace std;
int main()
{
	// Step 1 : Student Informaton ( Hard-coded)
	//  Note Write only Student Here !
	string studentName= "jklg";
	long long studentId=123456789;  // Only write the Id digits here!
	cout<<"Student Name :"<<studentName << endl;
	cout <<"Student Id Bc :"<<studentId <<endl<<endl;
	
	// Step 2 : Extract the digit from Id by using % and /
	// Let  that  id is 123456789 so 2nd = 2 ...........
	// Extarct the 2nd digit from id
	int d2 =(studentId/10000000)%10;
	// Now extract the 4th digit from id
	int d4 =(studentId/100000)%10;
    // Now extract the 5th digit from id 
    int d5=(studentId/10000)%10;
   // Now extract the th digit from id 
    int d6=(studentId/1000)%10;
     // Now extract the 8th digit from id 
     int d8=(studentId/10)%10;
     cout <<"Extract the digits: "<<d2 <<", " <<d4 <<", " <<d5 <<", " <<d6 <<", " <<d8 <<", " <<endl <<endl ;
     // Step 3 & 4: Service Desk Assignments & Resolution Time
     int networkTickets=d2;
     int labTickets=d4;
     int lmsTickets=d5;
     int accountTickets=d6;
     int hardwareTickets=d8;
     
     int timeNetwork=networkTickets*20;
     int timeLab    =labTickets*20;
     int timeLms    =lmsTickets*20;
     int timeAccount=accountTickets*20;
     int timeHardware=hardwareTickets*20;
     // Summary counter 
     int lightCount=0;
     int moderateCount=0;
     int heavyCount =0;
     // Status string
     string statusNetwork , statusLab , statusLms , statusAccount , statusHardware;
     // Use of (if or else )conditions
     
     // Use first  for Network system
     if (networkTickets >= 7)
	 {
     statusNetwork ="Heavy";
     heavyCount++;
 }
 else if (networkTickets >= 4)
 {
 statusNetwork="Moderate";
 moderateCount++;
 }
 else
  { statusNetwork="Light";
  lightCount++;
}
  
  // Now use the conditions for Lab system
       if (labTickets >= 7)
	 {
     statusLab="Heavy";
     heavyCount++;
 }
 else if (labTickets >= 4)
 {
 statusLab="Moderate";
 moderateCount++;
 }
 else
  { statusLab="Light";
  lightCount++;
}

// Now use conditions for lms system 
    if (lmsTickets >= 7) 
	{
        statusLms = "Heavy";
        heavyCount++;
    } 
	else if (lmsTickets >= 4) 
	{
        statusLms = "Moderate";
        moderateCount++;
    } 
	else
	 {
        statusLms = "Light";
        lightCount++;
    }
    
    // Now we use conditions fo Account system
    if (accountTickets >= 7)
    {
    	statusAccount ="Heavy";
    	heavyCount++;
	}
    else if (accountTickets >= 4)
    {
    	statusAccount ="Moderate";
    	moderateCount++;
    	
	}
	else
	{ statusAccount="Light";
	lightCount++;
	}
  // Now use conditons for Hardware system
  if (hardwareTickets >= 7)
   {
        statusHardware = "Heavy";
        heavyCount++;
    } 
	else if (hardwareTickets >= 4) 
	{
        statusHardware = "Moderate";
        moderateCount++;
    } 
	else
	 {
        statusHardware = "Light";
        lightCount++;
    }
    
    // In this step we summarize the output summary
    cout<<"-----University IT HElpDesk Workload Report-----" << endl;
    cout<<"Unit\t\t\tTotal Tickets\tResolution Time\tStatus"<<endl;
    
    cout<<"Network Support:\t"<<networkTickets << "\t\t" << timeNetwork << "\t\t" << statusNetwork<<endl;
    cout<< "Lab support :\t" <<labTickets <<"\t\t" << timeLab << "\t\t" << statusLab << endl;
    cout<< "Lms support :\t" <<lmsTickets <<"\t\t" << timeLms << "\t\t" << statusLms << endl;
    cout<< "Account support :\t" <<accountTickets <<"\t\t" << timeAccount << "\t\t" << statusAccount << endl;
    cout<< "Hardware support :\t" <<hardwareTickets <<"\t\t" << timeHardware << "\t\t"  << statusHardware << endl;
    
    cout <<" ======SUMMARY======"<<endl;
    cout << "Light desks :"<<lightCount << endl;
    cout <<" Moderate desks :"<<moderateCount << endl;
    cout<<" Heavy desks :"<< heavyCount << endl;
    return 0;
  
  
  
  
  
  
 	

     
}
