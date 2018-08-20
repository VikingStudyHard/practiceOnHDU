/*
末尾0的个数

题目描述
输入一个正整数n,求n!(即阶乘)末尾有多少个0？ 比如: n = 10; n! = 3628800,所以答案为2

输入描述:
输入为一行，n(1 ≤ n ≤ 1000)

输出描述:
输出一个整数,即题目所求


在计算n的阶乘时，实际上就是把所有小于等于n的正整数分解成质因数，然后再将其乘到一起，那么末尾0的个数实际上就是2*5的个数，而2的个数明显是很多很多的，所以问题就转化成了5的个数。
*/

#include<iostream>
using namespace std;
int main(){
	long long n;
	scanf("%lld",&n);
	int counter;
	while (n/=5)
    {
        counter += n;
    }
    cout << counter<<endl;
	return 0;
}