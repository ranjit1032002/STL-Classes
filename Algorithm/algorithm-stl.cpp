#include<bits/stdc++.h>
using namespace std;
/*
Algorithms

The header algorithm defines a collection of functions especially designed to be used on ranges of elements.
They act on containers and provide means for various operations for the contents of the containers.
*/

int main()
{
	vector<int> v;
	 
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(7);
	
	cout<<"Finding 6(T/F)->"<<binary_search(v.begin(),v.end(),6)<<endl;
	
	cout<<"lower Bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; //It Will give The Iterator
	
	cout<<"Upper Bound->"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
	
	int a=3;
	int b=5;
	cout<<"Max of 3,5->"<<max(a,b)<<endl;;
	cout<<"Min of 3,5->"<<min(a,b)<<endl;
	
	swap(a,b);
	cout<<endl<<"a->"<<a<<endl;
	
	string abcd="abcd";
	reverse(abcd.begin(),abcd.end());
	cout<<"string After reverse->"<<abcd<<endl;
	
	rotate(v.begin(),v.begin()+1,v.end());
	cout<<"after rotate"<<endl;
	for(int i:v)
	{
		cout<<i<<"\t";
	}
	cout<<endl;
	
	sort(v.begin(),v.end());
	cout<<"After Sorting->"<<endl;
	for(int i:v)
	{
		cout<<i<<"\t";
	}
}