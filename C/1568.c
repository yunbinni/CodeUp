int maxi(int a, int b) {
	int rIdx = a;
	
	for(int i = a; i <= b; i++)
		rIdx = d[i] > d[rIdx] ? i : rIdx;
		
	return rIdx;
}
