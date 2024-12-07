#include <iostream>
#include<unordered_map>

using namespace std;

void menu();
void subMenu();

int main()
{
int num = 0;

menu();

while(num != 5)
{

cin >> num;

switch(num)
{
    case 1:
    cout << "a";
     break;

    case 2:

     break;

    case 3:
        if(cin.fail())          //esta verificando al cin del username
        return -1;              //hay que ponerle el try catch

        subMenu();

     break;

    case 4:

     break;

    case 5:
    cout << "b";
    break;
}
}


    return 0;
}

void menu()
{
    cout << "Enter an action: " << endl;
    cout << "1. Add a user " << endl;
    cout << "2. List all users " << endl;
    cout << "3. Manage a users passwords " << endl;
    cout << "4. Delete a user " << endl;
    cout << "5. Exit " << endl;

}

void subMenu()
{
    cout << "Managing passwords for username: " << endl;
    cout << "1. Store an encrypted password " << endl;
    cout << "2. List all sites and passwords " << endl;
    cout << "3. Retrieve an unencrypted password  " << endl;
    cout << "4. Delete a site " << endl;
    cout << "5. Exit " << endl;

}
