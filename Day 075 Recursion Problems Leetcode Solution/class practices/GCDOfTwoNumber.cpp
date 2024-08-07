/*  
Question: 
===========
Find the GCD of two number, using recursion.
*/





/*
Here we need to check two further steps as given- 
1). If b = 0 then GCD(a,b) = a.
2). Otherwise compute GCD as given,
GCD(b, a%b) repeat untill b will goes to 0, at this point GCD contains a.
*/ 
// Mathematical intitution behind it, as given value a = 18, b = 48
/**********************************
 GCD(18, 48) ==>  a=18, b=(a%b)= 18%48 -> 18

 GCD(48, 18) ==> a=48, b=(a%b)= 48%18 -> 12

 GCD(18, 12) ==> a=18, b=(a%b)=18%12 -> 6

 GCD(12, 6) ==> a=12, b=(a%b)=12%6 -> 0

 GCD(6, 0)  --> 6 (answer)



*********************************/





// We will also return the same value from the GDC function and print it into the main()

#include<iostream>
using namespace std;
int GCD(int a, int b){
  if(b == 0) {
    return a;
  }

  return GCD(b, a%b);
}

int main() {
  int num1, num2;
  cout << "Enter the num1 and num2:";
  cin >> num1 >> num2;

  cout << GCD(num1, num2) << endl;

  return 0;
}

/*  
Output:-
---------
Enter the num1 and num2:18 48
6

*/















/*  

#include<iostream>
using namespace std;
void GCD(int a, int b){
  if(b == 0) {
    cout << a << endl;
    return;
  }

  GCD(b, a%b);
}

int main() {
  int num1, num2;
  cout << "Enter the num1 and num2:";
  cin >> num1 >> num2;

  GCD(num1, num2);

  return 0;
}

*/






/*  
Output:-
---------
Enter the num1 and num2:18 48
6

Enter the num1 and num2:25 
125
25

*/

