#include <cstdlib>
#include <iostream> 
using namespace std;

int main(){
  cout<<"MAGIC 8-BALL"<<endl; 
  srand(time(NULL));
  int answer = rand() % 10;
 
  switch(answer){

    case 0:
    cout<<"It is certain"<<endl;
    break;

    case 1:
    cout<<"Just do it"<<endl;
    break;

    case 2:
    cout<<"Ask your mom"<<endl;
    break;

    case 3:
    cout<<"Are you stupid?"<<endl;
    break;

    case 4:
    cout<<"Buy a chimichanga"<<endl;
    break;

    case 5:
    cout<<"Your butathole is swolen"<<endl;
    break;

    case 6:
    cout<<"Go to the gym"<<endl;
    break;

    case 7:
    cout<<"C++ is funny"<<endl;
    break;

    case 8:
    cout<<"Tell your dad last night was fun"<<endl;
    break;

    case 9:
    cout<<"Why need an answer when the universe already had one"<<endl;
    break;
  }
}