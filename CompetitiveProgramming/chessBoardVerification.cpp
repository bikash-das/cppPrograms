#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int> >& chessboard){
    int size = chessboard.size();
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            cout << chessboard[i][j]<< " ";
        cout << "\n";
    
}
auto solve (vector<vector<int> >& chessboard){
    int n = chessboard.size();
    for(int i = 0; i < n; i++)
        for(int j = 1; j<n; j++)
            if(chessboard[i][j] == chessboard[i][j-1])
                return "No";
            
    for(int i = 0; i < n; i++)
            for(int j = 1; j < n; j++)
                if(chessboard[j][i] == chessboard[j-1][i])
                   return "No";
                
    return "Yes";
}
int main(){
    vector<vector<int> > chessboard;
    // considering 1 for black and 0 for white
    int n = 8;
    int val;
    for(int i = 0; i < n; i++){
        vector<int> values;
        for(int j = 0; j < n; j++){
            cin >> val;
            values.push_back(val);
        }
        chessboard.push_back(values);
        values.clear(); // don't forget to clear
    }
    cout << "\nChessboard values: \n";
    print(chessboard);
    cout << solve(chessboard) << "\n";
}
