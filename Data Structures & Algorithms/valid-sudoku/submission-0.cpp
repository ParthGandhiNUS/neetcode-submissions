class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Use a bool array which corresponds to the indexs
        bool out = true;
        vector <bool> verify(9);
        int dotCount = 0;
        // Check through the 9 rows
        for (int i = 0; i < 9; i++){
            verify.assign(9, false);
            dotCount = 0;
            for (int j = 0; j < 9; j++){
                if (board[i][j] == '.'){
                    dotCount++;
                } else {
                    int index = board[i][j] - '1';
                    if (verify[index]){
                        return false;
                    } else {
                        verify[index] = true;
                    }
                }
            }
        }
        // Check through the 9 columns
        for (int j = 0; j < 9; j++){
            verify.assign(9, false);
            dotCount = 0;
            for (int i = 0; i < 9; i++){
                if (board[i][j] == '.'){
                    dotCount++;
                } else {
                    int index = board[i][j] - '1';
                    if (verify[index]){
                        return false;
                    } else {
                        verify[index] = true;
                    }
                }
            }
        }
        // Check through the 9 subsquares
        int x = 0, y = 0;
        while (x < 3){
            while (y < 3){
                verify.assign(9, false);
                dotCount = 0;
                for (int i = 0; i < 3; i++){
                    for (int j = 0; j < 3; j++){
                        if (board[3*x+i][3*y+j] == '.'){
                            dotCount++;
                        } else {
                           int index = board[3*x+i][3*y+j] - '1';
                           if (verify[index]){
                            return false;
                           } else {
                            verify[index] = true;
                           }
                        }
                    }
                }
                y++;
            }
            x++;
        }
        return out;
    }
};
