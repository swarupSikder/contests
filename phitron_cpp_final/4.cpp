//author:   Swarup Sikder
//judge:    hackerRank
//problem:  Sort It
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r){
    if((l.math_marks+l.eng_marks)==(r.math_marks+r.eng_marks)){
        return (l.id < r.id);
    }
    else{
        return ((l.math_marks+l.eng_marks)>(r.math_marks+r.eng_marks));
    }
}

int main(){
    int n;
    cin>> n;

    Student student[n];
    for(int i=0; i<n ;i++){
        cin>> student[i].name >> student[i].cls >> student[i].section >> student[i].id >> student[i].math_marks >> student[i].eng_marks;
    }

    //sort by total_marks
    sort(student, student+n, cmp);

    //output
    for(int i=0; i<n ;i++){
        cout<< student[i].name <<" "<< student[i].cls <<" "<< student[i].section <<" "<< student[i].id <<" "<< student[i].math_marks <<" "<< student[i].eng_marks <<endl;
    }
    
    
    return 0;
}