#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
int X = 3200;
int Y = 1525;
int dx = 1920;
int dy = 0;

int main(){
	HDC dng = GetDC(NULL);
	printf("The program is running\n");
	COLORREF pre = 0;
	while(true){
//		DrawIcon(dng,4015-dx,1620-dy,LoadIcon(NULL,IDI_QUESTION));
		COLORREF c = GetPixel(dng, X-dx, Y-dy);
		if(pre != c){
			pre = c;
			cout << pre << endl;
		}
		if(c == 2568516){
			cout << "Detected" << endl;
			SetCursorPos(848,652);
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);//模拟鼠标键按下
			Sleep(10);//要留给某些应用的反应时间 
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);//模拟鼠标键抬起
			SetCursorPos(848,600);
		}
		Sleep(1);
	}
}
