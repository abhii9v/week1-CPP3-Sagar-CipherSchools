#include <iostream>
#include<bits/stdc++.h>

using namespace std;


// int power(int base, int pow) {
//     int num =1, i;
//     for(i=1; i<pow;i++) {
//         num*= base;
//     }
//     return num;
// }
//


int power(int base, int pow) {

    // 1. base case
    // 2. assumption
    // 3. cal. 
    
    if (pow ==0) 
    return 1;
    
    int smlAns = power(base, pow -1);
    return smlAns*base;
}
    
int main()
{
    cout<<pow(2,4);

    return 0;
}
