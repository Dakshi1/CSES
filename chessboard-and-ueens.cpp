#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector <pair<int, int> > occupied_positions, int x, int y){
    int sz = occupied_positions.size();
    for(int i=0;i<sz;i++){
        if(occupied_positions[i].first == x || abs(occupied_positions[i].first - x) 
            == abs(occupied_positions[i].second - y)){
                return false;
            }
    }
    return true;
}
void find_possibilities(vector<vector<char> > &board, long &ans, int count, vector <pair<int, int> > &occupied_positions){
    if(count == 0)
        ans++;
    
    int column = count - 1;
    for(int row=0;row<8;row++){
        if(board[row][column] == '.' && isSafe(occupied_positions, row, column)){
            occupied_positions.push_back({row, column});
            count--;
            find_possibilities(board, ans, count, occupied_positions);
            count++;
            occupied_positions.pop_back();
        }
    }
}

int main()
{
    vector<vector<char> > board(8, vector<char> (8, '.'));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin >> board[i][j];
        }
    }
    vector <pair<int, int> > occupied_positions;
    long solution = 0;
    find_possibilities(board, solution, 8, occupied_positions);

    cout << solution << endl;

    return 0;
}