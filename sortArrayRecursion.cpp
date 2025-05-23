
//aditya verma's explaination
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    for(int i=0;i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void insertIt(vector<int>&v, int temp){
    if(v.size() == 0 || v[v.size()-1] <= temp){
        v.push_back(temp);
        return;
    }
    int res = v[v.size()-1];
    v.pop_back();
    insertIt(v, temp);
    v.push_back(res);
    return;
}
void sortIt(vector<int>&v){
    if(v.size() == 0 || v.size()==1){
        return;
    }
  
    int temp = v[v.size()-1];
    v.pop_back();
    sortIt(v);
    insertIt(v, temp);
}


int main(){
    vector<int>v = {20,58,69,74,12,36,85,77,96};
    cout << "original" << endl;
    print(v);
    cout << "after" << endl;
    sortIt(v);
    print(v);


    return 0;
}



//i have understoood the process to think for the particular
//problem but i don't think i have propeer understanding 
//of overall recursion for any problem!!!!
