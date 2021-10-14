#include <iostream>//заголовочный файл ввода-вывода
#include <cstdlib> //заголовочный файл system pause
#include <cstring>
using namespace std;//стандартное пространство имен
class ModelWindow{
public:
    int width,height;//размеры
    int x0,y0;// координаты левого верхнего угла
    char*zagolovok;
    char*color;//цвет
    bool visible;//видимое?
    bool ramka;
    void move(int x,int y){
        x0=x;
        y0=y;
    }
    void resize(int x,int y){
        height=y;
        width=x;
    }
    void setColor(char*co){
        color=new char[256];
        strcpy(color,co);
    }
    void switchVisible(){
        visible=!visible;
    }
    void print(){
        cout<<"окно: "<<zagolovok<<endl;
        cout<<"координаты левого верхнего угла: "<<x0<<";"<<y0<<endl;
        cout<<"высота: "<<height<<", ширина: "<<width<<endl;
        cout<<"цвет: "<<color<<endl;
        cout<<"рамка: "<<ramka<<endl;
        cout<<"видимое: "<<visible<<endl;
    }
    ModelWindow(){
        width=100;height=100;
        y0=0;x0=0;
        zagolovok=new char[256];
        strcpy(zagolovok,"new_window");
        color=new char[256];
        strcpy(color, "white");
        
        visible=true;
        ramka=true;
    }
};
int main(){//точка входа программы
    setlocale(LC_ALL,"Russian");//русская локализация
    ModelWindow w;
    w.print();
    return 0;
}
