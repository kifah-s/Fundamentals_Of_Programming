# Questions ..

#### Answer the following questions according to what you learned from the video.

1 : vector<string> v = {"*", "Gammal"}; if(find(v.begin(), v.end(), *) != v.end()) cout << "Found";  
A : Compile Error

2 : vector<string> v = {"*", "Gammal"}; if(find(v.begin(), v.end(), v[0]) != v.end()) cout << v[0];  
A : *

3 : vector<string> x = {"line", "Gammal"}, y; y = x; cout << y[1] << (char)10;  
A : Gammal

4 : vector<string> x = {"Star", "Gammal"}; vector<int> y = {0, 1}; cout << x[y[1]];  
A : Gammal

5 : vector<string> x = {"Star", "Gammal"}; vector<int> y = {0, 1}; cout << x[y[1]] << (char)10;  
A : Gammal
