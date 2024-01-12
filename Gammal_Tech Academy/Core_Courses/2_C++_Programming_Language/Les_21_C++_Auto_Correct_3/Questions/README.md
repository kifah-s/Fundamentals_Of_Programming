# Questions ..

#### Answer the following questions according to what you learned from the video.

1 : vector<int> x = {32}; vector<char> y = {'G'}; cout << (char) (y[0] + x[0]);  
A : g

2 : vector<int> x = {32}; vector<string> y = {"Hi"}; cout << y[0] << char(x[0]) << y[0];  
A : Hi Hi

3 : vector<string> y = {"Gammal"}; y = tolower(y[0]); cout << y[0];  
A : Compile Error

4 : vector<string> y = {"Gammal"}; y[0] = toupper(y[0][5]); cout << y[0];  
A : L

5 : vector<string> y = {"Gammal"}; y[0][0] = toupper(y[0][0]); cout << y[0];  
A : Gammal
