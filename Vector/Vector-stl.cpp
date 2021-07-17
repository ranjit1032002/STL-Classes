#include<bits/stdc++.h>
using namespace std;

/*
Vectors:-
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted,
with their storage being handled automatically by the container. Vector elements are placed in contiguous storage 
so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. 
Inserting at the end takes differential time, as sometimes there may be a need of extending the array.
Removing the last element takes only constant time because no resizing happens. 
Inserting and erasing at the beginning or in the middle is linear in time.


Certain functions associated with the vector are:-

Iterators:-
1.begin() 	– 	Returns an iterator pointing to the first element in the vector
2.end() 	– 	Returns an iterator pointing to the theoretical element that follows the last element in the vector
3.rbegin()  – 	Returns a reverse iterator pointing to the last element in the vector (reverse beginning). 
				It moves from last to first element
4.rend() 	– 	Returns a reverse iterator pointing to the theoretical element preceding 
				the first element in the vector (considered as reverse end)
5.cbegin() 	– 	Returns a constant iterator pointing to the first element in the vector.
6.cend() 	– 	Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
7.crbegin() – 	Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). 
			  	It moves from last to first element
8.crend() 	– 	Returns a constant reverse iterator pointing to the theoretical element preceding 
				the first element in the vector (considered as reverse end)


Capacity:-
1.size() 	  		– Returns the number of elements in the vector.
2.max_size()  		– Returns the maximum number of elements that the vector can hold.
3.capacity()  		– Returns the size of the storage space currently allocated to the vector expressed 
					  as number of elements.
4.resize(n)   		– Resizes the container so that it contains ‘n’ elements.
5.empty()     		– Returns whether the container is empty.
6.shrink_to_fit() 	– Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
7.reserve()   		– Requests that the vector capacity be at least enough to contain n elements.


Element access:-
1.reference operator [g]    – Returns a reference to the element at position ‘g’ in the vector
2.at(g) 					– Returns a reference to the element at position ‘g’ in the vector
3.front() 				    – Returns a reference to the first element in the vector
4.back() 					– Returns a reference to the last element in the vector
5.data() 					– Returns a direct pointer to the memory array used internally by the vector 
							  to store its owned elements.


Modifiers:-
1.assign() 			– It assigns new value to the vector elements by replacing old ones
2.push_back() 		– It push the elements into a vector from the back
3.pop_back() 		– It is used to pop or remove elements from a vector from the back.
4.insert() 			– It inserts new elements before the element at the specified position
5.erase() 			– It is used to remove elements from a container from the specified position or range.
6.swap() 			– It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
7.clear() 			– It is used to remove all the elements of the vector container
8.emplace() 		– It extends the container by inserting new element at position
9.emplace_back() 	– It is used to insert a new element into the vector container, 
					  the new element is added to the end of the vector
*/

int main()
{
	vector<int> v;
	cout<<"Capacity->"<<v.capacity()<<endl;

/* Inserting Element In The Vector Using push_back()*/	
	v.push_back(1);
	cout<<"Capacity->"<<v.capacity()<<endl;
	
	v.push_back(2);
	cout<<"Capacity->"<<v.capacity()<<endl;
	
	v.push_back(3);
	cout<<"Capacity->"<<v.capacity()<<endl;

	cout<<"size->"<<v.size()<<endl;
	
/* Accessing Element At A Specigic Index Using at()*/
	cout<<"Element At 2nd Index->"<<v.at(2)<<endl;
	
/* Accessing First And Last Element Using front() and back()*/
	cout<<"Front Element->"<<v.front()<<endl;
	cout<<"Back Element->"<<v.back()<<endl;
	
/* removes last element */
    v.pop_back();
	cout<<"After Pop Operation->"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<"\t";
	}
	cout<<endl;
	
/* Clear The Vector Using clear()*/	
	cout<<"Before Clear() Operation The Size Of The Vector->"<<v.size()<<endl;
	v.clear();
	cout<<"After Clear() Operation The Size Of The Vector->"<<v.size()<<endl;
	
	cout<<"After Clear() Operation The Capacity Of The Vector->"<<v.capacity()<<endl;

/*Ek Chiz Yaad Rakhna clear karne K Baad Size Badlegi But Capacity wahi Rahegi*/


/*Another Way To Declare Vector*/
	vector<int> ve(5,1); /* where 5 is size and 1 means it Initializes the vector with 1*/
	
	cout<<"Elements Of The 2nd Vector->"<<endl;
	for(int i=0;i<ve.size();i++)
	{
		cout<<ve.at(i)<<"\t";
	}
	cout<<endl;
	
/* begin(),end,cbegin(),cend(),rbegin(),rend(),crbegin,crend programs:-*/	
	 vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " "<<endl;
    cout<<endl;   
        
/*To Copy one vectors element to another using last():-*/
	vector<int> last(g1);
	cout<<"Elements Of The 3nd Vector->"<<endl;
	for(int i=0;i<ve.size();i++)
	{
		cout<<g1.at(i)<<"\t";
	}
	cout<<endl;
}