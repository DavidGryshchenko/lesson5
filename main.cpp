#include <iostream>
using namespace std;
#include <conio.h>
#include "lib_lesson05.hpp"


int menu();
int main()
{
    setlocale(LC_ALL, "Russian");
    while(true){
    int answer=menu();
    switch (answer)
    {
        case 0: square()
        ;break;
        case 1: isoscelesTriangle();
        break;
        case 2: rightTriangle();
        break;
        case 3: rhombus();
        return 0;
    }
        system("pause");
        if(answer==4) break;
    }
    return 0;
}
 
int menu() {
        int key=0;
        int code;
        do {
                system("cls");
                key=(key+4)%4;
                if (key==0) cout<<"-> намалювати прямокутник"<<endl;
                        else  cout<<"  намалювати прямокутник "<<endl;
                if (key==1) cout<<"-> намалювати прямокутний трикутник"<<endl;
                        else  cout<<" намалювати прямокутний трикутник "<<endl;
                if (key==2) cout<<"-> намалювати правильний трикутник"<<endl;
                        else  cout<<" намалювати правильний трикутник"<<endl;
                if (key==3) cout<<"-> намалювати ромб"<<endl;
                        else  cout<<"   намалювати ромб"<<endl;
                if (key==4) cout<<"-> вийти"<<endl;
                    else  cout<<"  вийти "<<endl;
            
                code=_getch();
                if (code==224)
                {
                    code=_getch();
                    if (code==80) key++;
                    if (code==72) key--;
                        }
           }while(code!=13);
        system("cls");
        return key;
}
