#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> fun(vector<int> &v,int k)
{
    vector<int> v1;
    for(auto itr=v.begin();itr!=v.end();itr++)
    {
        if(*itr<=k)
        v1.push_back(*itr);
    }
return v1;    
}


int main()
{  
int k; 
vector<int > Vector;
Vector.push_back(7);
Vector.push_back(2);
Vector.push_back(6);
Vector.push_back(1);
Vector.push_back(3);
Vector.push_back(3);
Vector.push_back(5);
cout<<"Enter the value of k: "<<endl;
cin>>k;
vector<int> v1;
v1=fun(Vector,k);
 
for(auto itr:v1)
{
    cout<<itr <<"  ";
}

}

