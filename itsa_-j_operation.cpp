#include <iostream>
using namespace std;

int main(){
    int j_a,j_b,j_ta,j_tb,com;
    char operand;
    cin >> com;
    for(int ccom=1;ccom<=com;ccom++){
        cin >> operand >> j_a >> j_b >> j_ta >> j_tb;
            if(operand == '+'){
                cout << j_a + j_ta << " " << j_b + j_tb << endl;
            }else if(operand == '-'){
                cout << j_a - j_ta << " " << j_b - j_tb << endl;
            }else if(operand == '*'){
                cout << (j_a * j_ta - j_b * j_tb) << " " << (j_ta * j_b + j_a * j_tb) << endl;
            }
    }
}