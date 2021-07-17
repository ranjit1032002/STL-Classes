#include<bits/stdc++.h>
using namespace std;
/*	
Operations on array :- 
1. at() 		:- This function is used to access the elements of array. 
2. get() 		:- This function is also used to access the elements of array. 
				   This function is not the member of array class but overloaded function from class tuple. 
3. operator[] 	:- This is similar to C-style arrays. This method is also used to access array elements.
4. front() 		:- This returns the first element of array. 
5. back() 		:- This returns the last element of array.
6. size() 		:- It returns the number of elements in array. This is a property that C-style arrays lack. 
7. max_size() 	:- It returns the maximum number of elements array can hold 
				i.e, the size with which array is declared. The size() and max_size() return the same value.
8. swap() 		:- The swap() swaps all elements of one array with other.
9. empty() 		:- This function returns true when the array size is zero else returns false. 
10. fill() 		:- This function is used to fill the entire array with a particular value.
*/
int main()
{	
	array<int,5> a={1,2,3,4,5};											
	int sz=a.size();
	
	cout<<"Max Size Of The Array ->"<<a.max_size();
	
	cout<<endl<<endl<<endl;
	
	
	cout<<"Array Elements Are (using operator[])->"<<endl;
	for(int i=0;i<sz;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	cout<<endl<<endl<<endl;
	
	cout<<"Array Elements Are (at())->"<<endl;
	for(int i=0;i<sz;i++)
	{
		cout<<a.at(i)<<"\t";
	}
	
	
	cout<<endl<<endl<<endl;
	
	cout<<"Empty Or Not ->"<<a.empty()<<endl;
	
	cout<<endl<<endl<<endl;
	
	cout<<"First Element ->"<<a.front()<<endl;
	cout<<"Last Element ->"<<a.back()<<endl;
	
	cout<<endl<<endl<<endl;
	
	cout<<"The Array Elements Are (using get()) ->"<<endl;
	cout << get<0>(a) <<" "<< get<1>(a)<<" ";
	cout << get<2>(a) <<" "<< get<3>(a)<<" ";
	cout << get<4>(a) <<" "<<endl;
	
	cout<<endl<<endl<<endl;
	
	array<int,5> ar={6,7,8,9,10};
	a.swap(ar);
	cout<<"The First Array Elements After Swapping Are ->"<<endl;
	for(int i=0;i<ar.size();i++)
	{
		cout<<a.at(i)<<"\t";
	}
	
	cout<<endl<<endl<<endl;
	
	array<int,0> ar1;
	ar1.empty()? cout << "Array empty":
        cout << "Array not empty";
    cout << endl;
     ar.fill(0);
 
    cout << "Array After Filling Operation Is : ";
    for ( int i=0; i<6; i++)
        cout << ar[i] << " ";
}


