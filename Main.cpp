#include <iostream>

using namespace std;
int main(){
    int choice, n;
    int all = 1;
    bool loop = true;

    do{
        cout << "----------MENU----------" << endl;
        cout << "1. Right Triangle" << endl;
        cout << "2. Equilateral Triangle" << endl;
        cout << "0. Exit" << endl;
        cout << "------------------------" << endl;
        cout << "Choose: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the length:  ";
                cin >> n;
                cout << endl;
                do{
                    if(all == 1){
                        cout << endl;
                        cout << "Ascending Triangle (Left to Right):" << endl;
                            for(int i=1; i <= n; i++){
                                for(int j=1; j <= i; j++){
                                cout << "*";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        all = 2;
                    }else if(all == 2){
                            cout << "Descending Triangle (Left to Right):" << endl;
                            for(int i=n; i >=1; i--){
                                for(int j=1; j<=i; j++){
                                    cout << "*";
                                }
                            cout << endl;
                            }
                        cout << endl;
                        all = 3;
                    }else if(all == 3){
                        cout << "Ascending Triangle (Right to Left):" << endl;
                        for (int i=1; i<=n; i++) {
                            for (int j=1; j<=n-i; j++) {
                                cout << " ";
                            }
                            for (int k=1; k<=i; k++) {
                                cout << "*";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        all = 4;
                    }else if(all == 4){
                         cout << "Descending Triangle (Right to Left):" << endl;
                         for (int i=n; i>=1; i--) {
                            for (int j=1; j<=n-i; j++) {
                                cout << " ";
                            }
                            for (int k=1; k<=i; k++) {
                                cout << "*";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        all = 5;
                    }
                }while(all !=5);
                all = 1;
                break;

            case 2:
                cout << "Enter the length:  ";
                cin >> n;
                cout << endl;
                do{
                    if(all == 1){
                        cout << "Equilateral triangle:" << endl;
                        for(int i=1; i<=n; i++){
                            for(int j=n; j>i; j--){
                                cout << " ";
                            }
                            for(int k=1; k<=(2*i-1); k++){
                                cout << "*";
                            }
                            cout << endl;
                        }
                        cout << endl;
                        all = 2;
                    }else if(all == 2){
                        cout << "Inverted Equilateral Triangle:" << endl;
                            for (int i = n; i>=1; i--) {
                                for (int j=n; j>i; j--) {
                                    cout << " ";
                                }
                                for (int k=1; k<=(2*i-1); k++) {
                                    cout << "*";
                                }
                                cout << endl;
                            }
                            cout << endl;
                            all = 3;
                    }

                }while(all != 3);
                all = 1;
                break;

            case 0:
            loop = false;
            break;
        }
    }while(loop);
}
