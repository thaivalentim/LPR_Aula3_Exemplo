#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.utf8"); //Para usar acentuação
    cout << "\033[1;34m***************************************\033[0m\n";
    cout << "\033[1;32m*                                     *\033[0m\n";
    cout << "\033[1;32m*   \033[1;33m EBA! Clonei um repositório     \033[1;32m  *\033[0m\n";
    cout << "\033[1;32m*   \033[1;33m do Git pela 1a vez             \033[1;32m  *\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mValeu                             \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*   \033[1;36mProfessor J. Andery               \033[1;32m*\033[0m\n";
    cout << "\033[1;32m*                                     *\033[0m\n";
    cout << "\033[1;34m***************************************\033[0m\n";

    return 0;
}
