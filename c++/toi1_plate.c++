#include<bits/stdc++.h>
using namespace std;

int main(){
    int Nc, Ns;
    cin >> Nc >> Ns;
    int classroom[1001];

    for(int i = 0; i < Ns; i++){
        int c, id;
        cin >> c >> id;
        classroom[id] = c;
    }

    vector<int> q;
    while (true){
        char command;
        cin >> command;
        if(command == 'X') break;
        if(command == 'E'){
            int id;
            cin >> id;
            int c = classroom[id];
            
            int insert_pos = -1;
            for(int i = q.size() - 1; i >= 0; i--){
                if(classroom[q[i]] == c){
                    insert_pos = i + 1;
                    break;
                }
            }

            if(insert_pos == -1){
                q.push_back(id);
            }
            else{
                q.insert(q.begin() + insert_pos, id);
            }
        }
        if(command == 'D'){
            if(q.empty()){
                cout << "empty" << endl;
            }
            else{
                cout << q[0] << endl;
                q.erase(q.begin());
            }
        }
    }
    cout << '0' << endl;
    return 0;
}

/*
2 6
1 41
1 42
1 43
2 201
2 202
2 203
E 41
E 201
D
E 202
E 42
E 43
D
E 203
D
D
D
X

out
41
201
202
203
42
0

*/