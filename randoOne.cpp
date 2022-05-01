#include <iostream>
using namespace std;

/* You probably don't care but I took C++ in the year 2000 in my first semester
in college. Maybe I was too hard on myself, but I only got a B and thought
I wasn't cut out for this. But here I am again!

Anyway, I wanted to see if I remembered how to do some basic stuff. To be honest,
the syntax for basic conditionals and loops seems almost identical to Java or 
JavaScript which I ended up learning.

Anyhoo...
*/

int main(){
    int a = 1;
    int b = 1;
    if(a == b){
        cout << a << " is indeed equal to " << b << endl;
    } else {
        cout << "Why would you think that " << a << " is equal to " << b << "?\n";
    }

    int c = 0;
    while (c != 3){
        cout << "Try a guess?\n";
        cin >> c;
        while ( ! cin >> c){
            cin.clear();
            cin.ignore();
            cout << "A number actually...\n";
        }
    }
    if (c == 3) {
        cout << "You guessed it!\n";
    }
    system("pause");
    return 0;
}