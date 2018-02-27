#include <iostream>
#include <string.h>
using namespace std;

/*~~~~~ Declaring functions ~~~~~~ */
void encode();
void decode();


void choices()
  {
    int select;
    string option[] = {"1. Encode","2. Decode","3. Exit" };
    cout<<option[0]<<endl<<option[1]<<endl<<option[2]<<endl<<"Please Select an option"<<endl;
    cin>>select;
    cin.ignore();
    if(select == 1) encode();
    if(select == 2) decode();
  }

int main()
  {
    choices();
  }

void encode()
  {
    string msg;
    int key = 13;
    cout<<"Please Enter the text to encode: ";
    getline(cin,msg);

    for(int i = 0; i < msg.size(); i++)
      {
        if(msg[i] >= char(65) && msg[i] <= char(90) || msg[i] >= char(97) && msg[i] <= char(122))
        cout << char(msg[i] + key);
        else
          cout <<msg[i];
      }
  return;
  }

void decode()
  {
    string msg;
    int key = 13;
    cout<<"Please Enter your Encrypted Message: ";
    getline(cin, msg);
    for(int i = 0; i < msg.size(); i++)
      {
        if(msg[i] > char(64) && msg[i] < char(93) || msg[i] > char(96) && msg[i] < char(123))
        cout << char(msg[i] - key);
        else
          cout<<msg[i];
      }
  }
