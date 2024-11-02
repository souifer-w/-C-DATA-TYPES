#include <iostream>
using namespace std;

int main() {

	string myname ;
	int age = 44;
	string mycity ;
	string mycountry ;
	double mysalry = 50000;
	char mychar ;
	bool mybool ;

	cout << "you  entered my nmame" << endl;
	cin >> myname;
	  

	cout << "you entered my age " << endl;
	cin >> age;


	cout << "you enter my country " << endl;
	cin >> mycountry;


	cout << " you entered my salry" << endl;
	cin >> mysalry; 


	cout << "you entered my char " << endl;
	cin >> mychar;

	cout << " you entered my bool  " << endl;
	cin >> mybool;

	cout << myname << "mohammad\n";
	cout << age << 44; "years\n";
	cout << mycity  <<"marrakech\n";
	cout << mycountry <<"morroco\n";
	cout << mysalry << 50000 << endl;
	cout <<  mychar << 'm'<< endl;
    cout << mybool << true << endl;

	return 0;
}