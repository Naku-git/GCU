#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    fstream myfile;
    string wordArray[50], temp;
    int m = 0;
    myfile.open("Text.txt");
    while (!myfile.eof()) {
        myfile >> wordArray[m];
        m++;
    }
    myfile.close();

    for (int j = 0; j < 50; j++) {
        cout << wordArray[j] << " ";
    }
    for (int i = 0; i < 50; i++) {
        for (int j = 1; j < 50; j++) {
            if (wordArray[j - 1] > wordArray[j]) {
                temp = wordArray[j - 1];
                wordArray[j - 1] = wordArray[j];
                wordArray[j] = temp;
            }
        }
    }
    cout << endl << endl;
    for (int j = 0; j < 50; j++) {
        cout << wordArray[j] << " ";
    }

    int bottomHalf = 0;
    int len = 50;
    int topHalf = len - 1;
    string key;

    cout << endl << endl << endl;
    cout << "What word do you want to find" << endl << "Press 0 to stop";
    cin >> key;

    while (bottomHalf <= topHalf) {
        int mid = bottomHalf + (topHalf - bottomHalf) / 2;
        if (wordArray[mid] == key) {
            cout << key << " is in the text" << endl;
            break;
        }
        if (key > (wordArray[mid])) {
            bottomHalf = mid + 1;
        }
        else {
            topHalf = mid - 1;
        }
    }
}