/*
 Author : Aseanth V C
*/
#include <iostream>  
using namespace std;  
int main ()  
{  
    // Initializing
    int* m = NULL;  
  	cout<<"Initializing m using new (Dynamic memory allocation)\n";
    m = new(nothrow) int;  
    if (!m)  
        cout<< "Cant allocate memory\n";  
    else  
    {  
        // Store value
        *m=29;  
        cout<< "Value of m: " << *m <<endl;  
    }  
   	cout<<"Initializing f using dynamic memory"
   	<<" allocation(new float(1.1))\n";
    float *f = new float(1.1);  
    cout<< "Value of f: " << *f <<endl;  
    cout<<"Creating inteager array of size 5 using"
    <<" dynamic memory allocation\n";
    int size = 5;  
    int *arr = new(nothrow) int[size];  
    if (!arr)  
        cout<< "Couldnt allocated memory\n";  
    else  
    {  
        for (int i = 0; i< size; i++)  
            arr[i] = i+1;  
  
        cout<< "Value store in array: ";  
        for (int i = 0; i< size; i++)  
            cout<<arr[i] << " ";  
    }  
  
  	cout<<"\nFreeing the allocated memory using delete\n";
    delete m;  
    delete f;
    delete[] arr;  
  
    return 0;  
}
