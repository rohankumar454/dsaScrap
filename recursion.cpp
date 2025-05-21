#include <iostream>
using namespace std;

int factorial(int n){
    //sbse pahle base case handle kro
    if(n == 0){
        return 1;
    }
    //recursive relation
    int ans = n*factorial(n-1);
    return ans;
}

int main(){
    int n = 5;
    int ans = factorial(n);
    cout << ans << endl;
    return 0;
}














#include<iostream>
using namespace std;

void printCounting(int n){
    if(n==0){
        return;
    }
    cout << n << endl;
    printCounting(n-1);
    
}

int main(){
    
    //print counting through recursion
    int n;
    cin >> n;
    printCounting(n);

    return 0;
}











#include<iostream>
using namespace std;
void sayDigit(int n, string arr[]){
    //base case
    if(n==0){
        return;
    }
    int digit = n%10;
    n= n/10;
    sayDigit(n, arr);
    cout << arr[digit] << " ";
}
int main(){
    //say digits using recursion
    string arr[10]={"zero", "one", "two", "three", "four", 
                "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    sayDigit(n, arr);
    return 0;
}











#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    bool ans;
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] < arr[1]){
        ans = true;
    }else{
        return false;
    }

    //all logics ate hidden in this line 😒😒
    isSorted(arr+1, size-1);
    
}
int main(){

    //array is sorted in increasing order 
    //or not though recursion

    int arr1[5] = {10,20,30,50,40};
    int arr2[5] = {20,50,70,80,90};

    cout << isSorted(arr1, 5) << endl;
    cout << isSorted(arr2, 5) << endl;

    return 0;
}



















#include<iostream>
using namespace std;

int findSum(int arr[], int size){
    //baseCaseHandling
    int sum = 0;
    if(size==0){
        return 0;
    }
    
    if(size == 1){
        return arr[0];
    }

    ///difficult to understand but that's it!!!
    sum = arr[0] + findSum(arr+1, size-1);
    return sum;

}

int main(){
    //finding sum using recursion

    int arr[5] = {14,58,69,35,41};
    cout << findSum(arr, 5);

    return 0;
}












#include<iostream>
using namespace std;

bool isKey(int arr[], int size, int key){
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    
    //means agar nhi mila to fir se call kro function 
    //but this time call after reducing size and first
    //element's idex........!!
    return isKey(arr+1, size-1, key);


}


int main(){
    //linear search using recurssion
    int arr[7] = {41,20,58,360,98,75,10};
    int key = 36;
    cout << "is present :: ";
    cout << isKey(arr, 7, key);

    return 0;
}











// BINARY SEARCH USING RECURSION::


General binary search
#include<iostream>
using namespace std;
int main(){
    
    int arr[5] = {10,50,80,90,95};
    int n = 5;
    int key = 900;
    //search the key
  
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] == key){
           cout << "mil gya";
           break;
        }else if(key < arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }


    return 0;
}







///now using recursion
#include<iostream>
using namespace std;

bool binarySearchRecursion(int arr[], int start, int end, int key){
    if(start > end){
        return false;
    }
    int mid = start + (end-start)/2;
    if(arr[mid] == key){
        return true;
    }

    if(key < mid){
        return binarySearchRecursion(arr, start, mid-1, key);
    }else{
        return binarySearchRecursion(arr, mid+1, end, key);
    }
}

int main(){
    int arr[5]={10,20,30,40,80};
    int key = 410;
    int start = 0;
    int end = 4;
    cout << "present or not::: " << binarySearchRecursion(arr, start, end, key);

    return 0;
}






// --------------QUESTION--------------

Given string - 'abcde'
return -- 'edcba' using recursion


//GENERAL APROACH WITHOUT RECURSION
#include<iostream>
using namespace std;
void reverse(char arr[], int start, int end){
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    char arr[] = "abcde";
    cout << arr << endl;
 
    reverse(arr, 0, 4);
    cout << arr << endl;

    return 0;
}



//APROACH USING RECURSION
#include<iostream>
using namespace std;

void reverse(string &arr, int start, int end){
    if(start >= end){
        return;
    }
    swap(arr[start], arr[end]);
    reverse(arr, start+1, end-1);
}

int main(){
    string arr = "india";
    cout << arr << endl;
    int start = 0;
    int end = 4;
    reverse(arr, start, end);
    cout << arr << endl;

    return 0;
}


















//finding power through recursion::
#include<iostream>
using namespace std;

int power(int a, int b){
    if(a==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = power(a, b/2);

    //if b is even
    if(b%2==0){
        return ans*ans;
    }else{
        //if b is odd
        return a*ans*ans;
    }
}

int main(){
    
    int a = 5;
    int b = 4;
   cout << "a to the power b is::" << power(a, b);


    return 0;
}



//------------>> All the problems coded above are not for 
// practical impelemtation they all are bad prractices and never
// used for solving realworld problem as using recursion jabardasti
// at the place where iterative aproach can solve the problem in good 
// and simple way is bad practice......!! 









