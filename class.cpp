#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class student {
    
    string passcode;
    public:
    string name;
    int id;
    
    void into() {
        cout << "My name is " << name << " and my id is " << id<< endl;
    }
    
    void setPass(string s) {
        passcode = s;
    }
};

int main()
{
   student s1;
   s1.name = "Abhinav";
   s1.id = 0012;
   s1.setPass("01001");
   s1.into();
    

    return 0;
}
