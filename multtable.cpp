#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv){
    int y1 = 2;
    int x1 = 2;
    int y2 = 5;
    int x2 = 7;
    int y3 = 9;
    int x3 = 10;
    int y4 = 20;
    int x4 = 20;

    int** table1 = new int*[y1];
    int** table2 = new int*[y2];
    int** table3 = new int*[y3];
    int** table4 = new int*[y4];

    for(int i = 0; i < y1; i++){
        table1[i] = new int[x1];
    }

    for(int i = 0; i < y2; i++){
        table2[i] = new int[x2];
    }

    for(int i = 0; i < y3; i++){
        table3[i] = new int[x3];
    }

    for(int i = 0; i < y4; i++){
        table4[i] = new int[x4];
    }


    for(int i = 0; i < y1; i++){
        for(int j = 0; j < x1; j++){
            table1[i][j] = (i+1)*(j+1);
        }
    }

    for(int i = 0; i < y2; i++){
        for(int j = 0; j < x2; j++){
            table2[i][j] = (i+1)*(j+1);
        }
    }

    for(int i = 0; i < y3; i++){
        for(int j = 0; j < x3; j++){
            table3[i][j] = (i+1)*(j+1);
        }
    }

    for(int i = 0; i < y4; i++){
        for(int j = 0; j < x4; j++){
            table4[i][j] = (i+1)*(j+1);
        }
    }


    for(int i = 0; i < y1; i++){
        for(int j = 0; j < x1; j++){
            cout << setw(5) << table1[i][j] << " ";
        }

        cout << endl;
    }

    cout << "\n\n\n";

    for(int i = 0; i < y2; i++){
        for(int j = 0; j < x2; j++){
            cout << setw(5) << table2[i][j] << " ";
        }

        cout << endl;
    }

    cout << "\n\n\n";

    for(int i = 0; i < y3; i++){
        for(int j = 0; j < x3; j++){
            cout << setw(5) << table3[i][j] << " ";
        }

        cout << endl;
    }

    cout << "\n\n\n";

    for(int i = 0; i < y4; i++){
        for(int j = 0; j < x4; j++){
            cout << setw(5) << table4[i][j] << " ";
        }

        cout << endl;
    }

    cout << "\n\n\n";

    for(int i = 0; i < y1; i++){
        delete[] table1[i];
    }

    for(int i = 0; i < y2; i++){
        delete[] table2[i];
    }

    for(int i = 0; i < y3; i++){
        delete[] table3[i];
    }

    for(int i = 0; i < y4; i++){
        delete[] table4[i];
    }

    delete[] table1;
    delete[] table2;
    delete[] table3;
    delete[] table4;
}