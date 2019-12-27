#include <iostream>
#include <cstdlib>
using namespace std;

//Testing

void drawBoard();
void turn(int plyer);

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
bool gameover = false;
int player = 1;
int number;
char mark;

int main(){

    drawBoard();
    while (gameover == false){
        drawBoard();
        turn(player);
    }
    return 0;
}

void turn(int plyr){
    mark = (plyr%2)?'X':'O';
    cout << "\nPlayer " << plyr << " enter a number: ";
    cin >> number;

    if (number == 1 && square[1] == '1'){
        square[1] = mark;
    }else if (number == 2 && square[2] == '2'){
        square[2] = mark;
    }else if (number == 3 && square[3] == '3'){
        square[3] = mark;
    }else if (number == 4 && square[4] == '4'){
        square[4] = mark;
    }else if (number == 5 && square[5] == '5'){
        square[5] = mark;
    }else if (number == 6 && square[6] == '6'){
        square[6] = mark;
    }else if (number == 7 && square[7] == '7'){
        square[7] = mark;
    }else if (number == 8 && square[8] == '8'){
        square[8] = mark;
    }else if (number == 9 && square[9] == '9'){
        square[9] = mark;
    }else{
        cout << "\nPlease enter a valid number:";
    }

    player++;

}

void drawBoard(){
    system("cls");
    cout << "\n\n\t Tic-Tac-Toe" << endl;
    cout << "\n\n";

    cout << "\t" << "|" << "\t " << "|" << "\t" << endl;
    cout << "    " << square[1] << "   |" << "    " << square[2] << "   |" << "    " << square[3] << "  " << endl;
    cout << "________|________|________" << endl;

    cout << "\t" << "|" << "\t " << "|" << "\t" << endl;
    cout << "    " << square[4] << "   |" << "    " << square[5] << "   |" << "    " << square[6] << "  " << endl;
    cout << "________|________|________" << endl;

    cout << "\t" << "|" << "\t " << "|" << "\t" << endl;
    cout << "    " << square[7] << "   |" << "    " << square[8] << "   |" << "    " << square[9] << "  " << endl;
    cout << "        |        |        " << endl;
}

