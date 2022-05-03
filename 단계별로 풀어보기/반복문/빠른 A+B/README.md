<h1>빠른 A+B</h1>
<h2>c++</h2>
<h3>● list 요소 접근하기</h3>
  <p>
    
    list<int> List;
    list<int>::iterator it;
  
    for(it=List.begin();it!=List.end();it++){
        a=*it;
    }
  
  </p>
<h3>● 실행 속도 높이기</h3>
  <p>  
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
  </p>
<h4>- ios_base::sync_with_stdio(false);</h4>   
  <ol>
    <li>c의 stdio와 c++의 iostream 동기화를 false로 변경</li>
    <li>C와 C++ 입출력 모두 버퍼 사용하는데, 위 코드 추가하면 C++가 독립적 버퍼 사용</li>
    <li><b>따라서 C 스타일의 입출력은 사용할 수 없으며, 실행 속도가 빨라지게 됨.</b></li>
  </ol>
  
<h4>-cin.tie(NULL);</h4>  
  <ol>
    <li>cin과 cout이 묶여있는 것을 풀어주는 역할</li>
    <li>기본적으로 cout은 별도의 명령이 있거나 버퍼가 가득차지 않아도, 
      다른 스트림에서 IO 작업이 진행되기 전 버퍼가 자동으로 비워짐.</li>
    <li><b>위 코드를 추가하면, 출력을 위해 별도의 명령으로 버퍼를 비워줘야 함.</b></li>
  </ol>
  
 <h4>-\n</h4>  
  <ol>
    <li>endl은 개행 문자 출력과 출력 버퍼를 비우는 역할(딜레이 발생)</li>
    <li><b>"\n"통해 개행 시 실행 속도 빨라짐.</b></li>
  </ol>
<h2>c++</h2>
<h3>● 실행 속도 높이기</h3>
  <p>
    
    import sys
    
    def makeCaseList(n):
    
      for i in range(0,n):
      a, b = map(int,sys.stdin.readline().split())
    
  </p>
  <h4>sys.stdin.readline()</h4>  
  <ol>
    <li>input()은 개행 문자 제거 후 리턴하며, 실행 속도가 늦음</li>
    <li><b>sys.stdin.readline()은 개행 문자 포함 리턴, 실행 속도 빠름</b></li>
    <li><b>.rstrip()이나 int(정수로 변환 시, 개행 문자 제거) 사용</b></li>
  </ol>
    
