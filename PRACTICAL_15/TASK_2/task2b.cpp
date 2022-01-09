#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main()
{
	fstream myfile;
	myfile.open("text2.txt");
	myfile<< " writing this in a file using fstream";
	myfile.close();
	return 0;
}