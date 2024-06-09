#include "ArrayVector.h"

ArrayVector::ArrayVector():capacity(0),n(0),a(NULL)
{
}

int ArrayVector::size() const
{
    return n;
}

bool ArrayVector::empty() const
{
    return size() == 0;
}

Elem& ArrayVector::operator[](int i)
{
    return a[i];
}

Elem& ArrayVector::at(int i) throw()
{
    if (i < 0 || i >= n) {
        std::cout << "illegal index in function at ()" << std::endl;
        //return;
    }
    return a[i];
    // TODO: insert return statement here
}

void ArrayVector::erase(int i)
{
    for (int j = i; i <= n; j++) { //remove element at index
        a[j-1] = a[j]; //shifts element down
    }
    n--; //one fewer element.
}

void ArrayVector::insert(int i, const Elem& e)
{
    if (n >= capacity) // overflow?
    {
        reverse(std::max(1, 2 * capacity)); //double array size, expand capacity.
    }
    for (int j = n - 1; j >= i; j--) { //shift elements up
        a[j + 1] = a[j];    
    }
    a[i] = e;   //put in empty slot
    n++;        //one more element 
}

void ArrayVector::reverse(int N)
{
    if (capacity >= N) return; //reverse at least n spots
    Elem* reversedArray = new Elem[N]; //already big enough
    for (int j = 0; j < n; j++) { // allocate bigger array
        reversedArray[j] = a[j]; // copy contents to new array
    }
    if (a != NULL) delete[] a; // discard old array
    a = reversedArray;  //make reversedarray the new array
    capacity = N;   // set new capacity.
}
