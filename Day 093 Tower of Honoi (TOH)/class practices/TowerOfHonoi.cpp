/*  
Topic
========

TOH (TOWER of HONOI)
==========

Question: WAP top perform tower of honi problem for different size of n.

*/

#include<iostream>
using namespace std;
void toh(int n, int source, int helper, int destination) {
  // Base condition
  if(n == 1) {
    cout<<"Move disk "<<n<<" from source ("<<source<<") to destination ("<<destination<<")" << endl;
    return;
  }


  // Move n-1 disc from source to helper, and middle will be destination
  toh(n-1, source, destination, helper);
  // Move nth disk from source to destination
  cout << "Move disk " << n << " from source (" << source << ") to destination (" << destination << ")" << endl;
  // Move n-1 disk from helper to destination, and here middle will be source
  toh(n-1, helper, source, destination);
}

int main() {
  int n = 3;
  int source = 1, helper = 2, destination = 3;

  toh(n, source, helper, destination);

  return 0;
}


/*  
Output:-
----------
n=3

Move disk 1 from source (1) to destination (3)
Move disk 2 from source (1) to destination (2)
Move disk 1 from source (3) to destination (2)
Move disk 3 from source (1) to destination (3)
Move disk 1 from source (2) to destination (1)
Move disk 2 from source (2) to destination (3)
Move disk 1 from source (1) to destination (3)




n=4

Move disk 1 from source (1) to destination (2)
Move disk 2 from source (1) to destination (3)
Move disk 1 from source (2) to destination (3)
Move disk 3 from source (1) to destination (2)
Move disk 1 from source (3) to destination (1)
Move disk 2 from source (3) to destination (2)
Move disk 1 from source (1) to destination (2)
Move disk 4 from source (1) to destination (3)
Move disk 1 from source (2) to destination (3)
Move disk 2 from source (2) to destination (1)
Move disk 1 from source (3) to destination (1)
Move disk 3 from source (2) to destination (3)
Move disk 1 from source (1) to destination (2)
Move disk 2 from source (1) to destination (3)
Move disk 1 from source (2) to destination (3)

*/
