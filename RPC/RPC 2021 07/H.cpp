#include <bits/stdc++.h>

using namespace std;

struct Person{
    int deadline;
    bool usePaper;

    const bool operator < (const Person otro) const {
        if(deadline == otro.deadline){
            if(otro.usePaper){
                return true;
            }
        } else return deadline > otro.deadline;
    }
};

priority_queue<Person> cola;
priority_queue<Person> colaPapel;

Person actual;
int stalls, people;
char paper;
bool happy = true;

void solve(){
    int satisfied = 0;
    int taim =0;
    int ocupied = 0;

    bool paperUsed = false;
    bool conPapel = true;
    bool sinPapel = true;
    Person pc, ps;

    for(int i=0; i<people; i++){
        if(colaPapel.empty()){
            conPapel = false;
        }
        if(cola.empty()){
            sinPapel = false;
        }
        if(sinPapel && conPapel){
            ps = cola.top();
            pc = colaPapel.top();

            if(pc.deadline <= taim || ps.deadline <= taim){
                happy = false;
                break;
            }

            if(pc.deadline <= ps.deadline){
                if(!paperUsed){
                    paperUsed = true;
                    colaPapel.pop();
                } else {
                    cola.pop();
                }
                ocupied++;
                if(ocupied == stalls){
                    taim++;
                    paperUsed = false;
                    ocupied = 0;
                }
            } else {
                cola.pop();
                ocupied++;
                if(ocupied == stalls){
                    taim++;
                    paperUsed = false;
                    ocupied = 0;
                }
            }
        } else if(conPapel){
            pc = colaPapel.top();
            if(pc.deadline <= taim){
                happy = false;
                break;
            } else {
                colaPapel.pop();
                taim++;
            }
        } else if(sinPapel){
            ps = cola.top();
            if(ps.deadline <= taim){
                happy = false;
                break;
            } else {
                cola.pop();
                ocupied++;
                if(ocupied == stalls){
                    taim++;
                    paperUsed = false;
                    ocupied = 0;
                }
            }
        }
    }

    if(happy){
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> stalls >> people;
    for(int i=0; i<people; i++){
        cin >> actual.deadline >> paper;
        actual.usePaper = paper == 'y'? true: false;
        if(paper == 'y'){
            colaPapel.push(actual);
        } else {
            cola.push(actual);
        }
    }
    solve();

    return 0;
}
