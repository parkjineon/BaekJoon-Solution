<h1>아스키 코드로 바꾸기</h1>
<h2>C++</h2>
<p>
      
      char input;
      cin >> input;
      cout << (int)input;
  
 </p>
 
  char로 받아서 (int) 형변환 해주기
  
 <h2>Python</h2>
 <p>
      
    inputChar = sys.stdin.readline().rstrip()
    print(ord(inputChar))
  
 </p>
 
 문자열로 받아서 ord() 함수 쓰기
 
 <ol>
  <li>ord(): 문자열을 아스키 코드로 바꾸기</li>
  <li>chr(): 아스키 코드를 문자열로 바꾸기</li>
  </ol>
