#include <iostream>
#include<stdlib.h>



using namespace std;
class Char2
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



class biology {
    
public:
    Char2 c;
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
            /* 1.     */        "Ozone hole refers to",
				"1.hole in ozone layer",
				"2.decrease in the ozone layer in troposphere.",
				"3.decrease in thickness of ozone layer in stratosphere",
				"4.increase in the thickness of ozone layer in troposphere",
				"3",
	   
	   /* 2.     */        "Plants receive their nutrients mainly from",
				"1.chlorophyll",
				"2.atmosphere",
				"3.light",
				"4.soil",
				"4",

	   /* 3.     */        "Movement of cell against concentration gradient is called",
				"1.osmosis",
				"2.active transport",
				"3.diffusion",
				"4.passice transport",
				"2",

           /* 4.     */        "Photosynthesis generally takes place in which parts of the plant?",
				"1.Leaf and other chloroplast bearing parts",
				"2.steam and leaf",
				"3.Roots and chloroplast bearing parts",
				"4.Bark and leaf",
				"1",

	   /* 5.     */        "One of the following is not a function of bones.",
				"1.Place for muscle attachment",
				"2.Protection of vital organs",
				"3.Secreation of harmones for calcium regulation in blood and bones",
				"4.Production ofblood corpuscles",
				"3",
        };
        return question[i][j];
    }
    
     string set_medium_question(int i, int j)
    {
	string question[5][6] = {
            /* 1.     */        "Prokaryotic cells lack",
				"1.nucleolus",
				"2.nuclear membrane",
				"3.membrane bound organelles",
				"4.All of these",
				"4",
	   
	   /* 2.     */        "Primary phloem develops from",
				"1.lateral meristem",
				"2.protoderm",
				"3.extrastelar cambium",
				"4.provascular tissue",
				"4",

	   /* 3.     */        "Plants that grow in saline water are called",
				"1.halophytes",
				"2.hydrophytes",
				"3.mesophytes",
				"4.thallophytes",
				"1",

           /* 4.     */        "Phloem is a tissue found in",
				"1.reproductive organs of animals",
				"2.plants",
				"3.insects",
				"4.mammals",
				"2",

	   /* 5.     */        "N2 content is kept constant in the biosphere due to",
				"1.N2 fixation",
				"2.industrial pollution",
				"3.nitrogen cycle",
				"4.absorption of nitrogen",
				"3",
        };
        return question[i][j];
    }
    
    string set_tough_question(int i, int j)
    {
     string question[5][6] = {
            /* 1.     */        "Nucleus, the genetic material containing rounded body in each cell, was first discovered in 1831 by",
				"1.Robert Hooke",
				"2.Robert Brown",
				"3.Rudolf Vichow",
				"4.Theodore schwann",
				"2",
	   
	   /* 2.     */        "Pyorrhoea is a disease of the",
				"1.nose",
				"2.gums",
				"3.heart",
				"4.lungs",
				"2",

	   /* 3.     */        "Prothrombin which helps in clotting of blood is released by",
				"1.lymphocytes",
				"2.erythrocytes",
				"3.monocytes",
				"4.blood platelets",
				"4",

           /* 4.     */        "Myopia is connected with",
				"1.ears",
				"2.eyes",
				"3.lungs",
				"4.None of these",
				"2",

	   /* 5.     */        "Plants growing on sand are called as",
				"1.chasmophytes",
				"2.oxylophytes",
				"3.lithophytes",
				"4.psammophytes",
				"4",
        };
        return question[i][j];
    }
};
    
	
