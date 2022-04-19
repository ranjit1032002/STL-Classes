#include<bits/stdc++.h>
using namespace std;

/*
Priority queues are a type of container adapters, specifically designed such that the first element of the queue is the greatest of 
all elements in the queue and elements are in non increasing order 
(hence we can see that each element of the queue has a priority {fixed order}).

Methods of priority queue are: 
priority_queue::empty() in C++ STL– empty() function returns whether the queue is empty.
priority_queue::size() in C++ STL– size() function returns the size of the queue.
priority_queue::top() in C++ STL– Returns a reference to the top most element of the queue
priority_queue::push() in C++ STL– push(g) function adds the element ‘g’ at the end of the queue.
priority_queue::pop() in C++ STL– pop() function deletes the first element of the queue.
priority_queue::swap() in C++ STL– This function is used to swap the contents of one priority queue with another priority queue 
									of same type and size.
priority_queue::emplace() in C++ STL – This function is used to insert a new element into the priority queue container, 
										the new element is added to the top of the priority queue.
priority_queue value_type in C++ STL– Represents the type of object stored as an element in a priority_queue. 
									It acts as a synonym for the template parameter.
*/

int main()
{
	/*Max Heap*/
	priority_queue<int> max; /* Jab Bhi Declare aise Karenge Tab Ye Max Heap Banega matalab hame ye maximum Element lake dega*/
	 
	/*Min Heap*/
	priority_queue<int,vector<int>, greater<int>> mini; /* Jab Bhi Declare aise Karenge Tab Ye Max Heap Banega matalab hame ye maximum Element lake dega*/
	
	max.push(1);
	max.push(2);
	max.push(3);
	max.push(0);
	
	cout<<"Size->"<<max.size()<<endl;
	int n=max.size();
	for(int i=0;i<n;i++)
	{
		cout<<max.top()<<"\t";
		max.pop();
	}
	cout<<endl;
	
	
	mini.push(5);
	mini.push(1);
	mini.push(0);
	mini.push(4);
	mini.push(3);
	
	int m=mini.size();
	for(int i=0;i<m;i++)
	{
		cout<<mini.top()<<"\t";
		mini.pop();
	}
	cout<<endl;
	
	cout<<"Khali Hai Kya Bhai->"<<mini.empty()<<endl;
}
