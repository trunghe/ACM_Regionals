#include <bits/stdc++.h>

using namespace std;

//typedef long long ll;
//typedef vector<int> vi;
//typedef vector<vi> vvi;
//typedef vector<ll> vl;
//typedef vector<vl> vvl;
//typedef vector<vvl> vvvl;
//typedef pair<int, int> ii;
//typedef vector<ii> vii;
//typedef vector<vii> vvii;

//#define FOR(i, a, b) \
//    for (int i = (a); i < (b); i++)
//#define FORE(i, a, b) \
//    for (int i = (a); i <= (b); i++)
//#define FORD(i, a, b) \
//    for (int i = (a); i >= (b); i--)

//#define INF 1e9+7
//#define INFLL 1e18+7
//#define esp 1e-9
//#define PI 3.14159265
//
//ll nMod = 1e9 + 7;

//inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
//inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};


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

//void printTree(int N) {
//    int start[N + 1];
//    start[0] = 0;
//    start[1] = 1;
//    int end[N + 1];
//    end[0] = 0;
//    end[1] = 2;
//    int mid[N + 1];
//    mid[0] = 0;
//    mid[1] = 1;
//    int len[N + 1];
//    len[0] = 0;
//    len[1] = 1;
//    for (int i = 2; i <= N; ++i) {
//        start[i] = start[i - 1] * 2;
//        end[i] = start[i] * 3 - 1;
//        mid[i] = start[i] * 2 - 1;
//        len[i] = len[i - 1] + 1;
//    }
//    int final = 1 << N;
//    for (int i = 0; i < final; ++i) {
//        cout << "o--";
//        for (int j = 0; j <= i; ++j) {
//            for (int k = start[j]; k <= end[j]; ++k) {
//
//            }
//        }
////        for (int j = 0; j < len[i]; ++j) {
////
////        }
//    }
//}

const int MAX = (1 << 13);
//
//vector<string> layer[14];
//int len[MAX];
//
//void setupLayer() {
//    layer[0].resize(2, "");
//    layer[0][0] = "_";
//    layer[0][1] = "";
//    len[0] = 1;
//    len[1] = 0;
//    int leng = 1, final = (1 << 11), end, mid, endj = 4, step = 2, index = 1;
//    for (int start = 1; start <= final; start *= 2) {
//        layer[index].resize(endj, "");
//        end = start * 3 - 1, mid = start * 2 - 1;
//        for (int j = start * 2; j < endj; ++j) {
//            len[j] = len[j - step];
//        }
//        endj *= 2, step *= 2;
//        for (int i = start; i <= end; ++i) {
//            while (len[i] < leng) {
////                if (index == 1 && i == 2) {
////                    cout << len[2] << endl;
////                }
//                layer[index][i] += " ";
//                len[i]++;
//
//            }
//            layer[index][i] += "|";
//            len[i]++;
//            if (i == mid) {
//                layer[index][i] += "_";
//                len[i]++;
//            }
//        }
//        leng += 2;
//        index++;
//
//    }
//}

//string res[14];
//
//void output(int N) {
//    if (res[N].empty()) {
//        int total = 1 << N;
//        for (int i = 0; i < total; ++i) {
////        cout << "o--|";
//            res[N] += "o--|";
//            for (int j = 0; j < N; ++j) {
////            cout << layer[j][i % layer[j].size()];
//                res[N] += layer[j][i % layer[j].size()];
//            }
////        cout << "\n";
//            res[N] += "\n";
//        }
//        cout << res[N];
//    }
//}

//string tree[MAX];
//
//void setupTree(int N) {
//    tree[0] = "_";
//    tree[1] = "";
//    if (N == 1) {
//        return;
//    }
//    int len = 1, final = 1 << (N - 2), end, mid, endj = 4, step = 2;
//    for (int start = 1; start <= final; start *= 2) {
//        end = start * 3 - 1, mid = start * 2 - 1;
//        for (int j = start * 2; j < endj; ++j) {
//            tree[j] = tree[j - step];
//        }
//        endj *= 2, step *= 2;
//        for (int i = start; i <= end; ++i) {
//            while (tree[i].length() < len) {
//                tree[i] += " ";
//            }
//            tree[i] += "|";
//            if (i == mid) {
//                tree[i] += "_";
//            }
//        }
//        len += 2;
//    }
//}

//void outputTree(int N) {
//    int half =  1 << (N - 1);
//    for (int i = 0; i < half; ++i) {
//        cout << "o--|" << tree[i] << endl;
//    }
//    for (int i = MAX - half; i < MAX; ++i) {
//        cout << "o--|" << tree[i] << endl;
//    }
//}

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

//    freopen("C:\\CLionProjects\\Kattis Training\\Easy\\?\\?.err", "w", stderr);
//    setupLayer();
//    cout << len[2] << endl <<  layer[2][2] << endl << endl;
//            setupTree(13);

    int noTcs, N;
//    int total;
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
//        total = 1 << N;
//        output(N);
//        outputTree(N);
//        vector<string> tree = getTree(N);
//        for (int i = 0; i < total; ++i) {
//            cout << "o--|" << tree[i] << endl;
//        }
    }
    return 0;
}
