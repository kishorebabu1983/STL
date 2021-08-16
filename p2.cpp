#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> arr={10,20,30,40};
    cout<<"array elements\n";
    for(int i=0;i<4;i++)
    {
        cout<<arr.at(i);
        cout<<endl;
    }
    cout<<"using get"<<get<1>(arr)<<endl;
    cout<<"first element="<<arr.front()<<endl;
    cout<<"back element="<<arr.back()<<endl;
    cout<<"is empty:"<<arr.empty()<<endl;
    array<int,4> arr1={100,200,300,400};
    arr.swap(arr1);
    cout<<"arr elements"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<arr.at(i);
        cout<<endl;
    }
    cout<<"arr1 elements"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<arr1.at(i);
        cout<<endl;
    }
    cout<<"after applying fill"<<endl;
    arr1.fill(-10);
    for(int i=0;i<4;i++)
    {
        cout<<arr1.at(i);
        cout<<endl;
    }

    //cout<<arr.at(1);
    cout<<"kishore valluri";
    return 0;

}