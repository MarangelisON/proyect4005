#include <iostream>
#include<unordered_map>

using namespace std;

//inicializar sin el dinamico, al principio en 1

class 
{
    private:
        string username;
        string site;
    public:
        Hash()
        {
           // unordered_map<string, unordered_map<string, string> > a =
        }   
        string hashFunction(string);
        string xorEncryptDecrypt(const string& input, const string& key) 
        {
            string output = input;
            for (size_t i = 0; i < input.size(); ++i)
                output[i] ^= key[i % key.size()]; // XOR each character with the key
                
            return output;
        }
};


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

//string Hash:: hashFunction(string key_user) {

int main() {
    string password = "my_secure_password";  // Original password
    string key = "my_secret_key";            // Encryption key
    // Encrypt the password
    string encrypted = xorEncryptDecrypt(password, key);
    cout << "Encrypted Password: " << encrypted << endl;
    // Decrypt the password
    string decrypted = xorEncryptDecrypt(encrypted, key);
    cout << "Decrypted Password: " << decrypted << endl;
return 0; }



//return key_user % Size: //Key: 905, in return, this function will spit out 5|
//}
