// Created this file just for  Understanding Friend.cpp

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class student {
    
    string passcode;
    friend class bestfriend;
    
    protected:
    
    int age;
    
    public:
    string name;
    int id;
    
    void into(){
        cout << "My name is " << name << " and my id is " << id<< endl;
    }
    
    void setter(string s, int a, string n, int i) {
        passcode = s;
        age = a;
        name = n;
        id = i;
    }
    
    
    student(int id, string name,string passcode, int age) {
        
        
    }
    
    friend void hacker(student s);
};

void hacker(student s) {
    cout <<s.passcode<<s.age << endl;
}


class bestfriend {
    public:
    void sharingsecret(student s) {
        cout << s.passcode << endl;
        cout << s.age << endl;
        
    }
    
    
};

int main()
{
   student s1();
   
   int a =12;
   //int* b = &a;
   int*ptri =&a;
   
   //student*ptrs=&s1;
   
   //cout << ptrs->name<<endl;
   //cout << (*ptrs).name<<endl;
   
   
    

    return 0;
}

