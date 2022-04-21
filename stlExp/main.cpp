// Using vectors in c++
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // declare vector
    typedef vector<double> VectorType;
    VectorType vi;
    cout << "Size of vector1: " << vi.size() << endl;
    cout << "Capacity of vector 1: " << vi.capacity() << endl;
    // insert elements into the back of the vector
    const short N = 100;
    vi.resize(N);
    //vi.reserve(N);
    cout << "Size of vector 2: " << vi.size() << endl;
    cout << "Capacity of vector 2: " << vi.capacity() << endl;
    for(int i=0;i<N;i++){
        vi[i]=((float)i)/2;
        //vi.push_back(i);
        cout << "Size of vector 3: " << vi.size() << endl;
    }
    // Display Vector values
    for(int i=0;i<N;i++){
        cout << vi[i] << endl;
    }
    // display vector using iterator
    cout << "--------------- using an iterator -----------------" << endl;
    for(VectorType::iterator itr = vi.begin(); itr != vi.end(); itr++){
        cout << *itr << endl;
    }
    

    return 0;
}
