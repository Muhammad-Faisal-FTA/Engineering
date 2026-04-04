#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <string>
#include <cassert>


using namespace std;

//Missing One numbers in  array

int missing(vector<int> &a){
	//sort
	sort(a.begin(), a.end());
	//check missing
	for(int i = 0; i<a.size(); i++){
		if(a[i+1] - a[i] > 1){
		 cout << "Missing number is = " << a[i+1] << " - " << a[i] << " = " <<  a[i]+1 << endl;
		 return a[i]+1;
		}

	}
}

int main(){
    system("cls");
vector<int> a = {8, 2, 4, 5, 3, 7, 1};
	missing(a);


	//Test case:
    //assert(missing(a) == 6);
	return 0;
}


