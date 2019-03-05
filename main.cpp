#include <iostream>
using namespace std;

int main(){

	int i;
	//首先检查数字是否可被15整除
	for (i=1; i<101; i++){
		if (i % 15 == 0){
			cout << "\nFizzBuzz";
		}
		//其次检查数字是否可被5整除
		else{
			if (i % 5 == 0){
				cout << "\nBuzz";
			}
			//其三检查数字是否可被3整除
			else{
				if (i % 3 == 0){
					cout << "\nFizz";
				}
				//最后打印输出该数字
				else{
					cout << "\n" << i;
				}
			}
		}
	}
}
