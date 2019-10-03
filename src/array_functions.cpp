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


bool processFile(std::fstream &myfstream) {

	if (!myfstream.is_open())
		return false;

	std::string line;

	while (!myfstream.eof()) {
		getline(myfstream,line);
		processLine(line);
	}

	myfstream.close();
	return true;

}

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

	switch (so) {
	case ASCENDING:
		for (int i = 0; i < size; i++) {
			for(int j = i+1; j < size; j++) {
				std::string firstWord= words[i].word;
				std::string secondWord = words[j].word;

				toUpper(firstWord);
				toUpper(secondWord);

				if (firstWord > secondWord) {
					std::string tempWord = words[i].word;
					int tempInt = words[i].word_count;


					words[i].word = words[j].word;
					words[i].word_count = words[j].word_count;

					words[j].word = tempWord;
					words[j].word_count = tempInt;
				}
			}
		}
		break;
	case DESCENDING:
		break;
	case NUMBER_OCCURRENCES:
		break;
	case NONE:
		break;
	}
}
