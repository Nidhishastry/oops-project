#include <iostream>
#include<stdlib.h>


using namespace std;

class Char3
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


class general {
    
public:
    Char3 c;
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
     string set_easy_question(int i, int j)
    {
        
        string question[5][6] = {
            /* 1.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",
	   
	   /* 2.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",

	   /* 3.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",

           /* 4.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",

	   /* 5.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",
        };
        return question[i][j];
    }
    
     string set_medium_question(int i, int j)
    {
	string question[5][6] = {
            /* 1.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",
	   
	   /* 2.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",

	   /* 3.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",

           /* 4.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",

	   /* 5.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",
        };
        return question[i][j];
    }
    
    string set_tough_question(int i, int j)
    {
	string question[5][6] = {
            /* 1.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",
	   
	   /* 2.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",

	   /* 3.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",

           /* 4.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",

	   /* 5.     */        "",
				"1.",
				"2.",
				"3.",
				"4.",
				"",
        };
        return question[i][j];
    }
};
	
