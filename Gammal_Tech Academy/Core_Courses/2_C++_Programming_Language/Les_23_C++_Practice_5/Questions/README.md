# Questions ..

#### Answer the following questions according to what you learned from the video.

1 : vector<int> x = {0, 2, 3}; if( find(x.begin(), x.end(), 3) != x.end() ) cout << "Found";  
A : Found

2 : vector<int> x = {0, 2, 3}; if( find(x.begin() + 1, x.end(), 0) != x.end() ) cout << "Found";  
A : None of the above

3 : vector<int> x = {0, 1, 3}; if( find(x.begin(), x.end(), !0) != x.end() ) cout << "Found";  
A : Found

4 : vector<int> x = {0, 1, 3}, y; y = x; if( find(x.begin(), x.end(), y[0]) != x.end() ) cout << "Found";  
A : Found

5 : vector<int> x = {0, 1, 3}, y; y = x; if( find(x.begin(), x.end(), !y[1]) != x.end() ) cout << "Found";  
A : Found
