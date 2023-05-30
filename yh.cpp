#include <iostream>

int main() {
    const int n = 10; 
    int triangle[n][n]; 

    
    for (int i = 0; i < n; i++) {
        triangle[i][0] = 1;
        triangle[i][i] = 1;
    }

   
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << triangle[i][j] << " ";
        }
        std::cout << std::endl;
    }

    system("pause");
    return 0;
}
