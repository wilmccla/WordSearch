#pragma once
#include <string>
#include <vector>
using namespace std;

//Declaring files that has both input and output
fstream KeyWords;
fstream Paragraphs;

//Declare Vectors for word comparison
vector<string> VKeyWords;
vector<string> VParagraphs;

//Declare variable to hold the incoming word from KeyWords
char word[];

//KeyWords Counters
int KeyWord0 = 0;
int KeyWord1 = 0;
int KeyWord2 = 0;
int KeyWord3 = 0;
int KeyWord4 = 0;
int KeyWord5 = 0;
int KeyWord6 = 0;
int KeyWord7 = 0;
int KeyWord8 = 0;
int KeyWord9 = 0;

//Declaring Methods
void CreateKeyWords();
void CreateParagraphs();
void CompareWords();