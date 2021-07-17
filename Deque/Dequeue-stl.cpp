#include<bits/stdc++.h>
using namespace std;

/*
Dequeue:-
Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
 Unlike vectors, contiguous storage allocation may not be guaranteed.
Double Ended Queues are basically an implementation of the data structure double ended queue. 
A queue data structure allows insertion only at the end and deletion from the front. 
*/
int main()
{
	deque<int> d;
	d.push_back(1);
	d.push_front(2);
	d.push_front(2);
	cout<<"Elements In The Dequeue->"<<endl;
	for(int i:d)
	{
		cout<<i<<"\t";
	}
	cout<<endl;
	
	cout<<"Element At First Index->"<<d.at(1)<<endl;
	
	cout<<"Element At Front->"<<d.front()<<endl;
	cout<<"Element At Back->"<<d.back()<<endl;
	
	cout<<"Empty or Not->"<<d.empty()<<endl;
	
	cout<<"before erase->"<<d.size()<<endl;
	d.erase(d.begin(),d.begin()+1);
	cout<<"After erase->"<<d.size()<<endl;
	
	d.pop_front();	/*deleting From the Front*/
	cout<<"Elements In The Dequeue After Pop Operation->"<<endl;
	for(int i:d)
	{
		cout<<i<<"\t";
	}
	cout<<endl;	
	
	d.pop_back();	/*deleting From the Back*/
	cout<<"Elements In The Dequeue After Pop Operation->"<<endl;
	for(int i:d)
	{
		cout<<i<<"\t";
	}
	cout<<endl;	
}