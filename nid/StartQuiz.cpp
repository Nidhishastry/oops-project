//
//  StartQuiz.cpp
//  nid
//
//  Created by Kumar Divya  Rajat on 20/04/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include<stdlib.h>
#include "Physics.cpp"
#include "Chemistry.cpp"
#include "Biology.cpp"
#include "English.cpp"
#include "general.cpp"

using namespace std;


class startQuiz {
   	string name;
   	physics p;
  	chemistry c;
   	biology b;
	english e;
	general g;
    biology k;
    

    
public:
    
    startQuiz() {
    p.count = 0;
	c.count = 0;
	b.count = 0;
	e.count = 0;
	g.count = 0;
    };
    
   
    
    void start() {
               
        cout<<"Select the subject : "<<endl;
        cout<<" 1. Physics\n 2. English\n 3. Chemistry\n 4. Biology\n 5. General Knowledge  "<<endl;
        cout<<"Press q to exit the game all together"<<endl;
        string answer;
        char choice;
        cin>>choice;
        switch (choice) {
            case '1':
                int k;
                int i,j,n;
                i = 0;j=0;n=0;
                
                for( k = 0 ; k < 5;k++) {
                    if(p.count<=1){
                    p.print_question(i, 1);
                    p.print_options(i, 1);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    p.check_answer(i, 1, answer);
                    i++;
                    }
                
                else if(p.count>1 &&  p.count<=3){
                    p.print_question(j, 2);
                    p.print_options(j,2);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    p.check_answer(j, 2, answer);
                    j++;
                    }
                    else if(p.count>3)
                    {
                        p.print_question(n, 3);
                        p.print_options(n,3);
                        cout<<"Enter answer: " ;
                        cin>>answer;
                        p.check_answer(n, 3, answer);
                        n++;
                    }    
                }
                cout<<"Total score = "<<p.count<<endl;
                break;
                
            case '2':
		 i = 0;j=0;n=0;
                
                for( k = 0 ; k < 5;k++) {
                    if(e.count<=1){
                    e.print_question(i, 1);
                    e.print_options(i, 1);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    e.check_answer(i, 1, answer);
                    i++;
                    }
                
                else if(e.count>1 &&  e.count<=3){
                    e.print_question(j, 2);
                    e.print_options(j,2);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    e.check_answer(j, 2, answer);
                    j++;
                    }
                    else if(e.count>3)
                    {
                        e.print_question(n, 3);
                        e.print_options(n,3);
                        cout<<"Enter answer: " ;
                        cin>>answer;
                        e.check_answer(n, 3, answer);
                        n++;
                    }    
                }
                cout<<"Total score = "<<e.count<<endl;
                break;
            case '3':
                i = 0;j=0;n=0;
                
                for( k = 0 ; k < 5;k++) {
                    if(c.count<=1){
                    c.print_question(i, 1);
                    c.print_options(i, 1);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    c.check_answer(i, 1, answer);
                    i++;
                    }
                
                else if(c.count>1 &&  c.count<=3){
                    c.print_question(j, 2);
                    c.print_options(j,2);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    c.check_answer(j, 2, answer);
                    j++;
                    }
                    else if(c.count>3)
                    {
                        c.print_question(n, 3);
                        c.print_options(n,3);
                        cout<<"Enter answer: " ;
                        cin>>answer;
                        c.check_answer(n, 3, answer);
                        n++;
                    }    
                }
                cout<<"Total score = "<<c.count<<endl;
                break;
                
            case '4':
		 i = 0;j=0;n=0;
                
                for( k = 0 ; k < 5;k++) {
                    if(b.count<=1){
                    b.print_question(i, 1);
                    b.print_options(i, 1);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    b.check_answer(i, 1, answer);
                    i++;
                    }
                
                else if(b.count>1 &&  b.count<=3){
                    b.print_question(j, 2);
                    b.print_options(j,2);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    b.check_answer(j, 2, answer);
                    j++;
                    }
                    else if(b.count>3)
                    {
                        b.print_question(n, 3);
                        b.print_options(n,3);
                        cout<<"Enter answer: " ;
                        cin>>answer;
                        b.check_answer(n, 3, answer);
                        n++;
                    }    
                }
                cout<<"Total score ="<<b.count<<endl;
                break;
                
            case '5':
		 i = 0;j=0;n=0;
                
                for( k = 0 ; k < 5;k++) {
                    if(g.count<=1){
                    g.print_question(i, 1);
                    g.print_options(i, 1);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    g.check_answer(i, 1, answer);
                    i++;
                    }
                
                else if(g.count>1 &&  g.count<=3){
                    g.print_question(j, 2);
                    g.print_options(j,2);
                    cout<<"Enter answer: " ;
                    cin>>answer;
                    g.check_answer(j, 2, answer);
                    j++;
                    }
                    else if(g.count>3)
                    {
                        g.print_question(n, 3);
                        g.print_options(n,3);
                        cout<<"Enter answer: " ;
                        cin>>answer;
                        g.check_answer(n, 3, answer);
                        n++;
                    }    
                }
                cout<<"Total score ="<<g.count<<endl;
                break;
                
            case 'q':
                exit(0);
                break;
                
            default:
                 cout<<"Seems like you entered an invalid option. Please try again"<<endl;
                break;
        }
    }
    
};

