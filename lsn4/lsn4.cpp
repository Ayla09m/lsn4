#include <iostream>
using namespace std;

int main()
{
	cout << "task1\n";
	int olcu, suret;
	cout << "filmin gigabayt ile olcusu:";
	cin >> olcu;
	cout << "internetin bit/saniye ile sureti:";
	cin >> suret;
	double olcu_bit = olcu * 8 * 1024 * 1024 * 1024;
	double zaman = olcu_bit / suret;
	int saat = zaman / 3600;
	zaman -= saat * 3600;
	int deqiqe = zaman / 60;
	zaman -= deqiqe * 60;
	cout << "film " << saat << "saat " << deqiqe << "\ndeqiqe " << zaman << "\nsaniyeye yuklenecek" << endl;
	cout << "task2\n";
	int olcu2;
	cout << "flas drive-in gigabayt ile olcusu:";
	cin >> olcu2;
	int olcu_mbayt = olcu2 * 1024;
	cout << "kino flasa nece defe yerleser:" << int(olcu_mbayt / 720) << endl;
	cout << "task3\n";
	int imtahan_veren, borclular;
	cout << "imtahani verenlerin sayi:";
	cin >> imtahan_veren;
	cout << "imtahani vermeyenlerin sayi:";
	cin >> borclular;
	cout << "imatahani verenlerin faizi" << (imtahan_veren / imtahan_veren + borclular) * 100 << "borclularin faizi:" << (borclular / imtahan_veren + borclular) * 100 << endl;
	cout << "task4\n";
	int saniye;
	cout << "gunun baslangicindan kecen saniye:";
	cin >> saniye;
	double vaxt = 24 * 3600 - saniye;
	int saat2 = vaxt / 3600;
	vaxt -= saat2 * 3600;
	int deq = vaxt / 60;
	vaxt -= deq * 60;
	cout << "saat:" << saat << "deqiqe:" << deq << "saniye" << vaxt << endl;
	cout << "task5\n";
	int film_olcu;
	cout << "filmin gigabayt ile olcusunu daxil edin:";
	cin >> film_olcu;
	const double disket = 1.44;
	cout << int(film_olcu * 1024 / disket) << " lazimdir" << endl;
	cout << "task6\n";
	double num;
	cout << "kesr eded daxil edin:";
	cin >> num;
	int num_yuvarlaq = num * 100;
	cout << "yuvarlaqlasdirilmis eded:" << double(num_yuvarlaq) / 100;







}