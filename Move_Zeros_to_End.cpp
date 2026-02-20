#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int Move_zero(vector <int> &a){
    int n = a.size();
    int tr[n], j = 0;

    //copy non-zero in tr
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            tr[j++] = a[i];
        }
    }
    // fill zeros on empty indexs
    while(j < n){
        tr[j++] = 0;
    }
    //copy back to orignol
    for(int i = 0; i < n; i++){
        a[i] = tr[i];
    }
}
//by the two traversal method
void Move_zero_ByTravetsal(vector <int> &a){
    int countx = 0;

    //count the non zero
    for(int i = 0; i < a.size(); i++){
        if(a[i] != 0){
            a[countx++] = a[i];
        }
    }
     //convert the count to onword
        while(countx < a.size()){
            a[countx++] = 0;
        }
}

//best way for in the one traversal
void One_tearversal(vector <int> &a){
    int countx = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != 0){
            swap(a[i],a[countx]);
            countx++;
        }
    }
}

int main(){
 vector<int> a = {0,1,1,0,0,1,1,1,1};
 vector<int> b = {0,1,1,0,0,1,1,1,1};
 vector<int> c = {0,1,1,0,0,1,1,1,1};

Move_zero(a);

Move_zero_ByTravetsal(b);

One_tearversal(c);

for(int i: b){
    cout << i << " ";
}

// test case
 vector<int> t1 = {1,1,2,2,2,3};
   // assert(t1 == 0);
 return 0;
}

