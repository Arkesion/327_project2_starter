/*
 * functionstocomplete.cpp
 *
 *  Created on: October 2, 2019
 *      Author: Kevin Quirici
 */

//============================================================================
//	TODO add necessary includes here

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "array_functions.h"
#include "constants.h"
#include "utilities.h"

using namespace constants;


//============================================================================

//Variables

struct track {
	std::string word;
	int word_count;
};

track words[MAX_WORDS];
int size = 0;

//=============================================================================

//Functions

//resets size to 0, cleans out all words in array, resets word count to 0
void clearArray() {
	size = 0;
	for (int i = 0; i <MAX_WORDS; i++) {
		words[i].word_count = 0;
		words[i].word = "";
	}
}

//getter for size of array
int getArraySize() {
	return size;
}

// returns word at int i in words
std::string getArrayWordAt(int i) {
	return words[i].word;
}

//returns the word count at i in words
int getArrayWord_NumbOccur_At(int i) {
	return words[i].word_count;
}


bool processFile(std::fstream &myfstream) { return false; }

void processLine(std::string &myString) { }

void processToken(std::string &token) { }


bool openFile(std::fstream& myfile, const std::string& myFileName, std::ios_base::openmode mode) {
	myfile.open(myFileName.c_str(), mode);
	return true;
}

void closeFile(std::fstream& myfile) {
	myfile.close();
}


int writeArraytoFile(const std::string &outputfilename) {
	return constants::SUCCESS;
}

void sortArray(constants::sortOrder so) {

}

//TODO look in utilities.h for useful functions, particularly strip_unwanted_chars!
