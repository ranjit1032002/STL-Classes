#include<bits/stdc++.h>
using namespace std;
/*
Stack:-
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working,
 where a new element is added at one end and (top) an element is removed from that end only.  
 Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container,
  providing a specific set of member functions to access its elements.

Stack Syntax:-

For creating  a stack, we must include the <stack> header file in our code. We then use this syntax to define the std::stack:
template <class Type, class Container = deque<Type> > class stack;

Functions:-
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1) 

List of functions of Stack: 

stack::top() in C++ STL
stack::empty() and stack::size() in C++ STL
stack::push() and stack::pop() in C++ STL
stack::swap() in C++ STL
stack::emplace() in C++ STL
Recent Articles on C++ Stack
*/

int main()
{
	stack<string> s;
	
	s.push("Ranjit");
	s.push("Kumar");
	s.push("Sahoo");
	
	cout<<"Top Element->"<<s.top()<<endl;
	
	s.pop();
	cout<<"Top Element->"<<s.top()<<endl;
	
	cout<<"Size Of Stack->"<<s.size()<<endl;
	
	cout<<"Empty Or Not->"<<s.empty()<<endl;
	
	
	
}