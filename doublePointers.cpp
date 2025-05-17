#include<iostream>
using namespace std;

void update(int **ptr){
    cout << *ptr << endl;// 0x61ff18 - value in ptr
    cout << **ptr << endl;// 100 - value in value in ptr(yes..no typing mistake)
    cout << &ptr << endl;// 0x61ff00 - add of ptr
}

int main(){

    int ram = 100;
    int *p = &ram;
    int **p2 = &p;
    update(p2);

    
    
 
    
    return 0;
}
