#include <iostream>

int main(){

  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  if (number % 2)
    std::cout << number << " is even\n";

  if (!number % 2)
    std::cout << number << " is odd\n";

  return 0;
}

/*
> -- greater
< -- lesser
<= -- lesser or equal
>= -- greater or equal
!= -- not equal
&& -- AND (gate)
! -- NOT
|| -- OR (gate)

if (boolean variable) {} -- if block always asks if variable is true UNLESS stated otherwise

bool -- true/false
int -- no
double -- floating point numbers
string 
final
*/



/* EXAMPLE CODE:
int age = 18;
bool has_driving_license = true;

if (age >= 17 && has_driving_license) {
    std::cout << "Drive" << endl;
} else {
    std:: cout << "Walk" << endl;
}

^ this piece of code would output "Drive". the variable age is greater than the condition of 17
AND
the bool variable is true, which the condition also checks for.

had neither of them met, then it would've outputted "Walk".


2ND EXAMPLE CODE USING ABOVE:
...
} else if (age >= 17) {
    std::cout "pls learn" << endl;
} ...

assuming this person is of age BUT doesn't have a license, then instead of the last else block being met,
it checks for this earlier else block.
this could be seen equivalent of an OR gate, where at least one condition that is true outputs as true.


to make this more "cleaner" you can nest if blocks. for example:

...
if (age >= 17) {
    if (has_driving_license) {
        ...
    } else {
        ...
    }
} else {
    ...
}

*/




/*
if (0 < x < 10) {...} can be rewritten as:
--> if (x > 0 && x < 10) {...}
*/




/*
double x =  0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;

if (x == 1) {
    cout << "x is 1\n";
} else {
    cout << "x is not 1\n";
}

^ this would output "x is not 1". this is because the condition checks if x is an INTEGER of 1.
however, the x assigned is a DOUBLE, meaning it's actually 1.0000... (zero reocurring).
1.0000... != 1.
even when outputting x before the control flow, it says "1". it's because "cout" converts it to integer.

to fix this, maybe convert the double before the if block.
*/




/*
DEBUGGING:

yo th is code no workies


> print statements scattered throughout program
> use included debugger if available
    > breakpoint
        > starts program and stops program at certain points of the code
    > stepper
        > exec line-by-line to find location of bug
    >skip
        > skip lines or methods that you know works


GDB:
some program to debug

TASK:
there's something wrong with the following code:
--------------------------------------------
#include <iostream>

int main(){

  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  if (number % 2)
    std::cout << number << " is even\n";

  if (!number % 2)
    std::cout << number << " is odd\n";

  return 0;
}
--------------------------------------------

initially running it and inputting 3, it says that 3 is even which it isn't.
some numbers like 2 give an error.

this is because the if condition simply asks if the number can be divisible by 2.
however, to check if a number is a mod of 2, modding must give the output 0 and the
if condition doesn't check this. this can be fixed by rewriting it like this:
--------------------------------------------
...
if (number % 2 == 0) {
    ...
}
...
--------------------------------------------
in this case, it checks if the remainder of the division is 0. if so, the number is even.

this can be applied to the other if block:
--------------------------------------------
...
if (number % 2 != 0){
    ...
}
...
--------------------------------------------
if the remainder is not 0, then the number must be odd.
this can be cleaned, by removing the extra if block and adding an else block instead.

therefore, the correct code for this is:
--------------------------------------------
#include <iostream>

int main(){

  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  if (number % 2 == 0) {
    std::cout << number << " is even\n";
  } else {
    std::cout << number << " is odd\n";
  }

  return 0;
}
---------------------------------------------

*/