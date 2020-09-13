//There are various uses of namespace in C++(not in C).Here we can see that same variablename is used under diff.scopes 
//and having diff.namespaces.


#include <iostream>
using namespace std;

//Variable created inside namespace
namespace first
{
    int val=500;
}

//Global variable
int val=100;

int main() {
	int val=200;  //Local variable -- means it can only be operated within the scope.
	
	//Namepace variable will be printed here within proper value as it can be accessed outside
	// using namespace scope operator "::"
	cout<<first::val<<endl;
	cout<<val;
	return 0;
}
