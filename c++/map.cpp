#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> phoneBook;
    int n;
    cout<<"enter the number of input :";
    cin >> n;

    // Read names and numbers, add to phoneBook:
    for(int i = 0; i < n; i++){
        string name;
        string phone;
        cout<<"Enter the name :";
        cin >> name;
        cout<<"Enter the mobile :";
        cin >> phone;
        phoneBook[name] = phone;
    }

    // Execute queries:
    map<string,string>::iterator it;
    string query;
    while( cin >> query ){
        it = phoneBook.find(query);

        if ( it != phoneBook.end() ){ // key is found in phoneBook
            cout << it->first << "=" << it->second << '\n';
        }
        else{ // the iterator hit the end of the phone book without finding key
            cout << "Not found" << '\n';
        }
    }

    return 0;
}
