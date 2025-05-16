#include <iostream>
using namespace std;

void printCheck(int *p){
    cout << p << endl;
    cout << *p << endl;
}

void update(int *p){
    p = p +1;
}

void update2(int *p){
    *p = *p + 1;
}

void printSize(int *p){
    cout << sizeof(p) << endl;
}

void sizeofArr(int arr[]){
    cout << sizeof(arr) << endl;
}



int main() {
    //all about pointers and functions

    int num = 50;
    int *ptr = &num;

    printCheck(ptr);// output :: memoryAdd and Value





   
    update(ptr);
    cout << num << endl; //output :: 50
    //yaha par num update nhi ho rha
    //-----but-----
    update2(ptr);
    cout << num << endl; //output :: 51
   





    //an intresting thing ::
    int num2 = 20;
    int *ptr2 = &num2;
    cout <<"before val :: " << ptr << endl;
    update(ptr2);
    cout <<"after val :: " << ptr << endl;
        /*
        update function me 'p' cout karne par memory
        address deta hai to 'p' ko updte karne pr 
        update kiu nhi hota rha ..... 
        ANSWER --> update me ptr(jo ki address hai)
        uska copy jata hai n ki actual variable
        or wase v original memory location ko
        change kiya hi nhi ja skta kuchh v kr loo..
        */






    //how array behave like a pointer ::
    printSize(ptr2);//8 byte or (4 in 32 bit system)
    int arr[] = {1,2,3,4,5};
    cout << sizeof(arr)<<endl; // 20
    sizeofArr(arr); // 8 or (4 in 32 bit)
    /*
      to mtlab ye ki -- array ko jab function me dalte
      hai to fucntion usko as pointer preceive karti hai
      n ki array...!!

      IIska benifit ye hai ki ham apne jaroort ke hisab se
      required part of array ko further operations ke liye
      send kar skte hai..
      e.g ::
      int arr[] = {1,2,3,4,5,6,7,8};
      getSum(arr+2, 6);
      function isko array ke  tarah treat krega jiska
      0 index 2(index of arr[]) se start hoga!!!
    */






    
   




    



    

    return 0;
}
