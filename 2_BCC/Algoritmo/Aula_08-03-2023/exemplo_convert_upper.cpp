#include <iostream>
using namespace std;
void convertStr(char *);
int main(){
    char str[]="fema $10,20";
    cout << "A string antes da conversao: " << str << endl;
    convertStr(str);
    cout << "A string depois da conversao: " << str << endl;
}
void convertStr(char *sptr){
    while(*sptr!='\0'){
        if (*sptr >= 'a' && *sptr <= 'z'){
            *sptr = toupper(*sptr);
            sptr++;
        }
    }
}