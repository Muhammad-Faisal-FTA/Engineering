#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> Find_2Sum(vector<int> &a, int t){
    unordered_map<int, int> m;

    for(int i=0; i< a.size(); i++){
        int n = t - a[i];

        if(m.count(n)){
            //cout << "PPPPPP" << i ;
            return {m[n], i};
        }
        m[a[i]] = i;
    }
    return {};
}

int main(){
    vector<int> a = {12, 4, 2, 9, 10, 8 ,7};
    //a = [12, 4, 2, 9, 10, 8 ,7];
    int t =0;
    cout << "Enter a Number = ";
    cin >> t;
    int v = 0;

    vector<int> res = Find_2Sum(a, t);

    cout << "REc: " << t << endl;

    for(int x: res){
         v += a[x];
        cout << x << " ";
    }
    cout << endl << "Done: " << v <<endl;
    return 0;
}
