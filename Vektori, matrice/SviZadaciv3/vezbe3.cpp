#include "stdafx.h"
#include "zad4.h"
#include "zad3.h"
#include "zad5.h"
#include "zad7.h"
#include "zad8.h"
#include<vector>
#include<set>
#include<iostream>

using namespace std;

int main()
{
	/*vector<int> v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(7);
	v.push_back(8);
	v.push_back(12);
	v.push_back(5);
	v.push_back(64);
	v.push_back(213);

	zad4(v);
	
	int m;
	cin >> m;
	cout << endl;
	zad5(v, m);*/

	/*vector<vector<int>> mat;
	int n = 3, m = 2;
	vector<int> col1, col2, col3;
	col1.push_back(1);
	col1.push_back(2);
	col2.push_back(3);
	col2.push_back(4);
	col3.push_back(9);
	col3.push_back(5);
	mat.push_back(col1);
	mat.push_back(col2);
	mat.push_back(col3);
	cout << zad3(mat, n, m) << endl;*/

	//zad7

	//vector<Figura*> k;
	//k.push_back(new Krug(3));
	//k.push_back(new Kocka(5));
	//k.push_back(new Kvadrat(3.4));
	//k.push_back(new Kupa(2,4));
	//k.push_back(new Krug(9));

	////opisi
	//for (int i = 0;i < k.size();i++)
	//	k[i]->opis();

	////povrsine i zapremine
	//double p = 0;
	//double v = 0;
	//for (int i = 0;i < k.size();i++)
	//{
	//	if (k[i]->dim() == 1)
	//	{
	//		Krug* d = (Krug*)k[i];
	//		p += d->povrsina();
	//	}
	//	else
	//		if (k[i]->dim() == 2)
	//		{
	//			Kvadrat* d = (Kvadrat*)k[i];
	//			p += d->povrsina();
	//		}
	//		else
	//			if (k[i]->dim() == 3)
	//			{
	//				Kocka* d = (Kocka*)k[i];
	//				v += d->zapremina();
	//			}
	//			else
	//			{
	//				Kupa* d = (Kupa*)k[i];
	//				v += d->zapremina();
	//			}
	//}
	//cout << p << endl << v << endl;
    
	//zad8
	
	set<Trojka, Trojka_uredjenje> s;

	s.insert(Trojka(1,2,3));
	s.insert(Trojka(3, 2, 3));
	s.insert(Trojka(2, 2, 3));
	s.insert(Trojka(1, 2, 1));
	s.insert(Trojka(1, 2, 2));
	
	return 0;
}

