#include <iostream> // ввод-вывод
#include <vector> // вектора

using namespace std;

vector<int> combination; // разбиение числа 
int N; // разлогаемое число

void PrintCombination() { // вывод разбиения числа
    for (int i = 0; i < combination.size(); ++i) {
        if (i > 0) cout << " "; // если не первый элемент вектора, то ставим пробел
        cout << combination[i];
    }
    cout << "\n";
}

void Generate(int currentSum, int variableValue) { // рекурсивная генерация разбиений
    if (currentSum == N) { // база рекурсии - разбиение сформировано
        PrintCombination();  
        return;
    }

    for (int i = variableValue; i <= N - currentSum; ++i) { // перебор пока сумма <= N
        combination.push_back(i);
        Generate(currentSum + i, i); // шаг рекурсии
        combination.pop_back(); 
    }
}

int main() {
    freopen("input.txt", "r", stdin); // перенаправляем stdin на input.txt
    cin >> N; // считываем N из файла

    freopen("output.txt", "w", stdout); // перенаправляем stdout на output.txt
    Generate(0, 1); // генерация разбиений

    return 0;
}

// Сложность - O(2^N)
// При каждом вызове функции Generate() перебираем все варианты разбиения числа

// Алгоритм: рекурсия для генерации всех возможных разбиений числа N