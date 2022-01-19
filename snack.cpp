#include <iostream>
using namespace std;
bool gameover;
const int width = 20;
const int hegth = 20;
int x, y, fruitsx, fruitsy, score;
enum eDirection
{
    STOP = 0, LEFT,RIGTH,UP,DOWN
};

eDirection dir;

void setup()
{
  gameover = false;
  dir=STOP;
  x=width/2;
  y=width/2;
  fruitsx=rand() % width;
  fruitsy=rand() % hegth;
  score=0;


}
void draw()
{
system("cls");
for(int i=0;i<width;i++){
    cout<<"#"<<endl;
}

for(int i=0;i<hegth;i++){
    for(int j=0;j<width;j++){
        if(j==0){
            cout<<"#";
        }
        else cout<<" ";

        if(j==width-1){
            cout<<"#";
        }
    }
    
}

for(int i=0;i<width;i++){
    cout<<"#"<<endl;
}

}
void inputs()
{
}
void logic(){

}

int main()
{


return 0;

}
