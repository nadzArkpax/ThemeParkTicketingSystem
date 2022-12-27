#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	
	char option = 'Y';
	char customer = ' ';
	string name = " ";
	string contact = " ";
	string id = " ";
	string emergency = " ";
	int count = 0;
	

	//do{
		
		cout << "\n\t\t    WELCOME TO LANG BUANA THEME PARK" << endl;
		cout << "\t\t----------------------------------------" << endl;
		
		cout << "\n\n------------------------------------------------------------------------" << endl;
		cout << "CATEGORY" << "\t\t\t\t\tPRICE" << endl;
		cout << "------------------------------------------------------------------------" << endl;
		cout << "\t\t" << "\tINDIVIDUAL" << "\t\tWEEKDAY" << "\t\tWEEKEND" << endl;
		
		cout << "THEME PARK" << "\t\tAdults" << "\t\t\tRM299" << "\t\tRM320" << endl;
		cout << "\t\t" << "\tChild" << "\t\t\tRM269" << "\t\tRM299" << endl;
		cout << "\t\t" << "\tSenior Citizen" << "\t\tRM219" << "\t\tRM229" << endl;
		
		cout << "------------------------------------------------------------------------" << endl;
		cout << "WATER PARK" << "\t\tAdults" << "\t\t\tRM249" << "\t\tRM279" << endl;
		cout << "\t\t" << "\tChild" << "\t\t\tRM229" << "\t\tRM259" << endl;
		cout << "\t\t" << "\tSenior Citizen" << "\t\tRM189" << "\t\tRM199" << endl;
		
		cout << "------------------------------------------------------------------------" << endl;
		cout << "NIGHT PARK" << "\t\tAdults" << "\t\t\tRM189" << "\t\tRM209" << endl;
		cout << "\t\t" << "\tChild" << "\t\t\tRM159" << "\t\tRM169" << endl;
		cout << "\t\t" << "\tSenior Citizen" << "\t\tRM139" << "\t\tRM149" << endl;
		
		cout << "\n\n------------------------------------------------------------------------" << endl;
		cout << "CATEGORY" << "\t\tPACKAGES" <<"\t\tPRICE" << endl;
		cout << "------------------------------------------------------------------------" << endl;
		cout << "\t\t\t\t\t\tWEEKDAY" << "\t\tWEEKEND" << endl;
		
		cout << "\t" << "\n\t\t\tFAMILY PACKAGES" << endl;
		cout << "THEME PARK" << "\t\t4 person per set" << "\tRM659" << "\t\tRM699" << endl;
		
		cout << "    OR    " << "\n\t\t\tCOUPLES PACKAGES" << endl;
		cout << "WATER PARK" << "\t\t2 person per set" << "\tRM509" << "\t\tRM539" << endl;
		
		cout << "    OR    " << "\n\t\t\tCOMBO PACKAGES" << endl;
		cout << "NIGHT PARK" << "\t\t30 person per set" << "\tRM2469" << "\t\tRM2500" << endl;
		
		cout << "\n\n------------------------------------------" << endl;
		cout << "ADD-ONS" <<"\t\t\t\tPRICE" << endl;
		cout << "------------------------------------------" << endl;
		
		cout << "Cap" << "\t\t\t\tRM49" << endl;
		cout << "Sling-bag" << "\t\t\tRM29" << endl;
		cout << "T-Shirt" << "\t\t\t\tRM55" << endl;
		cout << "Lightstick" << "\t\t\tRM99" << endl;
		cout << "Float" << "\t\t\t\tRM25" << endl;
		
		
		//while (option != 'N' && option != 'n'){
		
			cout << "\n\n\t\t---------------------------------------------------" << endl;
			cout << "\t\t\t\tPERSONAL INFORMATION" << endl;
			cout << "\t\t---------------------------------------------------" << endl;
		
			cout << "\nEnter your full name                       : ";
			getline (cin, name);
			
			cout << "Enter your MY ID [FORMAT: XXXXXX-XX-XXXX]  : ";
			cin >> id;
			
			cout << "Enter your contact number                  : ";
			cin >> contact;
		
			cout << "Enter your emergency contact number        : ";
			cin >> emergency;
			
			
	
		//}
		
		cout << "\n\n\t\t-----------------------------------------" << endl;
		cout << "\t\t\t\tRECEIPT" << endl;
		cout << "\t\t-----------------------------------------" << endl;
		
		cout << "Name                           : " << name << endl;
		cout << "MY ID [FORMAT: XXXXX-XX-XXXX]  : " << id << endl;
		cout << "Contact number                 : " << contact << endl;
		cout << "Emergency contact number       : " << emergency << endl;
		
	//} while (customer == 'Y' || customer == 'y');
	
	//cout <<"\nNumber of customers of the day = " << count;		
			
	return 0;
}
