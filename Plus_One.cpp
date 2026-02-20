#include<iostream>
#include<vector>

using namespace std;

vector<int> Add_One(vector<int> &a){
    int carry = 1;
    for(int i = a.size() - 1; i >= 0; i--){

        int sum = a[i] + carry;
        a[i] = sum % 10;
        carry = sum / 10;
    }
    if(carry){
        a.insert(a.begin(),1,1);
    }
}

