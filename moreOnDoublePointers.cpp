#include <iostream>
using namespace std;

void update(int **ptr){
    *ptr = *ptr +1;
}

void update2(int **p){
    **p = **p +1;
}

int main(){

    int hello = 400;
    int *p1 = &hello;
    int **p2 = &p1;// value in p1

    cout << *p2 << endl; // value of p1 i.e add of hello
    cout << &p1 << endl;//add of p1


    cout << "before - " << *p2 << endl;
    // update(p2);
    cout << "after - " << *p2 << endl;





    cout << "before :: " << **p2 << endl;
    update2(p2);
    cout << "after :: " << **p2;
    //update() function ko comment out karna jrrori tha
    //bacause **p2 value at add stored in p1 tak nhi pachuchh
    //pata because update() usko change kr diya tha p1 ke andar
    //i.e segmentation fault....

    //orrr---> yha pr chage huaa hai output :: 401
    

    
    
    
    
    
    
    
    return 0;
}
