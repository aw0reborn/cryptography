#include <iostream>
#include <string.h>
using namespace std;

/*~~~~~ Declaring functions ~~~~~~ */
void encode();
void decode();


void choices() //Prompts Options to the user
  {
    int select;
    string option[] = {"1. Encode","2. Decode","3. Exit" };
    cout<<option[0]<<endl<<option[1]<<endl<<option[2]<<endl<<"Please Select an option: ";
    cin>>select;
    cin.ignore();
    if(select == 1) encode();
    if(select == 2) decode();
  }

int main()  // My Main function
  {
    choices();
