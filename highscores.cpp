#include <fstream>      // std::fstream
#include <iostream>
#include <sstream>
using namespace std;

int main () {
  ifstream ifs;
  ifs.open ("highscore.txt", ios::in);

  string name;
  int score; 
  
  while (true)
  {
    ifs >> name >> score;
    if (ifs.eof()) break;
    cout << name << endl;
    cout << score << endl;
  }
  ifs.close();
  
  ofstream ofs;
  int point = 100000;
  ofs.open ("highscore.txt", ios::trunc );
  ofs << "newplayer " << point << endl; 
  ofs.close();
  system("pause");
  return 0;
}
