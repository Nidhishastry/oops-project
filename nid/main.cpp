//
//  main.cpp
//  nid
//
//  Created by Kumar Divya  Rajat on 11/04/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include<stdlib.h>
#include "StartQuiz.cpp"

using namespace std;

string temp;
int count=0;
float percent=0;

class questions {
    
    string name;
    int score[10];
    int count;
    int ques_count;
public:
  };

int main(int argc, const char * argv[]) {

    startQuiz a[10];
    int i = 0;
    
    cout<<"Welcome to the Quiz contest"<<endl;
    cout<<"Rules:"<<endl;
    cout<<"1. 5 questions will be asked"<<endl;
    cout<<"2. Each question carries 1 mark"<<endl;
    cout<<"3. No negative marking is applicable"<<endl;
    cout<<"4. Each question has only one answer"<<endl;
    cout<<"5. You have to answer each question at once.\n   You won't get second chance to answer the question."<<endl;
    
    while(1) {
        cout<<"Press 1 to begin and q to exit "<<endl;
        char choice;
        cin>>choice;
        
        switch (choice) {
            case '1':
                a[i].start();
                break;
                
            case 'q':
                exit(0);
                break;
                
            default:
                cout<<"Seems like you have entered a wrong option. Please try again."<<endl;
                break;
        }
    }
    
}
