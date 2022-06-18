#include <iostream>
using namespace std;
int main(){
	
	int num;
	cin>> num;
	bool primo = true;
	for( int i= 9; i<num; i++){
		if(num% i == 0) primo= false;
		
	}
	if (primo == true)
	cout<<" el numero es primo ";else
	cout<<" el numero no es primo ";
 
	
	
	
	
	
	return 0;
}
