/**
 *  
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Vladimir Ananiev
 * @idnumber 81459
 * @task 1
 * @compiler GCC
 *
 */

#include <iostream>

using namespace std;

void recursiveFunction(int n) {
    if(n>1) recursiveFunction(n-1);
    cout<<n;
    if(n>1) recursiveFunction(n-1);
}

int main() {
    int n;

    cin>>n;

    recursiveFunction(n);

    return 0;
}
