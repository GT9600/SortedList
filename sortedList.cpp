#include <iostream>
using namespace std;

void selectionSort(int list [], const int listSize);

int main()
{
    /* /*const int sets the constant size of the array
 *student class uses that size for its array
 * declaring min and max to be used to hold the corresponding element
 * initialize i to 0 as on some versions of c++, if you do not initialize a variable, it will be a random number*/

    const int SIZE = 5;
    int studentClass[SIZE];
    int i = 0;
    cout << "Enter age of 5 students from the class " << endl;

    /*this is how you get input. by setting a range for the number of students being counted
    *the only input taken will be what is counted (0-5) up to 5 values */
    for (int i = 0; i < SIZE; i++){
        cin >> studentClass[i];
        cin.get();  //to access character array, it will read the string and whitespace
    }
    selectionSort(studentClass, SIZE);
}


/* creating a temp variable to hold swapped values
 * the outer loop counts index at a time along the array until it reaches the end
 * this is done by passing the array and value of the size of the list (in this case 5)
 * the array counts until it reaches (in this case) 5,  then it stops
 */
void selectionSort(int list[], const int listSize){
    int temp;


    for (int i = 0; i < listSize; i++){
        int minIndex = i;


        cout <<"i: " << i << endl;
        cout <<"list[i]: " << list[i] << endl;


        /*counting along the array, and taking the smallest element found, then swapping positions with it
         * and the element at the position i*/
        for (int j = i + 1; j < listSize; j++){
            cout << "\tj: " << j << endl;
            cout << "\tlist[j]: " << list[j] << endl;
            if (list[minIndex] > list[j]){
                cout << list[j]<< endl;
                cout << "\t\tReassigning minIndex!\n";
                minIndex = j;
            }
        }
        //temp is where the element at index i will sit while it is swapped with the current lowest element in the list
            temp = list[i];
            list[i] =  list[minIndex];
            list[minIndex] = temp;
        cout << "\tminIndex: " << minIndex << endl;
        cout << list[i] << endl;
    }

}