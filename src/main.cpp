//============================================================================
// Name        : AdvancedSoftwareEngineering
// Author      : SahinAKYOL
// Version     :0.1.0
// Copyright   : free :D
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include "sort.h"
using namespace std;

int main () {
	sort Sort;
	Sort.loader_from_file();
	string choice;
	do {
		printf("//=============================================");
		printf("\nIf you want name of the descending list. \n Please enter to 'descending'\n");
		printf("//=============================================");
		printf("If you want name of the ascending list. \n Please enter to 'ascending'\n");
		printf("//=============================================");
		printf("If you want exit. \n Please enter to 'exit'\n\n\n");
		cin>>choice;
		if (choice == "ascending"){
			Sort.nameSorter_with_bubbleSort_ascending();
		}
		else if(choice == "descending"){
			Sort.nameSorter_with_insertionSort_descending();
		}

	} while (choice !="exit");


  return 0;
}
