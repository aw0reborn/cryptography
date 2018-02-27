#include <iostream>
#include <string>
using namespace std;

/*~~~~~ Declaring functions ~~~~~~ */
void encode();
//void decode();


void choices()
  {
    int select;
    string option[] = {"1. Encode","2. Decode","3. Exit" };
    cout<<option[0]<<endl<<option[1]<<endl<<option[2]<<endl<<"Please Select an option"<<endl;
    cin>>select;
    if(select == 1) encode();
  //  if(select == 2) decode();
  }

int main()
  {
    choices();
  }

void encode()
  {
    string msg;
    cout<<"Please Enter the text to encode: ";
    cin>>msg;
    for(int i = 0; i < sizeof(msg); i++)
      {
	cout<<msg[i]<<endl;
      }
  }
