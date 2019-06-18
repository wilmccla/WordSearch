#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "WordSearch.h"
using namespace  std;

int main()
{
	cout << "Welcome. This is my word search program that counts the number of certain keywords that are contained within my chosen paragraphs.\n";
	cout << "Let us begin by creating the file that will contain the Keywords.\n";

	//Call CreateKeyWords
	CreateKeyWords();

	cout << "Next, we shall create the file that will contain the paragraphs.\n";

	//Call CreateParagraphs
	CreateParagraphs();

	cout << "Now, we will compare the Keywords to the words in the paragraphs.\n";

	//Call Comparewords
	CompareWords();
}

void CreateKeyWords()
{
	cout << "Creating KeyWords File...\n";
	//Create a new text file called KeyWords
	KeyWords.open("KeyWords.txt", fstream::out);
	system("pause");

	cout << "Adding KeyWords to file...\n";
	KeyWords << "Never" << endl;
	KeyWords << "You" << endl;
	KeyWords << "It" << endl;
	KeyWords << "Foes" << endl;
	KeyWords << "Armor" << endl;
	KeyWords << "Weakness" << endl;
	KeyWords << "People" << endl;
	KeyWords << "Your" << endl;
	KeyWords << "Peace" << endl;
	KeyWords << "Confused" << endl;
	system("pause");

	cout << "Closing KeyWords File...\n";
	//Close file
	KeyWords.close();
	system("pause");
	return;
}

void CreateParagraphs()
{
	cout << "Creating Paragraphs File...\n";
	//Creating a new text file called Paragraphs
	Paragraphs.open("Paragraphs.txt", fstream::out);
	system("pause");

	cout << "Adding Paragraphs To File...\n";
	//First Paragraph
	Paragraphs << "Never forget what you are, for surely the world will not." << endl;
	Paragraphs << "Make it your strength. Then it can never be your weakness." << endl;
	Paragraphs << "Armor yourself in it, and it will never be used to hurt you." << endl << endl;
	//Second Paragraph
	Paragraphs << "The common people pray for rain, healthy children, and a summer that never ends." << endl;
	Paragraphs << "It is no matter to them if the high lords play their game of thrones." << endl;
	Paragraphs << "So long as they are left in peace. They never are." << endl << endl;
	//Third Paragraph
	Paragraphs << "Always keep your foes confused." << endl;
	Paragraphs << "If they are never certain who you are or what you want," << endl;
	Paragraphs << "they cannot know what you are like to do next." << endl;
	Paragraphs << "Sometimes the best way to baffle them is to make moves that have no purpose," << endl;
	Paragraphs << "or even seem to work against you." << endl << endl;
	system("pause");

	cout << "Closing Paragraphs File...";
	//Close File
	Paragraphs.close();
	system("pause");
	return;
}

void CompareWords()
{
	cout << "Opening KeyWords...\n";
	KeyWords.open("KeyWords.txt");

	cout << "Getting KeyWords...\n";
	KeyWords >> word;
	//Loop while there's still words to read in KeyWords
	while (KeyWords.good())
	{
		//Add word to the vector
		VKeyWords.push_back(word);
		//Move on to the next word
		KeyWords >> word;
	}

	cout << "All Keywords accounted, Closing File...\n";
	KeyWords.close();

	cout << "Opening Paragraphs...\n";
	Paragraphs.open("Paragraphs.txt");

	cout << "Reading Paragraphs...\n";
	Paragraphs >> word;
	while (Paragraphs.good())
	{
		//Add word to the vector
		VParagraphs.push_back(word);
		//Move on to the next word
		Paragraphs >> word;
	}

	cout << "All Paragraphs accounted, Closing File...\n";
	Paragraphs.close();

	cout << "Comparing Files...";

}


