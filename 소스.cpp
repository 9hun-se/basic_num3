
#include <iostream>
#include<algorithm>
using namespace std;

template <typename T>
class SimpleVector {
private:
    T* arr;
    
public:
    void resize(int k) {
        if (k > capacity) {
            capacity = k;
        }
    }
    
    
    
    SimpleVector(int cap) : capacity(cap), size(10) {
        arr = new T[capacity];
    }

    ~SimpleVector() {
        delete[] arr;
    }

 
    void push_back(T value) {
        if (size < capacity) {
            arr[size] = value;
            size++;
        }
        else {
            capacity += 5;
            arr[size] = value;
            size++;
        }
        
        
    }


    void pop_back() {
        if (size > 0) {
            size--;
        }
      
    }

    int size() {
        return arr.size();
    }

    int capacity() {
        return arr.max_size();
    }
    

    void sortData() {
        sort(arr.begin(), arr.end());
    }

    void print() const {
        cout << "[ ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }
};

void main() {

    
}