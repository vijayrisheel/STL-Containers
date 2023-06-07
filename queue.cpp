#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void showq(queue <int> q){
    if(q.empty())
        cout << "Empty Q" << endl;
    else{
        queue <int> temp = q;
        while(!temp.empty()){
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
}

int main(){
    queue <int> q;
    queue <int> q1;

    for(int i = 0; i < 5; i++){
        q1.push(i);
    }
    showq(q1);

    q.push(1);
    q.push(2);
    q.push(4);
    showq(q);

    q.pop();
    showq(q);

    //cout << *q.end() << endl;       NO MEMBERS NAMED BEGIN AND END!?. Same rreason as Stack. Also there is no reverse.
    // cout << *q.begin() << endl;
    cout << q.empty() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;

    q.swap(q1); // QUEUES MUST BE OF SAME TYPE

    showq(q);
    showq(q1);
    
    return 0;
}