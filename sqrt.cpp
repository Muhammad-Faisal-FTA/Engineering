#include<iostream>
#include<vector>
#include<cassert>

using namespace std;

int Sqrt_a(int n){
    long int ans = 0, i = 1;
    while(true){
        if(i * i == n ){
            ans = i;
            break;
        }else if(i==n){
            break;
        }
        i++;
    }
    if(ans==0){
        return -1;
    }else{
    return ans;
    }
}


int main(){
    int a = Sqrt_a(256);
    cout << "Ans:" << a <<endl;


    //test cases
    assert(Sqrt_a(4) == 2);
    assert(Sqrt_a(9) == 3);
    assert(Sqrt_a(10) == -1);
    assert(Sqrt_a(17) == -1);
    assert(Sqrt_a(17) == -1);
    assert(Sqrt_a(100) == 10);
    assert(Sqrt_a(256) == 16);
    assert(Sqrt_a(17) == 12);
}
