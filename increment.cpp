#include <bits/stdc++.h>

using namespace std;

// void increment(int a){
//     a++;
// }

// int main(){
//     int i = 11;
//     increment(i);
//     cout << i << endl;
//     return 0;
// }

void increment(int&a) {
    //(*a)++;
    //int&b
    
    a++;
    return;
}


int main()
{
    int i =11;
    int j =i;
    //int &j = i;
    j++;
    
    cout << i << endl;

    return 0;
}

