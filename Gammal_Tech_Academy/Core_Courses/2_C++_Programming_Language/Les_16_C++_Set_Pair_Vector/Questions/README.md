# Questions ..

#### Answer the following questions according to what you learned from the video.

1 : pair<int, vector<int> > p; p.first = 100; p.second = 10; cout << p.first;  
A : Compile Error

2 : set<vector<int> > s; s.insert(17); set<int> ::iterator it; cout << (*it);  
A : Compile Error

3 : vector<pair<int, int> > v; pair<int, int> p = {100, 10}; v.push_back(p);  
A : Correct

4 : vector<pair<int, int> > v; pair<int, int> p = {100, 10}; v.push_back(p); cout << v[0];  
A : Compile Error

5 : vector<pair<int,int> > v; pair<int, int> p = {100, 10}; v.push_back(p); cout << v[0].first;
A : 100
