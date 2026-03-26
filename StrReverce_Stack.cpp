#include<iostream>
#include<stack>
#include<string>
//#include<cchar>
#include<sstream>

using namespace std;

 string RsWordStn(string &s){
    stack<string> st;
    string r = "";

    for (int i = 0; i < s.length(); i++) {

        if (s[i] != '.') {
            r += s[i];
        }

        // If we see a dot, we push the
        // previously seen word into the stack.
        else if (!r.empty()) {
            st.push(r);
            r = "";
        }

        if (!r.empty()) {
        st.push(s);
        }

         r = "";
    //  add from top to bottom of the stack
    while (!st.empty()) {
        r += st.top();
        st.pop();
        if (!st.empty()) {
            r += ".";
        }
    }
    cout << r <<"@@@@@@@@@@@@@@@@";
    return r;



 }
 }

int main(){

    string a = "qwer.asdfg.zxcv.";
    string r =  RsWordStn(a);
    cout << "Hello world! \n " << r;

return 0;
}
