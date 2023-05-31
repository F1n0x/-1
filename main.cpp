#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int kx, ky, lx, ly, sx, sy;

    cout << "Введите координаты короля ";
    cin >> kx >> ky;

    cout << "Введите координаты ладьи ";
    cin >> lx >> ly;
    cout << "Введите координаты слона ";
    cin >> sx >> sy;

    if ((kx == lx && sx == kx) && ((sy < ly && sy > ky) || (sy > ly && sy < ky))){
        cout << "Ладья перекрыта слоном" << endl;
    }
    else if((ky == ly && sy == ky) && ((sx < lx && sx > kx) || (sx > lx && sx < kx))){
        cout << "Ладья перекрыта слоном" << endl;
    }
    else if((abs(lx - sx) == abs(ly - sy) && (abs(kx - sx) == abs(ky - sy))) && ((lx < sx && lx > kx) || (lx > sx && lx < kx))){
        cout << "Слон перекрыт ладьей" << endl;
    }
    else if((kx == lx || ky == ly) && (abs(kx - sx) == abs(ky - sy))) {
        cout << "Ладья и слон атакуют короля" << endl;
    }
    else if (kx == lx || ky == ly) {
        cout << "Ладья атакует короля" << endl;
    }
    else if (abs(kx - sx) == abs(ky - sy)) {
        cout << "Слон атакует короля" << endl;
    }
    else {
        cout << "Король в безопасности" << endl;
    }
    return 0;
}
