#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string input;
	string re;
	string test1;
	string test2;
    cout << "Input text: ";
	cin >> input;
	re = func1(input);
    cout << "Reversed text: "<<	re <<"\n";
	test1=func3(input);
	test2=func3(re);
	if(test1==test2){
		cout << "Palindrome: Yes";
	}else{
		cout << "Palindrome: No";
	}

    return 0;
}
