#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void showstack(stack <int> s){
    if(s.empty())
        cout << "Empty Stack" << endl;
    else{
        stack <int> temp = s;
        while(!temp.empty()){
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }
}

int main(){
    stack <int> s;
    stack <int> s1;

    for(int i = 0; i < 2; i++){
        s1.push(i);
    }
    showstack(s1);

    s.push(67);
    s.push(89);
    s.push(1);
    s.push(5);

    showstack(s);

    s.pop();
    s.pop();

    showstack(s);

    cout << s.top() << endl;
    //cout << *s.begin() << endl; NO MEMBERS NAMED begin & end : Because, you can only access the top of the stack. SO no need of begin & end pointers.
    //cout << *s.end() << endl;
    cout << s.size() << endl;

    // s.reverse(); //NO reverse function, Also, you cannot use reverse '(s.begin(), s.end())' -> because of above reason.

   s.swap(s1);
   showstack(s);
   showstack(s1);
    
    return 0;
}