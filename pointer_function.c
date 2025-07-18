/*「5次元のベクトル（5個の要素を持つfloat型配列）u[], v[]の内積を求め印刷するプログラム」
ただし内積を求める計算はポインタを使用して行うものとする*/

#include<stdio.h>

float answerf(float a[5], float b[5]);

int main(void){
	float u[5];
	float v[5];
	for(int i=0; i<5; i++){
		scanf("%f",&u[i]);
	}
	for(int i=0; i<5; i++){
		scanf("%f",&v[i]);
	}

	printf("%f",answerf(u,v));

}
float answerf(float a[5], float b[5]){
	float answer=0;
	for(int i=0; i<5; i++){
		answer+=*a[i]**b[i];
	}
	return answer;
}


