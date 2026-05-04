#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

bool gameOver;
const int height=20;
const int width=20;
int x,y,fx,fy,score; //fx=fruitx,fy=Fruity
int tx[100],ty[100],ntail;  //tx=tailx,,ty=taily,nt=ntail;
enum edirection{STOP=0,UP,DOWN,LEFT,RIGHT};
edirection dir;


void Setup(){
    gameOver=false;
    dir=STOP;
    x=width/2;
    y=height/2;
    fx=rand()%width;;
    fy=rand()%height;
}

void Draw(){

    system("CLS");

    for(int i=0;i<width;i++){
        cout<<"#";
    }cout<<endl;
    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            if(j==0 || j==width-1){
                cout<<"#";
            }else if(i==y && j==x) {
                cout<<"O";
            }else if (i==fy && j==fx){
                cout<<"F";
            }else{
                bool print = false;
                for (int k=0;k<ntail;k++){
                    if(i==ty[k] && j==tx[k]){
                        cout<<"o";
                        print=true;
                    }
                }if(!print){
                    cout<<" ";
                }
            }
        }cout<<endl;
    }
    for(int i=0;i<width;i++){
        cout<<"#";
    }cout<<endl;
    cout<<endl;
    cout<<"Total Score :"<<score<<endl;
}

void Input(){
    if (_kbhit()){
        switch(_getch()){
        case 'w':
            dir=UP;
            break;
        case 'a':
            dir=LEFT;
            break;
        case 's':
            dir=DOWN;
            break;
        case 'd':
            dir=RIGHT;
            break;
        default:
            break;
        }
    }
}

void Logic(){
    int prevx=tx[0];
    int prevy=ty[0];
    tx[0]=x;
    ty[0]=y;
    int prev2x,prev2y;
    for(int i=1;i<ntail;i++){
        prev2x=tx[i];
        prev2y=ty[i];
        tx[i]=prevx;
        ty[i]=prevy;
        prevx=prev2x;
        prevy=prev2y;

    }

    switch(dir){
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;

    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    default:
        break;
    }
    if(x<0 || x>width || y<0 || y>height){
        gameOver=true;;
    }
    for (int i=0;i<ntail;i++){
        if (x==tx[i] && y==ty[i]){
            gameOver=true;
        }
    }

    if (x==fx && y==fy){
        score=score+10;
        fx=rand()%width;;
        fy=rand()%height;
        ntail++;
    }
}

int main()
{
    Setup();
    while(!gameOver){
        Draw();
        Input();
        Logic();
        Sleep(400);
    }
    _getch();
    return 0;
}




