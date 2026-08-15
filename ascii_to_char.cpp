#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("title ASCII to Character Converter");
    int ascii_value;
    while (1) {
        cout << "Enter an ascii value (0-127, input -1 to exit): ";
        // 捕获非数字输入
        if (!(cin >> ascii_value)) {
            cin.clear();
            cin.ignore(1024, '\n');
            cout << "Invalid ascii value. Please enter a value between 0 and 127." << endl;
            continue;
        }
        // 输入-1结束程序
        if (ascii_value == -1) {
            break;
        }
        // 范围校验
        if (ascii_value < 0 || ascii_value > 127) {
            cout << "Invalid ascii value. Please enter a value between 0 and 127." << endl;
            continue;
        }
        // 转换输出（和你原始代码完全一致）
        char c = static_cast<char>(ascii_value);
        cout << "The character for ascii value " << ascii_value << " is: " << c << endl;
    }
    return 0;
}