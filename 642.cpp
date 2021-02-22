#include <iostream>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

ifstream in("dane_obrazki.txt");//otwarcie pliku 
bool isRecurent() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (tab[i][j] != tab[i][j + 10] || tab[i][j] != tab[i + 10][j] || 
          tab[i][j] != tab[i+10][j+10]) {
        return false;
      }
    }
  }
  return true;
}

void obrazek() {
  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 20; j++) {
      cout << tab[i][j];
    }
    cout << endl;
  }
  cout << endl;
  file.close();//zamknięcie pliku
}

int main(int argc, char** argv) {
int recurentCounter = 0;
bool recurentFlag = true;
obrazek();
recurentFlag = false;
cout << recurentCounter
return 0;//koniec
}
