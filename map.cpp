// find the employee with heighest salary
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
pair<int,int> findMaxSal(map<int,int> m)
{
    pair<int,int> r=make_pair(0,0);
    map<int,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second>r.second)
        {
            r=make_pair(itr->first,itr->second);
        }
    }
    return r;
}
int main()
{
    map<int,int> m1;
    map<int,string> m2;
    map<int,int>::iterator itr1;
    map<int,string>::iterator itr2;
    m1.insert({101,20000});
    m1.insert({102,25000});
    m1.insert({103,15000});
    m1.insert({104,22000});
    cout<<"map1:\n";
    for(itr1=m1.begin();itr1!=m1.end();++itr1)
        cout<<itr1->first<<":"<<itr1->second<<endl;
    m2.insert({101,"rakesh"});
    m2.insert({102,"kishore"});
    m2.insert({103,"nani"});
    m2.insert({104,"ravi"});
    cout<<"map2:\n";
    for(itr2=m2.begin();itr2!=m2.end();++itr2)
        cout<<itr2->first<<":"<<itr2->second<<endl;
    cout<<"emp with heighest salary\n";
    pair<int,int> r=findMaxSal(m1);
    cout<<r.first<<":"<<r.second<<endl;
    itr2=m2.find(r.first);
    cout<<itr2->first<<":"<<itr2->second<<endl;
    



    return 0;
}