#include <iostream>
using namespace std;

int main(){

    double nilaiMath, nilaiBindo;
  

    cout << "masukan nilai matematika : ";
    cin >>  nilaiMath;
    cout << "Masukkan nilai bahasa indonesia";
    cin >> nilaiBindo;

    // rerata = (nilaiMath + nilaiBindo)/2;
    // rata = rerata(nilaiMath, nilaiBindo);
    // st = status(rerata(nilaiMath, nilaiBindo));

    // if (rata >= 60){
    //     status = "lulus";
    // }else {
    //     status ="gagal"
    // }

    cout << "nilai rata-rata nya : " << rerata(nilaiBindo, nilaiBindo);
    cout << "status kelulusannya : " << status(rerata(nilaiBindo, nilaiBindo));
    cout << "status kelulusannya : " << status2(rerata(nilaiBindo, nilaiBindo), nilaiMath);
    cout << "status kelulusannya : " << status3(rerata(nilaiBindo, nilaiBindo)), nilaiMath;

}