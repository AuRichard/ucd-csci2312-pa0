/**
 * File: main.cpp
 * Project: ucd-csci2312-pa0
 * Author: Ivo Georgiev
 * Date: 2016-01-18
 */
#include <iostream>
using namespace std;

int studentID;
int reminder;

int main() {
    // TODO Substitute 11 with your UCD ID number, modulo 13 (myId % 13)
	cout << "What is your Student ID number?" << endl;
	cin >> studentID;
    cout << "Hello, world! My number is " << studentID << '!' << endl;
	reminder = studentID % 13;
	cout << reminder;

    return 0;
}