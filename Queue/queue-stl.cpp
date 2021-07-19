#include<bits/stdc++.h>
using namespace std;

/*
Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement. 
Elements are inserted at the back (end) and are deleted from the front.
Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, 
providing a specific set of member functions to access its elements.

The functions supported by queue are : 

empty() – Returns whether the queue is empty.

size() – Returns the size of the queue.

queue::swap() in C++ STL: Exchange the contents of two queues but the queues must be of same type, although sizes may differ.

queue::emplace() in C++ STL: Insert a new element into the queue container, the new element is added to the end of the queue.

queue::front() and queue::back() in C++ STL– front() function returns a reference to the first element of the queue. 

back() function returns a reference to the last element of the queue.

push(g) and pop() – push() function adds the element ‘g’ at the end of the queue. pop() function deletes the first element of the queue.
*/

int main()
{
	queue<string> q;
	
	q.push("Ranjit");
	q.push("Kumar");	
	q.push("Sahoo");
	
	
	cout<<"First Element->"<<q.front()<<endl;
	
	cout<<"Size After Pop->"<<q.size()<<endl;
	q.pop();
	cout<<"First Element->"<<q.front()<<endl;
	
	cout<<"Size After Pop->"<<q.size();
	cout<<endl;
	
}