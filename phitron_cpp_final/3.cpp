//author:   Swarup Sikder
//judge:    hackerRank
//problem:  Reverse It
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char section;
    int id;
};

int main(){
    int n;
    cin>> n;

    Student student[n];
    for(int i=0; i<n ;i++){
        cin>> student[i].name >> student[i].cls >> student[i].section >> student[i].id;
    }

    //replace the sections with reverse order
    for(int i=0, j=n-1; i<j ;i++, j--){
        char temp = student[i].section;
        student[i].section = student[j].section;
        student[j].section = temp;
    }

    //output
    for(int i=0; i<n ;i++){
        cout<< student[i].name <<" "<< student[i].cls <<" "<< student[i].section <<" "<< student[i].id <<endl;
    }
    
    
    return 0;
}