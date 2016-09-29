#include <iostream>
using namespace std;
void main() {
#if __cplusplus==201402L
	cout << "C++14" << endl;
#elif __cplusplus==201103L
	cout << "C++11" << endl;
#else
	cout << "C++" << endl;
#endif
}
