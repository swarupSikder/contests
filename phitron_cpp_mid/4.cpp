//author:    Swarup Sikder
//judge:     hackerRank
//mode:      b6 c++ midterm

#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int id;
    char name[100];
    char section;
    int total_marks;
};

void body(){
    //-------------//
    //    input    //
    //-------------//
    Student s1;
    cin >> s1.id;
    cin.ignore();
    cin >> s1.name;
    cin.ignore();
    cin >> s1.section;
    cin >> s1.total_marks;
        
    Student s2;
    cin >> s2.id;
    cin.ignore();
    cin >> s2.name;
    cin.ignore();
    cin >> s2.section;
    cin >> s2.total_marks;
        
    Student s3;
    cin >> s3.id;
    cin.ignore();
    cin >> s3.name;
    cin.ignore();
    cin >> s3.section;
    cin >> s3.total_marks;
    


    //---------------//
    //    process    //
    //---------------//
    int mx = max(s1.total_marks, max(s2.total_marks, s3.total_marks));

    int flag;
    if(s1.total_marks==mx){
        flag= 1;
        if(s1.total_marks==s2.total_marks){
            (s1.id<s2.id)?  flag=1 : flag=2;
        }

        if(s1.total_marks==s3.total_marks){
            (s1.id<s3.id)?  flag=1 : flag=3;
        }
    }
    else if(s2.total_marks==mx){
        flag= 2;
        if(s2.total_marks==s1.total_marks){
            (s2.id<s1.id)?  flag=2 : flag=1;
        }

        if(s2.total_marks==s3.total_marks){
            (s2.id<s3.id)?  flag=2 : flag=3;
        }
    }
    else if(s3.total_marks==mx){
        flag= 3;
        if(s3.total_marks==s1.total_marks){
            (s3.id<s1.id)?  flag=3 : flag=1;
        }

        if(s3.total_marks==s2.total_marks){
            (s3.id<s2.id)?  flag=3 : flag=2;
        }
    }

    

    
    //--------------//
    //    output    //
    //--------------//
    if(flag==1){
        cout<< s1.id <<" "<< s1.name <<" "<< s1.section <<" "<< s1.total_marks << endl;
    }
    else if(flag==2){
        cout<< s2.id <<" "<< s2.name <<" "<< s2.section <<" "<< s2.total_marks << endl;
    }
    else if(flag==3){
        cout<< s3.id <<" "<< s3.name <<" "<< s3.section <<" "<< s3.total_marks << endl;
    }
}

int main(){
    //-----------------//
    //    test case    //
    //-----------------//
    int t;
    cin >> t;
    
    while(t--){
        body();    
    }
    
    return 0;
}