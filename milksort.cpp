/*
ID: tyeh1
LANG: C++
PROB: milk2
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

struct data {
	int beg;
	int end;
};

bool sort_by_beg( const data & lhs, const data & rhs )
{
   return lhs.beg < rhs.beg;
}

int main()
{
	data ans, input;
	int gap=0;
	int i=0;
	ifstream ifs("milk2.in");
	ofstream ofs("milk2.out");
	ifs >> i;
	vector<data> v(i);
	vector<data>::iterator iter, next;
	for (int j=0; j<i; j++)
	{
		ifs >> v[j].beg;
		ifs >> v[j].end;
	}

	sort(v.begin(), v.end(), sort_by_beg );
	
	iter = v.begin();
	while (iter <= v.end()-2)
	{		
		next = iter + 1;		
		while ((iter->beg <= next->beg) && (iter->end >= next->beg) )  // take care of overlapping session
		{			
			if (next->end >= iter->end) // this takes care of increasing the length of multiple milking runs		
				iter->end = next->end;  // else the next run is confined within the previous run				
			v.erase(next);  
			next = iter + 1;
			if (next == v.end()) break;	
		}		
		iter = iter + 1;
	}
	
	iter = v.begin();
	
	int longrun = 0;
	iter=v.begin();
	while (iter != v.end()) {
		if ((iter->end - iter->beg) > longrun) longrun = iter->end - iter->beg;
		iter++;
	}
	iter=v.begin();
	while (iter !=v.end()-1) {
		next = iter + 1;
		if ((next->beg - iter->end) > gap) gap = next->beg - iter->end;
		iter++;
	}
	ofs << longrun << " " << gap << endl; 
	ofs.close();
	ifs.close();
	//system("pause");
}
