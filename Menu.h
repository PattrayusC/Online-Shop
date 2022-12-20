#include "bubble.h"

double Menu(double x){
  double N;
  int phone_num;
 
  string name;
  cout<<"                                "<<endl;
  cout<<"- - - - - - - - - - - - - -"<<endl;
  cout<<"    THE SHOPPING ONLINE "<<endl;
  cout<<"- - - - - - - - - - - - - -"<<endl;
  cout<<" SELECT ROLE"<<endl;
  cout<<"1. BUYER"<<endl;
  cout<<"2. SELLER"<<endl;
  cout<<"3. EXIT"<<endl;
  cout<<"                                "<<endl;
  cin>>N;
  while(N<0||N>3){
    cout<<"CHOOSE ONLY 1 2 3"<<endl;
    cin>>N;
  }
  if(N==3){
    cout<<"EXIT PROGRAM"<<endl;
    exit(0);
  }
  if(x!=N){
    cout<<"Profile"<<endl;
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Phone number"<<endl;
    cin>>phone_num;
    
  }
  return N;
}

int choice_seller(){
  int N;
  cout<<"1.ADD 2.REMOVE"<<endl;
  cin>>N;
  return N;
}
