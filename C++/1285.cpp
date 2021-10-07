#include <iostream>

using namespace std;

int main(){
 
    char ch;
    int num;
    int sum = 0;
    cin >> num;
    sum = num;
    for(int i = 0;;i++){
        cin >> ch;
        
        if(ch == '+'){
            cin >> num;
            sum += num;
        }
        
        else if(ch == '-'){
            cin >> num;
            sum -= num;
		}
        else if(ch == '/'){
            cin >> num;
            sum /= num;
		}
        else if(ch == '*'){
            cin >> num;
            sum *= num;
		}
        else if(ch == '='){
            cout << sum;
            break;
        }
    }
}