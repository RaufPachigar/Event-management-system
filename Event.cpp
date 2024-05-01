#include<iostream>
#include <cmath>

using namespace std;
        char first_name[20],last_name[20];
		int no_guest,no_min;
		const double CostPerHour = 18.50;
        const double CostPerMinute =0.40;
        const double CostOfDinner = 20.70;
        int no_of_server;
        float Cost1,Cost2,CostForOneServer;
        int TotalFoodCost,TotalCost;
        float AverageCost,DepositAmount;

/*class members{
	public:
		char first_name,last_name;
		int no_guest,no_min;
		const double CostPerHour = 18.50;
        const double CostPerMinute =0.40;
        const double CostOfDinner = 20.70;
        int server;
        float Cost1,Cost2,CostForOneServer;
        int TotalFoodCost,TotalCost;
        float AverageCost,DepositAmount;
};*/

class customer_Details{
	    
		public :
	
		void customer(){
			
			
			cout<<"Enter first name :"<<endl;
			cin>>first_name;
			cout<<"Enter last name :"<<endl;
			cin>>last_name;
			cout<<"Enter Number of Guest :"<<endl;
			cin>>no_guest;
			cout<<"Enter Duaration of Event in Minutes :"<<endl;
			cin>>no_min;
		}
		
		void server()
		{
            no_of_server=no_guest/20;
            cout<<"Number of Servers :"<<ceil(no_of_server)<<endl;
            
            Cost1 = (no_min / 60) * CostPerHour;
            Cost2 = (no_min % 60) * CostPerMinute;
            CostForOneServer = Cost1 + Cost2;
            cout<<"Cost of servers : "<<CostForOneServer*no_of_server<<endl;
            
      
		}
		
		void food()
		{
			TotalFoodCost = no_guest * CostOfDinner;
			AverageCost = TotalFoodCost / no_guest;
			cout<<"Average cost per person :"<<AverageCost<<endl;
			}	
			
			void Total_Cost()
			{
				TotalCost = TotalFoodCost + (CostForOneServer * no_of_server);
				cout<<"Total cost is :"<<TotalCost<<endl;
			}
			
			void deposit()
			{
				DepositAmount = TotalCost * 0.25;
				cout<<"Please diposit 25% deposit to reserve the event "<<endl;
				cout<<"Deposit Needed is:"<<DepositAmount<<endl;
			}
			
	
	
};





int main()
{
	char event_name[20];
	cout<<"**********Event Management System**********\n\n";
	cout<<"Enter name of the event : "<<endl;
	cin>>event_name;
		
	customer_Details c1;

	
	c1.customer();
	cout<<"**********Event Estimation for "<<first_name<<" **********"<<endl;
	c1.server();
	c1.food();
	c1.Total_Cost();
	c1.deposit();
	
	
	
}
