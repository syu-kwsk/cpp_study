#include<iostream>
using namespace std;

class contact{
  //contactの非公開メンバ
  string name;
  string address;
public:
  //contactの公開関数
  void store();
  void display();
};

  
int main(){
  contact person;
  person.store();
  person.display();
  
  return 0;
}

void contact::store(){
  cout << "name:";
  cin >> name;
  cout << "address:";
  cin >> address;
}
void contact::display(){
  cout << name << " lives " << address << "\n";
}
