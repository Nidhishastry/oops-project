//
//  English.cpp
//  nid
//
//  Created by Kumar Divya  Rajat on 20/04/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include<stdlib.h>

using namespace std;

class Char
{
public:
    void newline()
    {
        cout<<endl;
    }
    void printchar(char a)
    {
        for(int i=0;i<80;i++)
        {
            cout<<a;
        }
        newline();
    }
};


class physics {
    
public:
    Char c;
    int count;
    void print_question(int i, int difficulty)
    {
        if(difficulty == 1) {
            cout<<set_easy_question(i,0)<<endl;
        }
        else if(difficulty == 2) {
            cout<<set_medium_question(i,0)<<endl;
        }
        else if(difficulty == 3 ) {
            cout<<set_tough_question(i, 0 )<<endl;
        }
        else {
            cout<<"Some error occured. Please restart the game."<<endl;
        }
        
    }
    
    void print_options(int i, int difficulty) {
        if(difficulty == 1) {
            cout<<set_easy_question(i,1)<<endl;
            cout<<set_easy_question(i,2)<<endl;
            cout<<set_easy_question(i,3)<<endl;
            cout<<set_easy_question(i,4)<<endl;
        }
        else if(difficulty == 2) {
            cout<<set_medium_question(i,1)<<endl;
            cout<<set_medium_question(i,2)<<endl;
            cout<<set_medium_question(i,3)<<endl;
            cout<<set_medium_question(i,4)<<endl;
        }
        else if(difficulty == 3 ) {
            cout<<set_tough_question(i, 1 )<<endl;
            cout<<set_tough_question(i, 2 )<<endl;
            cout<<set_tough_question(i, 3 )<<endl;
            cout<<set_tough_question(i, 4 )<<endl;
            
        }
        else {
            cout<<"Some error occured. Please restart the game."<<endl;
        }
    }
    
    void check_answer(int i ,  int difficulty, string answer) {
        if(difficulty == 1) {
            if( set_easy_question(i, 5) == answer) {
                c.printchar('-');
                cout<<"Correct answer"<<endl;
                c.printchar('-');

                count++;
            }
            else {
                c.printchar('-');
                cout<< "Wrong Answer"<<endl;
                c.printchar('-');

            }
        }
        else if(difficulty == 2) {
            if( set_medium_question(i, 5) == answer) {
                c.printchar('-');
                cout<<"Correct answer"<<endl;
                c.printchar('-');
                count++;
            }
            else {
                c.printchar('-');
                cout<< "Wrong Answer"<<endl;
                c.printchar('-');
            }
        }
        else if(difficulty == 3) {
            if( set_tough_question(i, 5) == answer) {
                c.printchar('-');
                cout<<"Correct answer"<<endl;
                c.printchar('-');
                count++;
            }
            else {
                c.printchar('-');
                cout<< "Wrong Answer"<<endl;
                c.printchar('-');
            }
        }
    }
    
    string set_medium_question(int i, int j)
    {
        
        string question[5][6] = {
            /* 1.     */         "Which one among the following radiations carries maximum energy?",
				"1.gamma rays",	
				"2.x-rays",
				"3.infra red rays",	
				"4.ultraviolet rays",	
				"1",
            
            /* 2.     */        "Power of a lens is measured in",
				"1.ultrasonic unit",
				"2.decibel",
				"3.dioptre",
				"4.magnification","3",

            
            /* 3.     */        "Power reactor is located in Tamil Nadu at",
				"1.Kalpakkam",	
				"2.Sriharikota",	
				"3.Tuticorn",
				"4.Pudukottai",
				"1",

 	/* 4.     */ 		"Recording of sound on tapes was first invented by",
				"1Fleming.",
				"2.Ampere",
				"3.Poulsen",	
				"4.Becquerrel",
				"3",
	
	/* 5.     */ 		"We cannot see during a fog because of",
				"1.gravitational force",
				"2.frictional force",
				"3.centripetal force",
				"4.centrifugal force",	
				"4",
            
            
        };
        return question[i][j];
    }
    string set_easy_question(int i, int j)
    {
        
        string question[5][6] = {
            /* 1.     */        "Which one of the following is used as a moderator in nuclear reactor",
				"1.radium",
				"2.graphite",
				"3.thorium",
				"4.ordinary water",
				"2",
            
            /* 2.     */         "Who is the father of discoveries?",
				"1.Edison",
				"2.Pascal",
				"3.Einstein",
				"4.Archimedes",
				"4",
            
            /* 3.     */         "X-rays travel with the velocity of",
				"1.positive rays",
				"2.sound",
				"3.light",
				"4.alpha rays",
				"3",
            /* 4.     */        "Which one of the following remains constant while throwing a ball upward?",
				"1.velocity",
				"2.displacement",
				"3.accleration",
				"4.kinetic energy",
				"3",
	/* 5.     */ 		"Which one of the following common devices works on the basis of the principle of mutual induction?",
				"1.LED",
				"2.Transformer",
				"3.Photodiode",	
				"4.Tube light",
				"2",

        };
        return question[i][j];
    }
    
    
    
    string set_tough_question(int i, int j)
    {
        
        string question[5][6] = {
            
            /* 1.     */ 	"Bhabha Atomic Research Centre(BARC) is located at",
				"1.Colaba",
				"2.Trombay",
				"3.Malabar",
				"4.JUhu","2",
 	       
            /* 2.     */        "Which one of the following is the unit of activity of a radioactive source?",
				"1.Siemens",
				"2.Lux",
				"3.Tesla",
				"4.Becquerrel",	
				"4", 
            	
	/* 3.    */		"The term Mach is used to measure speed of",
				"1sound.",
				"2.wind",
				"3.ship",
				"4.aeroplane",
				"4",  
	
	    /* 4.     */ 	"The lens used to rectify long sight is",
				"1.convex lens",
				"2.concave lens",	
				"3.plano concave lens",
				"4.plano convex lens",
				"1",        
           
	 /* 5.    */  		"Einstein got the Nobel Prize for his theory of",
				"1.radio activity",
				"2.relativity",	
				"3.polarisation",	
				"4.photo electric effect",	
				"2",
               };
        return question[i][j];
    }
};


