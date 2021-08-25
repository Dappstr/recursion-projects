#include <iostream>

using std::cin; using std::cout;

void populateArray(int (&usrArray)[5])
{
    cout << "Enter 5 elements: ";
    cin >> usrArray[0] >> usrArray[1] >> usrArray[2] >> usrArray[3] >> usrArray[4];
}


int recusiveArray(const int* beginArray, const int* endArray, int minNumber = INT_MAX)
{
    if (beginArray == endArray) //Once the start of the array reaches the end of the array, print the lowest number
    {
        return minNumber;
    }

    return recusiveArray(beginArray + 1, endArray, std::min(minNumber, *beginArray)); //Return the function which will go to the next array element until it reaches endArray and then will find the minimum number
}


int main()
{
    int usrArray[5];
    int arraySize = std::size(usrArray); //Get size of array

    populateArray(usrArray);

    cout << "\nMinimum number: " << recusiveArray(usrArray, usrArray + arraySize);

    return 0;
}
