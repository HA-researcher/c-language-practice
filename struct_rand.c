/*構造体を用いて3次元空間上の点の名前 (AからZの英大文字)、および位置座標(x,y,z)で構成されるデータを26個作成。x, y, zの値は乱数を用いて生成。
それぞれの点についてx²+y²+z²の値を求め、この値が最も大きくなる点の名前を印刷するプログラム*/



#include<stdio.h>
#include<stdlib.h>

struct list{
	char alp;
	int x;
	int y;
	int z;
};

int main(void){
	long long ans=0;
	char answer;
	struct list pat[26];
	for(int i=0; i<26; i++){
		pat[i].alp='A'+i;
		pat[i].x=rand();
		pat[i].y=rand();
		pat[i].z=rand();

		if(ans<pat[i].x*pat[i].x+pat[i].y*pat[i].y+pat[i].z*pat[i].z){
			ans=pat[i].x*pat[i].x+pat[i].y*pat[i].y+pat[i].z*pat[i].z;
			answer=pat[i].alp;
		}
	}
	printf("%c",answer);
}