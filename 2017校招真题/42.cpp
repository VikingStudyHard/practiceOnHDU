/*
游戏任务标记

题目描述
游戏里面有很多各式各样的任务，其中有一种任务玩家只能做一次，这类任务一共有1024个，任务ID范围[1,1024]。请用32个unsigned int类型来记录着1024个任务是否已经完成。初始状态都是未完成。 输入两个参数，都是任务ID，需要设置第一个ID的任务为已经完成；并检查第二个ID的任务是否已经完成。 输出一个参数，如果第二个ID的任务已经完成输出1，如果未完成输出0。如果第一或第二个ID不在[1,1024]范围，则输出-1。

输入描述:
输入包括一行,两个整数表示人物ID.

输出描述:
输出是否完成
*/

//1024种任务有2^1024种可能，需要1024个bit，就是1024/8=128byte。
//一个int是4byte，刚好需要32个int。
//就是说，把32个int排成一行，就是1024个bit，每个bit来表示某个任务是否完成。
//0123456789		 3233
//100000000000000000 000000000000000000000000000000000000
//group 0                  1
//
#include <iostream>
using namespace std;
int main(){
	unsigned int arr[32]={0};
	int a,b;
	while(~scanf("%d %d",&a,&b)){
		if(a<1||a>1024||b<1||b>1024){
			cout<<"-1"<<endl;
		}else{
			a = a - 1;
			b = b - 1;
			int a_group = a / 32;
			int a_state = a % 32;
			arr[a_group] |= 1<<a_state;

			int b_group = b / 32;
			int b_state = b % 32;

			if(arr[b_group] & 1<<b_state){
				cout<<"1"<<endl;
			}else{
				cout<<"0"<<endl;
			}
		}
		
	}
	return 0;

}