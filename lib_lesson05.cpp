
#include <iostream>
using namespace std;
#include <conio.h>
#include <curses.h>
#define getch() wgetch(stdscr)
#include "lib_lesson05.hpp"



void square()
{
    int j,n,m,k;
     j = 8;
    n=j;
    m=j;
    k=j;
    while(j>0){
        cout << "*";
        j--;
    }
    j=n;
    cout<<endl;
    while(n-2>0){
     m=k;
        cout << "*";
    while(m-2>0){cout<<" ";m--;};
        cout<<"*\n";
        n--;
    }
    m=j;
    while(m>0){
        cout << "*";
        m--;
    }
    
    system("pause");
}




void isoscelesTriangle(){
    int h;
    h = 8;
    int l=h*2-1;
    for(int i=1;i<=l;i+=2){
        for(int j=0;j<(l-i)/2;j++)
          cout<<" ";
        for(int j=0;j<i;j++)
          cout<<"*";
        cout<<endl;
    }
}




void rightTriangle()
{
    int h;
    h=8;
    for (int i = 0; i < h; i++) {
        cout << '*';
        for (int j = 0; j < i; j++) {
            cout << "**";
        }
        cout << endl;
    }
}




int rhombus()
{
    int i, j, N = 8;
    int center = N / 2;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i <= center)
            {
                // Верхняя половина ромба
                if (j >= center - i && j <= center + i)
                    cout << "*";
                else
                    cout << " ";
            }
            else
            {
                // Нижняя половина ромба
                if (j >= center + i - N + 1 && j <= center - i + N - 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
    system("PAUSE");
    return 0;
}
