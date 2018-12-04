#include <bits/stdc++.h>

using namespace std;

vector<string> getTree(int N) {
    vector<string> tree, tree2;
    tree.emplace_back("_");
    tree.emplace_back("");
    if (N == 1) {
        return tree;
    }
    int len = 1, final = 1 << (N - 2), end, mid;
    for (int start = 1; start <= final; start *= 2) {
        end = start * 3 - 1, mid = start * 2 - 1;
        tree2 = tree;
        tree.insert(tree.end(), tree2.begin(), tree2.end());
        for (int i = start; i <= end; ++i) {
            while (tree[i].length() < len) {
                tree[i] += " ";
            }
            tree[i] += "|";
            if (i == mid) {
                tree[i] += "_";
            }
        }
        len += 2;
    }
    return tree;
}

const int MAX = (1 << 13);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
//"C:\\CLionProjects\\ACM Regionals\\Regionals2017\\AsiaYangon\\A8220_ProperBinaryTree\\A8220.cpp"

//    freopen("C:\\CLionProjects\\ACM Regionals\\Regionals2017\\AsiaYangon\\A8220_ProperBinaryTree\\A8220.in", "w",
//            stdout);
//    cout << 13 << endl;
//    for (int i = 1; i < 14; ++i) {
////        cout << 13 << endl;
//        cout << i << endl;
//    }
//    freopen("C:\\CLionProjects\\ACM Regionals\\Regionals2017\\AsiaYangon\\A8220_ProperBinaryTree\\A8220.in", "r",
//            stdin);
//    freopen("C:\\CLionProjects\\ACM Regionals\\Regionals2017\\AsiaYangon\\A8220_ProperBinaryTree\\A8220.out", "w",
//            stdout);
    
    int noTcs, N;
    cin >> noTcs;
    vector<string> tree = getTree(13);
    for (int j = 1; j <= noTcs; ++j) {
        cout << "Case " << j << ":" << endl;
        cin >> N;
        int half = 1 << (N - 1);
        for (int i = 0; i < half; ++i) {
            cout << "o--|" << tree[i] << endl;
        }
        for (int i = MAX - half; i < MAX; ++i) {
            cout << "o--|" << tree[i] << endl;
        }
    }
    return 0;
}
