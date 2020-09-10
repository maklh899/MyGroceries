#include<iostream>
#include<vector>
using namespace std;

int main()
{
  char input;
  vector <string> list;

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if( input == 'a' || input == 'A' )
    {
        string item;
        cout<<"What item? ";
        cin.ignore();
        getline(cin,item);
        list.push_back(item);
    }
  }while( input != 'q' && input != 'Q' );
    
  if (list.empty())
  {
    cout<< "there are no items on the list.\n";
  }
  else
  {
    for(int i=0; i<(unsigned)list.size(); i++)
    {
      int x = i+1;
      cout<<x << ". "<< list[i] << endl;
    }  
  }
  
  return 0;
}
