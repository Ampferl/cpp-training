#include <iostream>
#include <algorithm>
#include <string>

std::string doubleSwap(std::string text, char c1, char c2){
	char tempChar = '~';

	std::replace(text.begin(), text.end(), c1, tempChar);
	std::replace(text.begin(), text.end(), c2, c1);
	std::replace(text.begin(), text.end(), tempChar, c2);

	return text;
}

int main(){
	std::cout << doubleSwap("aabbccc", 'a', 'b');
	return 0;
}
