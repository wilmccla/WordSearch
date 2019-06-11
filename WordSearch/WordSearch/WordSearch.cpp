#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace  std;

int main()
{
	//Declaring a file that has both input and output
	fstream KeyWords;
	cout << "Creating KeyWords File...\n";
	//Create a new text file called KeyWords
	KeyWords.open("KeyWords.txt");
	system("pause");

	cout << "Adding KeyWords to file...";
	KeyWords << "Never\n";
	KeyWords << "You\n";
	KeyWords << "It\n";

	//Declaring a file that has both input and output
	fstream Paragraphs;
	cout << "Creating Paragraphs File...\n";
	//Creating a new text file called Paragraphs
	Paragraphs.open("Paragraphs.txt");
	system("pause");

	cout << "\n\nAdding Paragraphs To File...\n";
	//First Paragraph
	Paragraphs << "Never forget what you are, for surely the world will not.\n";
	Paragraphs << "Make it your strength. Then it can never be your weakness.\n";
	Paragraphs << "Armor yourself in it, and it will never be used to hurt you.\n\n";
	//Second Paragraph
	Paragraphs << "The common people pray for rain, healthy children, and a summer that never ends.\n";
	Paragraphs << "It is no matter to them if the high lords play their game of thrones.\n";
	Paragraphs << "So long as they are left in peace. They never are.\n\n";
	//Third Paragraph
	Paragraphs << "Always keep your foes confused.\n";
	Paragraphs << "If they are never certain who you are or what you want,\n";
	Paragraphs << "they cannot know what you are like to do next.\n";
	Paragraphs << "Sometimes the best way to baffle them is to make moves that have no purpose,\n";
	Paragraphs << "or even seem to work against you\n\n";
	system("pause");
	cout << "Closing Paragraphs File...";

}