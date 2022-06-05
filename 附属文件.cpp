#includecstdio
#includewindows.h
using namespace std;
int main(){
	printf("欢迎使用蓝天刷屏机,请把要刷屏的内容复制好");
	Sleep(1000);
	system(cls);
	int n,bt;
	printf("请输入刷屏次数：");
	scanf(%d,&n);
	printf("请输入刷屏间隔（ms）：");
	scanf(%d,&bt);
	printf("请点击要刷屏的窗口.....");
	while(1){
		if(GetAsyncKeyState(VK_LBUTTON)&0x8000) break;
	}
	for(int i=1;i=n;i++){
		keybd_event(17,0,0,0);
		keybd_event(86,0,0,0);
		keybd_event(17,0,0x2,0);
		Sleep(bt);
		keybd_event(13,0,0,0);
	}
	return 0;
} 
printf ("运行已完成")
exit 
