#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
        int shift = atoi(argv[1])%26;
        string mystring;
        cout<<"Input message: ";
        getline(cin, mystring);      
        string crypted="";
        for(char c : mystring){
		c=toupper(c);
            if(c>='A'&&c<='Z'){

                if(c+shift>90){
                        c-=(26-shift);
                } else{
                        c+=shift;
                }
                crypted+=c;
            }else{
                crypted+=" ";
            }
          
           
        }
        cout<<crypted;

}
