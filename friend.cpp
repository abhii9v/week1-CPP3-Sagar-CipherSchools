
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class student {
    
    string passcode;
    
    protected:
    
    int age;
    
    public:
    string name;
    int id;
    
    void into() {
        cout << "My name is " << name << " and my id is " << id<< endl;
    }
    
    void setPass(string s) {
        passcode = s;
        age = 18;
    }
    
    friend class bestfriend;
};


class bestfriend {
    public:
    void sharingsecret(student s) {
        cout << s.passcode << endl;
        cout << s.age << endl;
        
    }
    
    
};

int main()
{
   student s1;
   s1.setPass("10010");
   
   bestfriend bff;
   bff.sharingsecret(s1);
   
    

    return 0;
}