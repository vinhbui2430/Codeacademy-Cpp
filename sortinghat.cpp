#include <iostream>
using namespace std; 
int main() {
    string house; 
    int max = 0;
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;
  
  // The magic starts here

    int answer1, answer2, answer3, answer4; 
    cout << "The Sorting Hat Quiz!\n"; 
    cout << "Q1) When I'm dead, I want people to remember me as:\n \n";
    cout << "1) The Good" << endl;
    cout << "2) The Great" << endl;
    cout << "3) The Wise" << endl;
    cout << "4) The Bold" << endl;

    cin >> answer1;
    switch (answer1)
    {
    case 1:
        hufflepuff++;
        break;
    case 2:
        slytherin++;
        break;
    case 3:
        ravenclaw++;
        break;
    case 4:
        gryffindor++;
        break;
    default:
        cout << "Invalid input.\n";
        break;
    }

    cout << "Q2) Dawn or Dusk? \n \n";
    cout << "1) Dawn" << endl;
    cout << "2) Dusk" << endl;
        cin >> answer2;
    switch(answer2) {
        case 1:
            gryffindor++;
            ravenclaw++;
            break;
        case 2:
            hufflepuff++;
            slytherin++;
            break;
        default:
            cout << "Invalid input.\n";
            break;
    }

    cout << "Q3) Which kind of instrument most pleases your ear? \n \n";
    cout << "1) The violin" << endl;
    cout << "2) The trumpet" << endl;
    cout << "3) The piano" << endl;
    cout << "4) The drum" << endl;
    cin >> answer3;
    switch(answer3) {
        case 1:
            slytherin++;
            break;
        case 2:
            hufflepuff++;
            break;
        case 3:
            ravenclaw++;
            break;
        case 4:
            gryffindor++;
            break;
        default:
            cout << "Invalid input.\n";
            break;
    }

    cout<<"Q4) Which road tempts you most? \n \n";
    cout<<"1) The wide, sunny grassy lane" << endl;
    cout<<"2) The narrow, dark, lantern-lit alley" << endl;
    cout<<"3) The twisting, leaf-strewn path through woods" << endl;
    cout<<"4) The cobbled street lined (ancient buildings)" << endl;
    cin >> answer4;
    switch(answer4) {
        case 1:
            hufflepuff++;
            break;
        case 2:
            slytherin++;
            break;
        case 3:
            gryffindor++;
            break;
        case 4:
            ravenclaw++;
            break;
        default:
            cout << "Invalid input.\n";
            break;
    }

    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }

    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }

    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    }

    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    }

    cout << house << "!\n";

}