/*
main.cpp

This is the main file that runs the card application

Authors:
Matthew D'Alonzo
Grace Milton
Roann Yanes 
*/

#include "cards.h"      //Card creation class
#include <iostream>     //Text input/output
using namespace std;    //std namespace

int main(int argc, char* argv[]){
  cout << "Welcome to the Card Program!" << endl;
  cout << "Are you ready to play Rummy?" << endl;
  int ready_to_play;
  cin >> ready_to_play;

  Cards my_cards;
  my_cards.drawCard();
  return 0;
}
