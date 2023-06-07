#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void showlist(list <int> l){
    if(l.empty())
        cout << "Empty List" << endl;
        
    else{
        list <int> :: iterator it;
        for(it = l.begin(); it != l.end(); ++it)
            cout << *it << " ";
        cout << endl;
    }
}

void display(list<int> l){
    if(l.empty())
        cout << "Empty" << endl;
    else{
        for(int&a : l)
            cout << a << " ";
        cout << endl;
    }
}

void display2(list<int>& l){
    if(l.empty())
        cout << "Empty list!" << endl;
    else{
        for(auto it : l)
            cout << it << " ";
        cout << endl;
    }
}

int main(){
    list <int> l1;

    l1.push_front(1);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_front(6);

    // showlist(l1);
    // display(l1);
    display2(l1);

    l1.pop_back();
    l1.pop_front();

    //showlist(l1);
    display2(l1);

    cout << *l1.begin() << endl;
    //cout << *l1.end() << endl; // SOMETHING FISHY WITH END
    cout << l1.front() << endl;
    cout << l1.back() << endl;
    cout << l1.empty() << endl;
    cout << l1.size() << endl;

    l1.insert(l1.begin(), 50);
    // showlist(l1);
    display2(l1);
    l1.erase(l1.begin()); // l1.erase(l1.end())!!??
    // showlist(l1);
    display2(l1);
    l1.reverse();
    // showlist(l1);
    display2(l1);

    //sort(l1.begin(), l1.end()); WRONG
    l1.sort();
    showlist(l1);

    return 0;
}