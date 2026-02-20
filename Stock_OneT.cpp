#include<iostream>
#include<vector>


using namespace std;

int Stock(vector<int> &a){
    int minPrice = 0;
    int maxProfit = 0;

    for(int i = 0; i < a.size(); i++){
        if(a[i] < minPrice){
            minPrice = a[i];
        }else if(maxProfit < a[i] - minPrice){
            maxProfit = a[i] - minPrice;
        }
    }

    return maxProfit;
}

int main(){
vector<int> a = {7, 6, 4, 3, 1};
int stock = Stock(a);
cout << stock;
return 0;
}
