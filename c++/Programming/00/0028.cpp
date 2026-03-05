#include<bits/stdc++.h>
using namespace std;

struct Team{
    string name;
    int score;
    int shoot;
    int receive;
};

int main(){
    vector<Team> teams(4);
    int match[4][4];
    for(int i = 0; i < 4; i++){
        cin >> teams[i].name;
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> match[i][j];
            teams[i].shoot += match[i][j];
            teams[j].receive += match[i][j];
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(match[i][j] > match[j][i]){
                teams[i].score += 3;
            }
            else if(match[i][j] < match[j][i]) teams[j].score += 3;
            else {
                teams[i].score++;
                teams[j].score++;
            }
        }
    }

    sort(teams.begin(), teams.end(), [](Team a, Team b){
        if(a.score != b.score) return a.score > b.score;
        else if (a.shoot - a.receive != b.shoot - b.receive) return a.shoot - a.receive > b.shoot - b.receive;
        else if (a.shoot != b.shoot) return a.shoot > b.shoot;
    });

    for(int i = 0; i < 4; i++){
        cout << teams[i].name << ' ' << teams[i].score << '\n';
    }
}


/*
Denmark
Netherlands
Cameroon
Japan
0 0 2 1
2 0 2 1
1 1 0 0
3 0 1 0
*/