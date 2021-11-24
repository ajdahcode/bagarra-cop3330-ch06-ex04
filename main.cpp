/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 alden bagarra
 */

#include <iostream>
#include <vector>
using namespace std;

// Class Name_value for vector that will hold the name and the value
class Name_value {
public:
    string name;
    int value;
    Name_value(string n, int v) : name(n), value(v) {}
};

int main() {
  // Vector for the name and value pair
  vector<Name_value> pair;
	string n = "";
	int v;

	while (n != "NoName" && v != 0) {	
    // Take in the input for the name and value
    cout << ("What is the name: ");
    cin >> n;
    cout << ("What is the value: ");
    cin >> v;

		for (int i = 0; i < pair.size(); ++i) {
      // If the names inputted are the same we state 
      // that they are not unique
      if (n == pair[i].name){
        cout << "Not unique: " << n << "\n";
      }
    }
    // Put the pair element into the vector
    pair.push_back(Name_value(n,v));
	}
  // Print out the pairs fromt the vector
	for (int i = 0; i < pair.size(); ++i){
    cout << "(" << pair[i].name << "," << pair[i].value << ")\n";
  }
} 