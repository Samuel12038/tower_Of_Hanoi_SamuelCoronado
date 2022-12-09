// Samuel Coronado Dr.T tower of Hanoi program with while loop
// Recursion is the repetition of a function until a certain condition is met
// made on visual studio so history 
#include <iostream>
using namespace std;
int moves = 0;

void TowersHanoi(int m, char a, char b, char c) {
  moves++;

  if (m == 1) {
    cout << "Move disc " << m << " from " << a << " to " << c << endl;
  } else {
    TowersHanoi(m - 1, a, c, b);
    cout << "Move disc " << m << " from " << a << " to " << c << endl;
    TowersHanoi(m - 1, b, a, c);
  }
}

int main() {
  
   char again = 'y';
   while (again == 'y' || again == 'Y'){ // while loop to repeat program depending on user input
     
   
    
    int discs;
    cout << "Please enter the number of discs: " << endl;
    cin >> discs;
    TowersHanoi(discs, 'A', 'B', 'C');
    cout << "It took " << moves << " moves to solve. " << endl;

      cout << "\t Would you like to run the program again? (y/n)";
  cin >> again; 
     }
    return 0;
    
}