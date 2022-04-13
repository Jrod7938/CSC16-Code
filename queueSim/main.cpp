#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    /* initialize random seed */

    srand(102);//time(NULL));

    // generate random number
    const int N = 10;
    for(int i=0; i<N; i++){
        int rndNum = rand() % 10;
        cout << rndNum << " ";
    }
    cout << endl;

}
