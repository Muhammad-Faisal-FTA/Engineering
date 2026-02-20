#include<iostream>
#include<vector>

using namespace std;

void AlterArr(vector<int> &a){
    //1.Separation
    vector<int> pos,neg;

    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 0)
        {
            pos.push_back(a[i]);
        }else{
            neg.push_back(a[i]);
        }
    }

    //2.Place alternate(using two pointer)
    int pi = 0, ni = 0, i = 0;
    while(pi < pos.size() && ni < neg.size()){
        if(i % 2 == 0){
            a[i++] = pos[pi++];
        }else{
            a[i++] = neg[ni++];
        }
    }

    //3.handle remaining at the end
    while(pi < pos.size()){
        a[i++] = pos[pi++];
    }
    while(ni < neg.size()){
        a[i++] = neg[ni++];
    }

}


int main(){
vector<int> a;
a={1,5,6,-7,-9,-1,4,2,6,8,2,-4};

AlterArr(a);

for(int i = 0; i < a.size(); i++){
    cout << a[i] << " ";
}


return 0;
}
