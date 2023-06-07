#include <bits/stdc++.h>

using namespace std;

int main(){

    vector <int> v1; // CORRECT
    vector <int> v2(10); // CORRECT
    //vector <int> v3[10]; // WRONG, IT DECLARES AN ARRAY OF VECTORS

    for(int i = 0; i <= 10; i++){
        v1.push_back(i*i); // CORRECT
    }
    cout << v1.at(2);
    cout << v2.size() << endl;

    /*for(int i = 1; i <= v2.size(); i++){
        v2.push_back(i*i); // CORRECT
    } // BAD ALLOCATIION ACCORDING TO TERMINAL ---- CHECK THIS*/

    if(!v1.empty()){ // CORRECT WAY, AVOID USING v1.size() > 0, COZ size() IS UNSIGNED
        for(vector <int> :: iterator i = v1.begin(); i != v1.end(); ++i)
            cout << *i << " ";

        cout << endl;
    }

    vector <int> v(20);
    for(int i = 0; i <= 10; i++){
        v.push_back(i);
    }
    v.resize(25);
    v.push_back(500);
    v.push_back(100);

    if(!v.empty()){
    for(vector <int> :: iterator i = v.begin(); i != v.end(); ++i){
            cout << *i << " ";
        }

        cout << endl;
    }

    vector <int> v4(v1);// v4 is a copy of v1
    if(!v4.empty()){
    for(vector <int> :: iterator i = v4.begin(); i != v4.end(); ++i){
        cout << *i << " ";
    }
    cout << endl;
    }

    vector <int> v5;
    v5.assign(5, 10);
    if(!v5.empty()){
        for(vector <int> :: iterator i = v5.begin(); i != v5.end(); ++i){
            cout << *i << " ";
        }

        cout << endl;
    }

    cout << *v1.begin() << endl;
    cout << *v1.end() << endl;
    cout << *v1.rbegin() << endl;
    cout << *v1.rend() << endl;
    cout << v1.size() << endl;
    cout << v1.max_size() << endl;
    cout << v1.capacity() << endl;
    cout << v1.empty() << endl;
    cout << v1.front() << endl;
    cout << v1.back() << endl;
    v1.pop_back();
    cout << v1.back() << endl;

    v1.insert(v1.end()-1, 1); // BEFORE THE ITERATOR
    for(vector <int> :: iterator i = v1.begin(); i != v1.end(); ++i){
        cout << *i << " ";
    }
    cout << endl;

    v1.erase(v1.begin()); //ERASES THAT PARTICULAR POSITION
    for(vector <int> :: iterator i = v1.begin(); i != v1.end(); ++i){
        cout << *i << " ";
    }
    cout << endl;

    //v1.swap(v2); if sizes and types are same.

    v1.clear();
    cout << v1.empty() << endl;

    vector<int> myvector;

    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    myvector.push_back(10);
    myvector.push_back(20);

    vector<int> :: iterator it = unique(myvector.begin(), myvector.end());
    // it is the iterator to first removed (or) first starred element
    // similar to v.end() its just behind the last element present in the vector

    myvector.resize(std::distance(myvector.begin(), it));
    for(vector<int> :: iterator it = myvector.begin(); it != myvector.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    // output will be the same, coz unique only erases elements if they are same and consecutive
    // to overcome this, sort the vector before unique operation
    // LOOK AT THE OUTPUT

    sort(myvector.begin(), myvector.end());
    vector<int> :: iterator itt = unique(myvector.begin(), myvector.end());

    myvector.resize(std::distance(myvector.begin(), itt));
    for(vector<int> :: iterator ittt = myvector.begin(); ittt != myvector.end(); ittt++){
        cout << *ittt << " ";
    }
    cout << endl;
    // LOOK AT THE OUTPUT


    ////////////////////////////////////////////////
    // TO SORT A VECTOR AND REMOVE ALL THE DUPLICATE ELEMENTS
    //  set<int> s(a.begin(), a.end()); HERE a -> vector

    //  vector<int> c(s.begin(), s.end()); s -> above set


    /////////////////////////////////////////

    // WHEN PASSING VECTOR AS A PARAMETER IN A FUNCTION ALWAYS USE
    // void function(vector <int> &v) - if u want to change the contents 
    // void function(const vector <int> &v) - if u dont want to change
    //void funvtion(vector <int> v) - creates an actual copy of the vector again.

    return 0;
}