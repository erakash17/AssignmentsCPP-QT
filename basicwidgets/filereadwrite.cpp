
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream file;
  file.open ("/home/renu/Autobot_in/DemoCharts/read.txt");
  file << "Hello This is Akash.\n";
  file.close();
  return 0;
}
