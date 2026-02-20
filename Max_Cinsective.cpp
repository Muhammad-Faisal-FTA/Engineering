#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int maxCount(vector<int> &a){
    int maxcount = 0, countn = 1;
    for(int i = 1; i < a.size(); i++){
        if(a[i] == a[i - 1]){
            countn++;
        }else{
            maxcount = max(maxcount, countn);
            countn = 1;
        }
    }
    return max(maxcount, countn);
}

int max_Count(vector<int> &a){
    int maxCount = 0, countx = 1, pre = -1;
    for(int n: a){
        if((pre ^ n) == 0){
            countx++;
        }else{
            maxCount = max(maxCount, countx);
            countx = 1;
        }
            pre = n;
    }
    return max(maxCount,countx);
}

int main(){
 vector<int> a = {0,1,1,0,0,1,1,1,1};


 int x = maxCount(a);
 int y = max_Count(a);
 cout << x << endl << y << endl;

// test case
 vector<int> t1 = {1,1,2,2,2,3};
    assert(maxCount(t1) == 4);
 return 0;
}

