//Samantha Pintor (worked with Selena Ouyang)
//Lab 6 
//10-15-24

#include <iostream> 
#include <fstream> 

using namespace std; 
 
int main ()
{
    ifstream inFile; //input file stream variable 
    ofstream outFile; //output file stream variable

    //creating variables 
    int numberOne; //variable for integer one 
    int numberTwo; //variable for integer two 
    char character;  //variable for character 
    string sentence; //variable for the sentence
    
    //open the files 
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    //math 
    inFile >> numberOne >> numberTwo >> character >>  sentence; //input the two integers, character and sentence
    outFile << numberOne + numberTwo << endl << character + 1 << endl << sentence; //output the sum of the two integers, the value of the next character, and the sentence
    
    //close the files
    inFile.close();
    outFile.close();

    return 0; 
}

/*
Part 1 - my input: 
    Input: 
    33 33
    H
    Hello!

    Output: 
    66
    73
    Hello!

Part 2 - given input: 
    Input: 
    23 57
    R
    Howdy!

    Output: 
    80
    83
    Howdy!
*/
