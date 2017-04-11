#include <iostream>  
#include <windows.h>  
using namespace std;  
  
//定义低音  
const int A1 = 131;  
const int A2 = 147;  
const int A3 = 165;  
const int A4 = 175;  
const int A5 = 196;  
const int A6 = 220;  
const int A7 = 247;  
  
//定义中音  
const int B1 = 262;  
const int B2 = 296;  
const int B3 = 330;  
const int B4 = 349;  
const int B5 = 392;  
const int B6 = 440;  
const int B7 = 494;  
  
//定义高音  
const int C1 = 523;  
const int C2 = 587;  
const int C3 = 659;  
const int C4 = 698;  
const int C5 = 784;  
const int C6 = 880;  
const int C7 = 988;  
  
//定义高二度  
const int D1 = 1047;  
const int D2 = 1175;  
const int D3 = 1319;  
const int D4 = 1397;  
const int D5 = 1568;  
const int D6 = 1760;  
const int D7 = 1976;  
  
//定义节拍  
const int OneBeat = 300;  
const int HalfBeat = 150;  
  
void play();  
  
int main()  
{  
    cout<<"请欣赏--C++版成都"<<endl;
    play();
    return 0;  
}  
  
void play(){
	//前奏
	Beep(C5,OneBeat*3);Beep(C5,OneBeat);Beep(C3,OneBeat); Beep(C5,OneBeat);
	Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat*2);Beep(C2,OneBeat);
	Beep(C1,OneBeat);Beep(B5,HalfBeat);Beep(B6,HalfBeat);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat);
	Beep(C3,OneBeat*6);
	Beep(C5,OneBeat*3);Beep(C5,OneBeat); Beep(C3,OneBeat);Beep(C5,OneBeat);
	Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat*2);Beep(C2,OneBeat);
	Beep(C1,OneBeat);Beep(B5,HalfBeat);Beep(B6,HalfBeat);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C5,OneBeat);Beep(C2,OneBeat);	
	Beep(C1,OneBeat*3);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat);
	Beep(C1,OneBeat*3);Beep(B5,OneBeat*2);Beep(B5,OneBeat);
	
	//主旋律
	//(让)我掉下眼泪的 
	Beep(C1,OneBeat*3);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C3,HalfBeat);Beep(C3,OneBeat*3+HalfBeat);
	//不止昨夜的酒
	Beep(B6,OneBeat);Beep(C1,OneBeat*3);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(B6,OneBeat);Beep(B5,OneBeat*3);Beep(0,OneBeat*2);
	//让我依依不舍的 
	Beep(B5,OneBeat);Beep(C1,OneBeat*3);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C6,OneBeat);Beep(C3,HalfBeat);Beep(C5,OneBeat*3);
	//不止你的温柔 
	Beep(C3,HalfBeat);Beep(C2,HalfBeat);Beep(C1,OneBeat*2);Beep(C1,OneBeat);Beep(C2,OneBeat*2);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat*4);
	//余路还要走多久
	Beep(C3,OneBeat);Beep(C5,OneBeat*3);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat);Beep(D1,OneBeat);Beep(C6,OneBeat*3);
	//你攥着我的手
	Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(C1,OneBeat);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C3,OneBeat*3);Beep(0,OneBeat*2);
	//让我感到为难的
	Beep(C3,OneBeat);Beep(C5,OneBeat*3);Beep(0,OneBeat);Beep(C3,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(C1,OneBeat*3);
	//是挣扎的自由
	Beep(B6,OneBeat);Beep(C2,OneBeat*2);Beep(C1,OneBeat);Beep(C3,OneBeat*2);Beep(C2,HalfBeat);Beep(C1,HalfBeat);Beep(C1,OneBeat*6);Beep(0,OneBeat*3);Beep(0,OneBeat*2);
	//分别总是在九月
	Beep(B5,OneBeat);Beep(C1,OneBeat*3);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C3,OneBeat*3);
	//回忆是思念的愁
	Beep(B6,OneBeat);Beep(C1,OneBeat*2);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(B6,OneBeat);Beep(B5,OneBeat*3);Beep(0,OneBeat*2);
	//深秋嫩绿的垂柳
	Beep(B5,OneBeat);Beep(C1,OneBeat*3);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C6,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat*3);
	//亲吻着我额头
	Beep(C3,OneBeat);Beep(C1,OneBeat*2);Beep(C1,OneBeat);Beep(C2,OneBeat*2);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat*4);
	//在那座阴雨的小城里
	Beep(C3,OneBeat);Beep(C5,OneBeat*2);Beep(C5,OneBeat);Beep(C5,OneBeat); Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(D1,OneBeat);Beep(C6,OneBeat*2);
	//我从未忘记你
	Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(C1,OneBeat);Beep(C2,OneBeat*2);Beep(C5,HalfBeat);Beep(C3,HalfBeat);Beep(C3,OneBeat*3);Beep(0,OneBeat*2);
	//成都，带不走的
	Beep(C3,OneBeat);Beep(C5,OneBeat*3);Beep(0,OneBeat);Beep(0,OneBeat);Beep(C3,HalfBeat);Beep(C2,HalfBeat);Beep(B6,OneBeat);Beep(C1,OneBeat*2);
	//只有你
	Beep(C1,OneBeat*2);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat*8);Beep(0,OneBeat*2);
	//和我在成都的街头走一走
	Beep(C3,OneBeat);Beep(C5,OneBeat*2);Beep(C5,OneBeat);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(C1,OneBeat*2);
	//喔。。。喔。。。
	Beep(C1,OneBeat);Beep(C2,OneBeat*2);Beep(C5,OneBeat);Beep(C3,OneBeat*5);
	//直到所有的灯都熄灭了也不停留
	Beep(C3,OneBeat);Beep(C5,OneBeat*3);Beep(C5,OneBeat*3);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat*2);Beep(C2,HalfBeat);Beep(C1,HalfBeat);Beep(C1,OneBeat*2);Beep(B5,OneBeat);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat*4);
	//你会挽着我的衣袖
	Beep(B5,HalfBeat);Beep(B6,HalfBeat);Beep(C1,OneBeat*2);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C6,OneBeat);Beep(C3,OneBeat*5);
	//我会把手踹进裤兜
	Beep(C3,HalfBeat);Beep(C5,HalfBeat);Beep(C6,OneBeat*2);Beep(C5,OneBeat);Beep(C6,OneBeat);Beep(C5,OneBeat);Beep(C2,OneBeat);Beep(C3,OneBeat*5);
	//走到玉林路的尽头
	Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(0,OneBeat);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(B6,OneBeat);Beep(C2,OneBeat*2);Beep(C3,HalfBeat);Beep(C2,HalfBeat);Beep(C2,OneBeat*2);
	//坐在小酒馆的门口
	Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C3,OneBeat);Beep(C6,OneBeat);Beep(C5,OneBeat*11);
	//插曲
	Beep(C3,OneBeat);Beep(C5,OneBeat*5);Beep(0,OneBeat);Beep(C3,OneBeat*5);Beep(C2,HalfBeat);Beep(C3,HalfBeat);Beep(B6,OneBeat*3);Beep(B5,OneBeat*3);Beep(B3,OneBeat*3);Beep(0,OneBeat*3);
	Beep(C5,OneBeat*2);Beep(C5,OneBeat);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C6,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat);
	Beep(C1,OneBeat);Beep(B6,OneBeat+HalfBeat);Beep(C1,HalfBeat);Beep(C2,OneBeat);Beep(C3,OneBeat+HalfBeat);Beep(C2,HalfBeat);
	Beep(C1,OneBeat*4);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*3);Beep(C5,OneBeat*3);Beep(C3,OneBeat*4);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*3);Beep(C6,OneBeat);Beep(C5,OneBeat*2);Beep(C3,OneBeat*5);Beep(C1,OneBeat);Beep(C2,OneBeat*3);Beep(C2,OneBeat*2);Beep(C1,OneBeat);
	Beep(C2,OneBeat*3);Beep(B6,OneBeat*3);Beep(C1,OneBeat*4);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C6,OneBeat*2);Beep(C5,OneBeat*8);Beep(0,OneBeat);
	
	//重复
	//分别总是在九月
	Beep(B5,OneBeat);Beep(C1,OneBeat*3);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C3,OneBeat*3);
	//回忆是思念的愁
	Beep(B6,OneBeat);Beep(C1,OneBeat*2);Beep(C1,OneBeat);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(B6,OneBeat);Beep(B5,OneBeat*3);Beep(0,OneBeat*2);
	//深秋嫩绿的垂柳
	Beep(B5,OneBeat);Beep(C1,OneBeat*3);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C6,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat*3);
	//亲吻着我额头
	Beep(C3,OneBeat);Beep(C1,OneBeat*2);Beep(C1,OneBeat*2);Beep(C2,OneBeat*2);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat*4);
	//在那座阴雨的小城里
	Beep(C3,OneBeat);Beep(C5,OneBeat*2);Beep(C5,OneBeat);Beep(C5,OneBeat); Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(D1,OneBeat);Beep(C6,OneBeat*2);
	//我从未忘记你
	Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(C1,OneBeat);Beep(C2,OneBeat*2);Beep(C5,HalfBeat);Beep(C3,HalfBeat);Beep(C3,OneBeat*3);Beep(0,OneBeat*2);
	//成都，带不走的
	Beep(C3,OneBeat);Beep(C5,OneBeat*3);Beep(0,OneBeat);Beep(0,OneBeat);Beep(C3,HalfBeat);Beep(C2,HalfBeat);Beep(B6,OneBeat);Beep(C1,OneBeat*2);
	//只有你
	Beep(C1,OneBeat*2);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat*8);Beep(0,OneBeat*2);
	//和我在成都的街头走一走
	Beep(C3,OneBeat);Beep(C5,OneBeat*2);Beep(C5,OneBeat);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(C1,OneBeat*2);
	//喔。。。喔。。。
	Beep(C1,OneBeat);Beep(C2,OneBeat*2);Beep(C5,OneBeat);Beep(C3,OneBeat*5);
	//直到所有的灯都熄灭了也不停留
	Beep(C3,OneBeat);Beep(C5,OneBeat*3);Beep(C5,OneBeat*3);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat*2);Beep(C2,HalfBeat);Beep(C1,HalfBeat);Beep(C1,OneBeat*2);Beep(B5,OneBeat);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat*4);
	//你会挽着我的衣袖
	Beep(B5,HalfBeat);Beep(B6,HalfBeat);Beep(C1,OneBeat*2);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C6,OneBeat);Beep(C3,OneBeat*5);
	//我会把手踹进裤兜
	Beep(C3,HalfBeat);Beep(C5,HalfBeat);Beep(C6,OneBeat*2);Beep(C5,OneBeat);Beep(C6,OneBeat);Beep(C5,OneBeat);Beep(C2,OneBeat);Beep(C3,OneBeat*5);
	//走到玉林路的尽头
	Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(0,OneBeat);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(B6,OneBeat);Beep(C2,OneBeat*2);Beep(C3,HalfBeat);Beep(C2,HalfBeat);Beep(C2,OneBeat*2);
	//坐在小酒馆的门口
	Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C3,OneBeat);Beep(C6,OneBeat);Beep(C5,OneBeat*11);


	//和我在成都的街头走一走
	Beep(C3,OneBeat);Beep(C5,OneBeat*2);Beep(C5,OneBeat);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(C1,OneBeat*2);
	//喔。。。喔。。。
	Beep(C1,OneBeat);Beep(C2,OneBeat*2);Beep(C5,OneBeat);Beep(C3,OneBeat*5);
	//直到所有的灯都熄灭了也不停留
	Beep(C3,OneBeat);Beep(C5,OneBeat*3);Beep(C5,OneBeat*3);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat*2);Beep(C2,HalfBeat);Beep(C1,HalfBeat);Beep(C1,OneBeat*2);Beep(B5,OneBeat);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat*4);
	//你会挽着我的衣袖
	Beep(B5,HalfBeat);Beep(B6,HalfBeat);Beep(C1,OneBeat*2);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C6,OneBeat);Beep(C3,OneBeat*5);
	//我会把手踹进裤兜
	Beep(C3,HalfBeat);Beep(C5,HalfBeat);Beep(C6,OneBeat*2);Beep(C5,OneBeat);Beep(C6,OneBeat);Beep(C5,OneBeat);Beep(C2,OneBeat);Beep(C3,OneBeat*5);
	//走到玉林路的尽头
	Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(0,OneBeat);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(B6,OneBeat);Beep(C2,OneBeat*2);Beep(C3,HalfBeat);Beep(C2,HalfBeat);Beep(C2,OneBeat*2);
	//坐在小酒馆的门口
	Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C2,OneBeat);Beep(C3,OneBeat);Beep(C6,OneBeat);Beep(C5,OneBeat*11);	 

	//和我在成都的街头走一走
	Beep(C3,OneBeat);Beep(C5,OneBeat*2);Beep(C5,OneBeat);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(C1,OneBeat*2);
	//喔。。。喔。。。
	Beep(C1,OneBeat);Beep(C2,OneBeat*2);Beep(C5,OneBeat);Beep(C3,OneBeat*5);
	//直到所有的灯都熄灭了也不停留
	Beep(C3,OneBeat);Beep(C5,OneBeat*3);Beep(C5,OneBeat*3);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat*2);Beep(C2,HalfBeat);Beep(C1,HalfBeat);Beep(C1,OneBeat*2);Beep(B5,OneBeat);Beep(C2,OneBeat*2);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat*4);
	
	//结尾
	Beep(C5,OneBeat*3);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat);Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat*2);Beep(C2,OneBeat);
	Beep(C1,OneBeat);Beep(B5,HalfBeat);Beep(B6,HalfBeat);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C3,OneBeat);Beep(C2,OneBeat);Beep(C3,OneBeat*6);Beep(C5,OneBeat*3);Beep(C5,OneBeat);Beep(C3,OneBeat);Beep(C5,OneBeat);
	Beep(C6,OneBeat*2);Beep(C6,OneBeat);Beep(C3,OneBeat*2);Beep(C2,OneBeat);Beep(C1,OneBeat);Beep(B5,HalfBeat);Beep(B6,HalfBeat);Beep(C1,OneBeat);Beep(C2,OneBeat);Beep(C5,OneBeat);Beep(C2,OneBeat);Beep(C1,OneBeat*6);	
}
