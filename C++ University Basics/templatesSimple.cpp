// #include <iostream> 
// using namespace std; 

// template <typename T> 
  
// T myMax(T x, T y) 
// { 
//     return (x > y) ? x : y; 
// } 
  
// int main() 
// { 
  
//     // Call myMax for int 
//     cout << myMax<int>(3, 7) << endl; 
  
//     // call myMax for double 
//     cout << myMax<double>(3.0, 7.0) << endl; 
  
//     // call myMax for char 
//     cout << myMax<char>('g', 'e') << endl; 
  
//     return 0; 
// } 


// If two characters are passed to function template, character with larger ASCII value is displayed.

#include <iostream>
using namespace std;

// template function
template <class GenericExample>
GenericExample algorithm(GenericExample number1, GenericExample number2)
{
    if (number1>number2){
        return number1;
    }
    else{
        return number2;
    }
	
}

int main()
{
	cout << algorithm(10, 50) <<" is larger." << endl;
	cout << algorithm(10.67, 700.8) <<" is larger." << endl;

	return 0;
}