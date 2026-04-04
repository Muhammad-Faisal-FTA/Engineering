#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//rottate array
vector<int> rotate_k(vector<int> &a, int k){
    for(int i = 0; i <= k - 1;  i++){
        int t = a[0];
        a.erase(a.begin());
        a.push_back(t);
        }
        return a;
    }

int main()
{
	//rotate array
	vector<int> a = {1,2,3,4,5,};

		for(int i = 0; i < a.size(); i++){
	    cout << a[i] << endl;
	    }
	a = rotate_k(a, 2);
	for(int i = 0; i < a.size(); i++){
	    cout << a[i];
	    }
	return 0;
}
