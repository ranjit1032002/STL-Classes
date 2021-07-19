#include<bits/stdc++.h>
using namespace std;
/*
	List:
	Lists are sequence containers that allow non-contiguous memory allocation. 
	As compared to vector, list has slow traversal, but once a position has been found, 
	insertion and deletion are quick. Normally, when we say a List, we talk about doubly linked list. 
	For implementing a singly linked list, we use forward list.

Functions used with List:

front() 										– Returns the value of the first element in the list.

back() 											– Returns the value of the last element in the list .

push_front(g) 									– Adds a new element ‘g’ at the beginning of the list .

push_back(g) 									– Adds a new element ‘g’ at the end of the list.

pop_front() 									– Removes the first element of the list, and reduces size of the list by 1.

pop_back() 										– Removes the last element of the list, and reduces size of the list by 1

list::begin() and list::end() in C++ STL		– begin() function returns an iterator pointing to the first element of the list

end()											– end() function returns an iterator pointing to the theoretical last element 
												  which follows the last element.
												  
list rbegin() and rend() function in C++ STL	– rbegin() returns a reverse iterator which points to the last element of the list. 
												  rend() returns a reverse iterator which points to the position 												  
												  before the beginning of the list.
												  
list cbegin() and cend() function in C++ STL	– cbegin() returns a constant random access iterator which points to the beginning of the list. 
												  cend() returns a constant random access iterator which points to the end of the list.
												  
list crbegin() and crend() function in C++ STL	– crbegin() returns a constant reverse iterator which points to the last element of the list 
												  i.e reversed beginning of container. 
												  crend() returns a constant reverse iterator 
												  which points to the theoretical element preceding the first element in the list 
												  i.e. the reverse end of the list.
												  
empty() 										– Returns whether the list is empty(1) or not(0).

insert() 										– Inserts new elements in the list before the element at a specified position.

erase() 										– Removes a single element or a range of elements from the list.

assign() 										– Assigns new elements to list by replacing current elements and resizes the list.

remove() 										– Removes all the elements from the list, which are equal to given element.

list::remove_if() in C++ STL					– Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function.

reverse() 										– Reverses the list.

size() 											– Returns the number of elements in the list.

list resize()function in C++ STL				– Used to resize a list container.

sort() 											– Sorts the list in increasing order.

list max_size() function in C++ STL				– Returns the maximum number of elements a list container can hold.'

list unique() in C++ STL									– 		Removes all duplicate consecutive elements from the list.

list::emplace_front() and list::emplace_back() in C++ STL	– emplace_front() function is used to insert a new element into the list container, 
															  the new element is added to the beginning of the list. 
															  
                                                              emplace_back() function is used to insert a new element into the list container, 
															  the new element is added to the end of the list.
															  
list::clear() in C++ STL									– clear() function is used to remove all the elements of the list container,
															  thus making it size 0.
															  
list::operator= in C++ STL									– This operator is used to assign new contents to the container by replacing
														      the existing contents.
														      
list::swap() in C++ STL										– This function is used to swap the contents of one list with another 
															  list of same type and size.
															  
list splice() function in C++ STL							– Used to transfer elements from one list to another.

list merge() function in C++ STL							– Merges two sorted lists into one

list emplace() function in C++ STL							– Extends list by inserting new element at a given position.
*/

int main()
{
	list<int> l;
	
	l.push_back(1);
	l.push_front(2);
	
	cout<<"The Elements In The List->"<<endl;
	for(int i:l)
	{
		cout<<i<<"\t";	
	}
	
	cout<<endl;
	l.erase(l.begin());
	cout<<"After Erase->"<<endl;
	for(int i:l)
	{
		cout<<i<<"\t";	
	}
	
	cout<<endl;
	
	cout<<"Size Of The List->"<<l.size()<<endl;
	
	list<int> cl(l);
	cout<<"After Copying The List Into Another List->"<<endl;
	for(int i:cl)
	{
		cout<<i<<"\t";	
	}
	
}