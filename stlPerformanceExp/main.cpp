#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

#define TEST_1

int main(){
	vector<int> vec;

	const int N = 1000000;

	// Version 1: Let stl vector manage memory growth automatically
	clock_t beginTick = clock();
#ifdef TEST_1
	for(int i=0; i<N; i++){
		//vec.push_back(i);
		vec.insert(vec.begin(),i);
	}
#endif
#ifdef TEST_2
	// Version 2: Manage vector size manually
	vector<int> vec2;
	vec2.resize(N);
	for(int i=0; i<N; i++){
		vec2[i] = i;
	}
#endif
	clock_t endTick = clock();
	float timeTaken = ((float)(endTick-beginTick))/CLOCKS_PER_SEC;
	cout << "Time it took to run: " << timeTaken << endl;

	

}

