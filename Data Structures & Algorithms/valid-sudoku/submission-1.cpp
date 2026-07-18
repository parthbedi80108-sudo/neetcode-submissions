class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            vector<int>row_check(9,0);
            for(int j=0;j<9;j++){
                if(board[i][j]!='.')row_check[(board[i][j]-'0')-1]++;
            }
            for(int k=0;k<9;k++)if(row_check[k]>1)return false;
        }
        for(int i=0;i<9;i++){
            vector<int>col_check(9,0);
            for(int j=0;j<9;j++){
                if(board[j][i]!='.')col_check[(board[j][i]-'0')-1]++;
            }
            for(int k=0;k<9;k++)if(col_check[k]>1)return false;
        }
        vector<int>box_check1(9,0);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.')box_check1[(board[i][j]-'0')-1]++;
            }
        }
        for(int i=0;i<9;i++)if(box_check1[i]>1)return false;
        vector<int>box_check2(9,0);
        for(int i=3;i<6;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.')box_check2[(board[i][j]-'0')-1]++;
            }
        }
        for(int i=0;i<9;i++)if(box_check2[i]>1)return false;
        vector<int>box_check3(9,0);
        for(int i=6;i<9;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]!='.')box_check3[(board[i][j]-'0')-1]++;
            }
        }
        for(int i=0;i<9;i++)if(box_check3[i]>1)return false;
        vector<int>box_check4(9,0);
        for(int i=0;i<3;i++){
            for(int j=3;j<6;j++){
                if(board[i][j]!='.')box_check4[(board[i][j]-'0')-1]++;
            }
        }
        for(int i=0;i<9;i++)if(box_check4[i]>1)return false;
        vector<int>box_check5(9,0);
        for(int i=3;i<6;i++){
            for(int j=3;j<6;j++){
                if(board[i][j]!='.')box_check5[(board[i][j]-'0')-1]++;
            }
        }
        for(int i=0;i<9;i++)if(box_check5[i]>1)return false;
        vector<int>box_check6(9,0);
        for(int i=6;i<9;i++){
            for(int j=3;j<6;j++){
                if(board[i][j]!='.')box_check6[(board[i][j]-'0')-1]++;
            }
        }
        for(int i=0;i<9;i++)if(box_check6[i]>1)return false;
        vector<int>box_check7(9,0);
        for(int i=0;i<3;i++){
            for(int j=6;j<9;j++){
                if(board[i][j]!='.')box_check7[(board[i][j]-'0')-1]++;
            }
        }
        for(int i=0;i<9;i++)if(box_check7[i]>1)return false;
        vector<int>box_check8(9,0);
        for(int i=3;i<6;i++){
            for(int j=6;j<9;j++){
                if(board[i][j]!='.')box_check8[(board[i][j]-'0')-1]++;
            }
        }
        for(int i=0;i<9;i++)if(box_check8[i]>1)return false;
        vector<int>box_check9(9,0);
        for(int i=6;i<9;i++){
            for(int j=6;j<9;j++){
                if(board[i][j]!='.')box_check9[(board[i][j]-'0')-1]++;
            }
        }
        for(int i=0;i<9;i++)if(box_check9[i]>1)return false;
        return true;
    }
};
