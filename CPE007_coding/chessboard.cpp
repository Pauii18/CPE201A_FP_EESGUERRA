#include <iostream>

int main () {
	char board[8][8];
	
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            board[i][j] = ' ';
        }
    }

    
    for (int j = 0; j < 8; ++j) {
        board[1][j] = 'P'; 
        board[6][j] = 'P'; 
    }

   
    board[0][0] = 'R';
    board[0][7] = 'R';
    board[7][0] = 'R';
    board[7][7] = 'R';

    
    board[0][1] = 'N';
    board[0][6] = 'N';
    board[7][1] = 'N';
    board[7][6] = 'N';

    
    board[0][2] = 'B';
    board[0][5] = 'B';
    board[7][2] = 'B';
    board[7][5] = 'B';

    
    board[0][3] = 'Q';
    board[7][3] = 'Q';

    
    board[0][4] = 'K';
    board[7][4] = 'K';

	for (int i = 7; i >= 0; --i){
		for (int j = 0; j < 8; ++j) {
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}    
	
	return 0;
    
}





