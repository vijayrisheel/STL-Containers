#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// void showdq(deque <int> dq){
//     if(dq.empty())
//         cout << "Empty deque" << endl;
//     else{
//         deque <int> :: iterator it;
//         for(it = dq.begin(); it != dq.end(); ++it){
//             cout << *it << " ";
//         }
//         cout << endl;
//     }
// }

/*void showdq(deque <int> dq){
    deque <int> temp = dq;

    if(temp.empty())
        cout << "EMpty Dq" << endl;
    else{
        while(!temp.empty()){
            cout << temp.front() << " ";
            temp.pop_front();
        }
        cout << endl;
    }
}*/

void display(deque<int> dq){
    if(dq.empty())
        cout << "Empty dequeue!" << endl;
    else{
        for(auto it : dq)
            cout << it << " ";
        cout << endl;
    }
}

int main(){
    deque <int> dq;

    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(40);
    dq.push_back(70);
    dq.push_front(10);

    display(dq);

    dq.pop_front();
    dq.pop_front();

    display(dq);

    cout << *dq.begin() << endl;
    //cout << *dq.end() << endl; //SOMETHING FISHY WITH end ITERATOR    // in GFG, only rbegin() & rend() iterators are given.
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    cout << dq.size() << endl;
    cout << dq.max_size() << endl;
    cout << dq.at(1) << endl;
    
    //dq.reverse(); //WRONG
    reverse(dq.begin(), dq.end());  //RIGHT
    display(dq);

    //dq.sort(); //WRONG
    sort(dq.begin(), dq.end()); //RIGHT
    display(dq);

    return 0;
}