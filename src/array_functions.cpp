/*
 * functionstocomplete.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: keith
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
//============================================================================

//============================================================================
//	stuff you will need
//============================================================================
//TODO define a structure to track words and number of times they occur

struct track {
	std::string word;
	int word_occur;
};


//TODO add a global array of entry structs (global to this file)
track array[constants::MAX_WORDS];


//TODO add variable to keep track of next available slot in array


//TODO define all functions in header file
void clearArray() { }

int getArraySize() { return 0; }

std::string getArrayWordAt(int i) { return ""; }

int getArrayWord_NumbOccur_At(int i){ return 0; }


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
