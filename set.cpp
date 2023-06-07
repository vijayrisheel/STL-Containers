#include <bits/stdc++.h>

using namespace std;

void display(set<int>& s){
    if(s.empty())
        cout << "Empty Set!" << endl;
    else{
        for(auto it : s)
            cout << it << " ";
        cout << endl;
    }
}

int main(){
    set<int> s;

    s.insert(10);
    s.insert(35);
    s.insert(5);
    s.insert(40);
    s.insert(40); // only 1 40 will be inserted

    set<int> s2(s.begin(), s.end());

    set<int, greater<int> > s3; // stores all elements in ascending order

    set<int> :: iterator it;
    display(s);

    set<int> s1(s.begin(), s.end());
    display(s1);

    s1.erase(s1.begin(), s1.find(10));
    display(s1);

    s.erase(40);
    display(s1);

    int n = s1.erase(40);
    cout << n << endl;

    //cout  << s2.lower_bound(10) << endl; // returns iterator to first element which is >= 10
    //cout << s2.upper_bound(40) << endl; // returns iterator to first element greater than 40

    // ALTERNATE METHOD
    //set<int> :: iterator itlow, itup;
    // itlow = s2.lower_bound(10);
    //itup   = s2.upper_bound(40);

    //s2.erase(itlow, itup);

    return 0;
}