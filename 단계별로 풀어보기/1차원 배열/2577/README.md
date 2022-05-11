<h1>1차원 배열</h1>
<h2>C++</h2>

<h3>포인터 사용</h3>
<p>
  
	int* analyzeResult(int result) {
	    int cnt[10] = { 0 };
	
	    while(result / 10 != 0){
	        cnt[result % 10]++;
	        result = result / 10;			
	    }	
	
	    cnt[result % 10]++;
	    return cnt;
  	}

</p>

<p>
  
  이렇게 지역변수로 선언하면 cnt는 함수 analyzeResult가 끝나면 사라진다.<br>
  아래 코드에서는 이미 사라진 변수를 출력하고 있는 것이다.
</p>

<p>
	
	int printCntResult(int* cnt) {
	
	    for (int i = 0; i < 10; i++) {
		cout << cnt[i] << "\n";
	    }

	    return 0;
	}

</p>
  
<h2>Python</h2>
<h3>lambda 사용</h3>

<h4>기본 사용</h4>
<p>
	
	(lambda 매개변수 : 표현식)(값)
	
</p>

<h4>map() 사용</h4>

<p>

	map(lambda 매개변수 : 표현식, 리스트)
	map(lambda 매개변수 : 표현식, range(n))

</p>

<h4>reduce()</h4>

<p>

	from functools import reduce
	reduce(lambda 매개변수 : 표현식, 리스트) //reduce(함수, 시퀀스)
	
</p>

<p>누적 적용</p>

<h4>filter()</h4>

<p>
	
	filter(lambda x: x < 5, range(10)) //filter(함수, 리스트)
			       
</p>

