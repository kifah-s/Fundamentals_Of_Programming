# Questions ..

#### Answer the following questions according to what you learned from the video.

1 : stringstream s = "Gammal Tech"; cout << s.str();  
A : Compile Error

2 : string s = "01Gammal Tech"; stringstream ss; ss << s; cout << ss.str();  
A : 01Gammal Tech

3 : stringstream ss("01"); char x; ss >> x; cout << x;  
A : 0

4 : stringstream ss("01"); int x; ss >> x; cout << x;  
A : 1

5 : stringstream ss("Gammal"); string x, y; ss >> x; ss >> y; cout << x << y;  
A : Gammal
