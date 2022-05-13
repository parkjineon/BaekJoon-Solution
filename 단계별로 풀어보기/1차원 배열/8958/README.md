<h1>문자열 문자 하나씩 받기</h1>
<h2>C++</h2>
<p>
  
    char* enterInput(char* inputList) {
	  cin >> inputList;
	  return inputList;
    }
  
</p>
그냥 char 배열에 받으면 하나씩 받아진다.

<h2>Python</h2>

<p>
  
    testCase = list(sys.stdin.readline())

</p>

문자열 바로 list()로 묶으면 문자 하나씩 요소로 들어간다.
