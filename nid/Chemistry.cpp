#include <iostream>
#include<stdlib.h>


using namespace std;
class Char1
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


class chemistry {
    
public:
    Char1 c;
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
            /* 1.     */         "For which one of the following is the density maximum?",
				"1.ice",
				"2.water",
				"3.Benzene",
				"4.Chloroform",	
				"2",
            
            /* 2.     */        "The alcohol used in power alcohol is",
				"1.propanol",
				"2.ethyl alcohol",
				"3.methyl alcohol",
				"4.ethylene alcohol",
				"2",
            
            /* 3.     */        "The alloy of aluminium used for making magnet is",
				"1.duralumin",
				"2.y-alloy",
				"3.alnico",
				"4.aluminium bronze",
				"3",

 	/* 4.     */ 		"Which one of the following is the softest?",
				"1.sodium",
				"2.iron",
				"3.aluminium",	
				"4.lithium",
				"1",
	
	/* 5.     */ 		"Nail polish remover contains",
				"1.acetone",
				"2.benzene",
				"3.acetic acid",
				"4.petroleum ether",
				"1",
            
            
        };
        return question[i][j];
    }
    
    
    
    string set_medium_question(int i, int j)
    {
        
        string question[5][6] = {
            /* 1.     */        "Which one of the following is also called Stranger Gas?",
				"1.Neon",
				"2.Argon",
				"3.Xenon",
				"4.Nitrous oxide",
				"3",

            
            /* 2.     */         "Which synthetic fibre is known as artificial silk?",
				"1.Nylon",
				"2.Rayon",
				"3.cotton",
				"4.terylene",
				"2",
            
            /* 3.     */        "Which is the heaviest metal?",
				"1.iron",
				"2.mercury",
				"3.nickel",
				"4.osmium",
				"2",

            /* 4.     */        "Bleaching action of chlorine is by",
				"1.oxidation",
				"2.reduction",
				"3.decomposition",
				"4.hydrolysis",
				"3",

	/* 5.     */ 		"First atomic theory was proposed by",
				"1.John Dalton",
				"2.E.Rutherford",
				"3.De Broglie",
				"4.D.I.Mendeleef",
				"1",

        };
        return question[i][j];
    }
    
    
    
    string set_tough_question(int i, int j)
    {
        
        string question[5][6] = {
            
            /* 1.     */ 	"The reaction between methane and chlorine in diffused sunlight is",
				"1.Oxidation",
				"2.reduction",
				"3.polymerisation",
				"4.substitution",
				"4",

            /* 2.     */        "Which variety of glass is heat resistant?",
				"1.bottle glass",		
				"2.flint glass",
				"3.hard glass",
				"4.pyrex glass",
				"4",
            	
	/* 3.    */		"Which one of the following is an element?",
				"1.ruby",
				"2.topaz",
				"3.sapphire",
				"4.diamond",
				"4",
	
	    /* 4.     */ 	"Which one of the following does not contain silver?",
				"1.Horn silver",
				"2.Ruby silver",
				"3.Germansilver",
				"4.Lunar caustic",
				"3",
	 /* 5.    */  		"What is a mixture of potassium nitrate powdered charcoal and sulphur called?",
				"1.paint",
				"2.glass",
				"3.gun powder",
				"4.cement",
				"3",
               };
        return question[i][j];
    }
};


