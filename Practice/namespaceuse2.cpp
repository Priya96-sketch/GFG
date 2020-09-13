//This program shows use of classes inside Namespace.


#include <iostream>
using namespace std;

namespace use_class
{
    class geek
    {
        public:
        void display()
        {
            cout<<"Lets use class inside namespace"<<endl;
        }
    };
}

int main() {
   use_class::geek obj;
   obj.display();
	return 0;
}
