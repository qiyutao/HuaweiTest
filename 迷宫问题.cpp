#include <iostream>
#include <cmath>

using namespace std;

class Point {
public:
    int x;
    int y;
};

int maze[20][20];

int a_star(int x,int y,Point point) {
    double power[4];
    for(int i=0;i<4;i++)
        power[i] = 10000;
    if(0<=point.y-1) {
        if(maze[point.y-1][point.x]==0)
        power[0] = sqrt(((x-1-point.x)*(x-1-point.x))+((y-1-point.y+1)*(y-1-point.y+1)));
    }
    if((y-1)>=point.y+1) {
        if(maze[point.y+1][point.x]==0)
        power[1] = sqrt(((x-1-point.x)*(x-1-point.x))+((y-1-point.y-1)*(y-1-point.y-1)));
    }
    if(0<=point.x-1) {
        if(maze[point.y][point.x-1]==0)
        power[2] = sqrt(((x-1-point.x+1)*(x-1-point.x+1))+((y-1-point.y)*(y-1-point.y)));
    }
    if((x-1)>=point.x+1) {
        if(maze[point.y][point.x+1]==0)
        power[3] = sqrt(((x-1-point.x-1)*(x-1-point.x-1))+((y-1-point.y)*(y-1-point.y)));
    }
    int min = 10000;
    int dict;
    for(int i=0;i<4;i++) {
        if(min>power[i]) {
            dict = i;
            min = power[i];
        }
    }

    return dict;
}

int main() {

    int y,x;
    cin>>y>>x;

    for(int i=0;i<y;i++)
        for(int j=0;j<x;j++)
            cin>>maze[i][j];
    Point point;
    point.x = 0;
    point.y = 0;

    while(point.x!=x-1||point.y!=y-1) {
        cout<<"("<<point.y<<","<<point.x<<")"<<endl;
        int dict = a_star(x,y,point);
        switch(dict) {
            case 0:
                point.y -= 1;

                break;
            case 1:
                point.y += 1;
                break;
            case 2:
                point.x -= 1;
                break;
            case 3:
                point.x += 1;
                break;
        }
        maze[point.y][point.x] = 1;

    }
    cout<<"("<<point.y<<","<<point.x<<")";

    return 0;
}
