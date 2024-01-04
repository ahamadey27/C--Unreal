
#include <iostream>
using namespace std;


//class InsideClass
//{
//public:
//    void insideClassMethod()
//    {
//        cout << "Example of Inside Class Method";
//    }
//};
//int main()
//{
//    InsideClass newObject;
//    newObject.insideClassMethod(); 
//    return 0; 
//    
//}

class OutsideClass
{
public:
	void outsideClassMethod(); 
};

void OutsideClass::outsideClassMethod()
{
	cout << " Text from the outside class method"; 
}

int main()
{
	OutsideClass outsideObject;
	outsideObject.outsideClassMethod();
	return 0; 
}

