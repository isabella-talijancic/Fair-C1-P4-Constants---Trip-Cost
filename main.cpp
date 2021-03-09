//C1 P4 Constants - Trip Cost

#include <iostream>
#include <string>
using namespace std;

// Variable Declarations
string destination;
char decision;
int milesDriven;
double gasPrice;
const int MPG = 26;
const float INCREASE_PERCENT = 1.10;
double increasedTripCost;
double tripCost = 0;
double tripCostEnd = 0;

int main()
	{
	cout << "☆ ☆ ☆ ☆ ☆ Trip Cost: Gasoline ☆ ☆ ☆ ☆ ☆\n";
  
	cout << "\nEnter the destination: ";
	cin >> destination;
	cout << "\nEnter the miles driven: ";
	cin >> milesDriven;
	cout << "\nEnter the price per gallon of gas: $";
	cin >> gasPrice;
	
	//Processing
	
	tripCost = (milesDriven/MPG) * (gasPrice);
    increasedTripCost = tripCost + (tripCost * INCREASE_PERCENT);
    
    cout << "\nDid gas prices increase during the trip (Y/N)? ";
    cin >> decision;
    
    if (decision == 'Y' || decision == 'y')
    		tripCostEnd = increasedTripCost;			      
	
	else if (decision == 'N' || decision == 'n')
	      
	        tripCostEnd = tripCost; 
	else
		  
		          tripCostEnd = 0;
		  
    
    cout << "\nTrip cost is: $ " << tripCostEnd;

    cout << "\n\nEnd of Program";
    return 0;
	}