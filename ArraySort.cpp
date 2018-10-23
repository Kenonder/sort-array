//============================================================================
// Name        : ArraySort.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main();
void sort_array(int to_sort[3]);
void sort_integers(int a, int b, int c);

int main() {
	int input_array[3]{0};
	std::cout<<"enter the numbers:";
    std::cin>>input_array[0]>>input_array[1]>>input_array[2];
    sort_array(input_array);
    std::cout<<"in sorted order";
    std::cout<<input_array[0]<<" "<<input_array[1]<<" "<<input_array[2];
	return 0;
}

void sort_array(int to_sort[3]){
	if(to_sort[0] > to_sort[1]){
		int tem = to_sort[0];
		to_sort[0]=to_sort[1];
		to_sort[1]=tem;
	}
	if(to_sort[1] > to_sort[2]){
			int tem = to_sort[1];
			to_sort[1]=to_sort[2];
			to_sort[2]=tem;
		}
	if(to_sort[0] > to_sort[1]){
			int tem = to_sort[0];
			to_sort[0]=to_sort[1];
			to_sort[1]=tem;
		}
}

void sort_integers(int a, int b, int c){
	if(a > b){
			int tem = a;
			a=b;
			a=tem;
		}
		if(b > c){
				int tem = b;
				b=c;
				c=tem;
			}
		if(a > b){
			     int tem = a;
			     a=b;
			     a=tem;
				}
}
