#include <iostream>

using namespace std;

enum {red, green};

enum Month {jan, feb};

enum class Month2 {jan, feb};

int main() {

    // implicit conversion into int, exist at global scope
    cout << red << endl; // print "0"
    int a = red;

    // implicit conversion into int, exist at global scope, named user-defined type
    cout << Month::jan << endl; // print "0"
    cout << jan << endl; // print "0"
    int b1 = jan;
    Month b2 = Month::jan;
    Month b3 = jan;
    //Month b4 = 0; // error. 0 is not a valid value for Month
    Month b5 = Month(0); // initialization with type name possible

    // no implicit conversion into int, exist at local scope, named user-defined type
    /*
    cout << Month2::jan << endl; // error. implicit conversion into int not allowed
    int c1 = Month2::jan; // error. implicit conversion into int not allowed
    Month2 c2 = jan; // error. exist at local scope, so namespace should be specified
    */
    Month2 c3 = Month2::jan;
    Month2 c4 = Month2(0); // initialization with type name possible
    if(c4 == Month2::jan) cout << "same" << endl; // print "same"

    return 0;
}
