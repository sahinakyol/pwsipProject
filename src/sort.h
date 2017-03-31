#include <string>
#include <fstream>
#include <iostream>


using namespace std;

class sort
{
    public:
        sort();
        virtual ~sort();
        void loader_from_file();
        void nameSorter_with_bubbleSort_ascending();
        void nameSorter_with_insertionSort_descending();
        void insertionSort(string* array,int length);
        void bubbleSort(string* array ,int length);
        void ascending();
        void descending();
    protected:
    private:
        string name[500];
};
