#include <iostream>
#include <string.h>
#include <windows.h>

class pgame{
  private:
    string name;
    char gender;
  public:
    void set_name(const string &name){
      this-> name = name;
    }
    string get_name(){
      return name;
    }
};
int main(){
  return 0;
}
