#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void showflist(forward_list <int> f){
    for(int&a : f)
        cout << a << " ";
    cout << endl;

    /*for(auto a : f)
        cout << a << " ";
    cout << endl; */
}

void display(forward_list<int> f){
    forward_list<int> :: iterator it;
    for(it = f.begin(); it != f.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main(){

    forward_list <int> fl1 = {10, 20, 30};
    forward_list <int> fl2;
    fl2.assign(5, 10);

    showflist(fl1);
    display(fl1);
    showflist(fl2);

    fl1.push_front(2);
    // fl1.push_back(3);
    // fl2.push_back(5);    //No push_back function
    fl2.push_front(6);

    showflist(fl1);
    showflist(fl2);

    fl1.pop_front();
    // fl1.pop_back();       //No pop_back function
    // fl2.pop_back();
    fl2.pop_front();

    showflist(fl1);
    showflist(fl2);

    forward_list <int> :: iterator it;
    it = fl1.insert_after(fl1.begin(), {12, 34, 56});
    showflist(fl1);

    fl1.insert_after(it, 90);
    showflist(fl1); 

    return 0;
}