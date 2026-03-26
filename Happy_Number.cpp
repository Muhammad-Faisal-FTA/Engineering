#include <iostream>
#include <vector>

using namespace std;

bool isHappy(int n) {
            cout << "n top enter = " << n << endl;
        int d = 0;
        long int t = 0;
        while(n > 0){
            cout << "n enter = " << n << endl;
            d = n % 10;
            cout << "d = " << d << endl;
            t += d * d;
            cout << "t = " << t << endl;
            n = n / 10;
            cout << "n = " << n << endl;
            if(n == 0 ){
                cout << "n = " << n << endl;
                n = t;
                cout << "n = t " << t << endl;
            }
            if(t == 1 && n == 0){
                    cout << "t = 1 : " << t << endl;
                return true;
            }
        //break;
           cout<< "--------------------------------" << endl;
        }
        return false;
}

int main(){
 bool a = isHappy(11);
cout << "Result : " << a << endl;
return 0;
}
