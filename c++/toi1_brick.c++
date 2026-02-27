#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<char>> matrix(rows, vector<char>(cols));

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < cols; i++){
        int x;
        cin >> x;

        int startRow = rows - 1;
        for(int j = 0; j < rows; j++){
            if(matrix[j][i] == 'O'){
                startRow = j - 1;
                break;
            }
        }

        for(int k = 0; k < x && startRow - k >= 0; k++){
            matrix[startRow - k][i] = '#';
        }
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}

// toi1_