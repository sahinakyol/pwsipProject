#include "sort.h"
sort::sort()
{

}
sort::~sort()
{

}


void sort::bubbleSort(string*array, int length){
    int i,j;
    for(i=0;i<length;i++)
    {
        for(j=0;j<i;j++)
            if(array[i]<array[j])
            	swap(array[i],array[j]);
    }

}

void sort::insertionSort(string* array,int length){
    int j;
    string key;
    for(int i=1; i<length; i++){
        key = array[i];
        j = i-1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1] = key;
    }
}

void sort::loader_from_file(){
    string line;
    int p=0;

    ifstream myfile;
    myfile.open("name.txt");
    while(myfile.good()){
        getline(myfile,line);
        name[p]= line;
        p++;
    }
    myfile.close();
}

void sort::nameSorter_with_bubbleSort_ascending(){
    sort::bubbleSort(name,30);
    sort::ascending();
}
void sort::nameSorter_with_insertionSort_descending(){
    sort::insertionSort(name,30);
    sort::descending();
}

void sort::ascending(){
	for(int i=30; i>0; i--)
	cout << name[i] << endl;
}

void sort::descending(){
	for(int i=0; i<30; i++)
	cout << name[i] << endl;
}






