#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string filename;


	cout << "Please enter a name for your file: ";
	cin >> filename;
	
	cout << "There are " << filename.size() << " characters in the file name.\n";
	

	return 0;
}