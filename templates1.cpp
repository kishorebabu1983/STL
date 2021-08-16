#include<iostream>
using namespace std;
template<class T>
class TempExample
{
	public:
		T a,b;
		void setData(T n1,T n2)
		{
			a=n1;
			b=n2;
		}
		
		void display()
		{
			cout<<"a+b="<<a+b;
		}
};
int main()
{
	TempExample<int> ob;
	ob.setData(10,20);
	ob.display();
	return 0;
}
