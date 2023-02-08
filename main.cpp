#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int income;
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>income;
	    
	   if(income > 100)
	       cout <<(income - 10) <<endl;
	            
	   else
	       cout <<income <<endl;
	}
	return 0;
}
